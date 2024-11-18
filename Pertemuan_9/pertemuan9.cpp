#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Siswa {
    string nim;
    string nama;
    int nilai;
};

void tampilkanData(const vector<Siswa>& data){
    cout<<"NIM\t\t\tNama\t\t\t\t\tNilai"<<endl;
    for(const auto& siswa : data){
        cout<<siswa.nim<<"\t"<<siswa.nama<<"\t\t"<<siswa.nilai<<endl;
    }
}

void insertionSortNIM(vector<Siswa>& data){
    for (int i=1; i<data.size(); i++){
        Siswa key = data[i];
        int j = i-1;
        while (j >= 0 && data[j].nim > key.nim){
            data[j+1] = data[j];
            j--;
        }
        data[j+1] = key;
    }
}

void insertionSortNilai(vector<Siswa>& data){
    for (int i=1; i<data.size(); i++){
        Siswa key = data[i];
        int j = i-1;
        while (j >= 0 && data[j].nilai > key.nilai){
            data[j+1] = data[j];
            j--;
        }
        data[j+1] = key;
    }
}

int binarySearchNIM(const vector<Siswa>& data, const string& nim){
    int left = 0, right = data.size() - 1;
    while(left <= right) {
        int mid = left+(right-left)/2;
        if(data[mid].nim == nim){
            return mid;
        }
        if(data[mid].nim < nim){
            left=mid+1;
        } else{
            right=mid-1;
        }
    }
    return -1;
}


void gantinama(vector<Siswa>& data, const string& nim, const string& namabaru){
    for(auto& siswa : data){
        if(siswa.nim==nim){
            siswa.nama=namabaru;
            cout<<"Nama siswa dengan NIM "<<nim<<" telah diubah menjadi "<<namabaru<<"."<<endl;
            return;
        }
    }
    cout<<"Siswa dengan NIM "<<nim<<"tidak ditemukan."<<endl;
}

int main(){
    vector<Siswa> data={
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfandra", 55},
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70},
        {"9952382180", "Ari Lutfianto", 65},
        {"9965653989", "Arief Budiman", 60}
    };

    int pilihan, metode;
    cout<<"Masukkan Keperluan:"<<endl;
    cout<<"(1) Urutkan Data"<<endl;
    cout<<"(2) Cari Nilai berdasarkan NIM"<<endl;
    cout<<"(3) Ubah Nama Siswa"<<endl;
    cin>>pilihan;

    if(pilihan==1){
        cout<<"Urutkan Berdasarkan:"<<endl;
        cout<<"(1) NIM"<<endl;
        cout<<"(2) Nilai"<<endl;
        cin>>metode;

        if(metode==1){
            insertionSortNIM(data);
            cout<<"Data diurutkan berdasarkan NIM:"<<endl;
            tampilkanData(data);
        }else if(metode==2){
            insertionSortNilai(data);
            cout<<"Data diurutkan berdasarkan Nilai:"<<endl;
            tampilkanData(data);
        }else{
            cout<<"Pilihan tidak valid."<<endl;
        }

    } else if(pilihan==2){
        string cariNIM;
        cout<<"Masukkan NIM yang Dicari: ";
        cin>>cariNIM;

        insertionSortNIM(data);
        int index = binarySearchNIM(data, cariNIM);

        if(index !=-1){
            cout<<"Nilai siswa dengan NIM "<<cariNIM<<" adalah: "<< data[index].nilai<<endl;
        }else{
            cout<<"Siswa dengan NIM "<<cariNIM<<" tidak ditemukan."<<endl;
        }

    } else if(pilihan == 3){
        string nim, namabaru;
        cout << "Masukkan NIM: ";
        cin >> nim;
        cout << "Masukkan Nama siswa yang baru: ";
        cin.ignore();
        getline(cin, namabaru);

        gantinama(data, nim, namabaru);
        cout << "Data setelah pengubahan:" << endl;
        tampilkanData(data);
    } else{
        cout<<"Pilihan tidak valid."<<endl;
    }
    return 0;
}
