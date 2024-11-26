#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& bil1, vector<int>& bil2, vector<int>& hasil){
    int i=0, j=0;
    hasil.clear();
    while(i<bil1.size() && j<bil2.size()){
        if(bil1[i] < bil2[j]){
            hasil.push_back(bil1[i]);
            i++;
        }else{
            hasil.push_back(bil2[j]);
            j++;
        }
    }
    while(i<bil1.size()){
        hasil.push_back(bil1[i]);
        i++;
    }
    while(j<bil2.size()){
        hasil.push_back(bil2[j]);
        j++;
    }
}

int main(){
    int x, y;

    cout<<"Masukkan Jumlah Data 1: ";
    cin>>x;
    vector<int>bil1(x);
    cout<<"Masukkan Isi Data 1 ("<<x<<" elemen):"<<endl;
    for(int i=0; i<x; i++){
        cin>>bil1[i];
    }
    cout<<"Masukkan Jumlah Data 2: ";
    cin>>y;
    vector<int>bil2(y);
    cout<<"Masukkan Isi Data 2 ("<<y<<" elemen):"<<endl;
    for (int i = 0; i < y; i++) {
        cin >> bil2[i];
    }
    
    vector<int>hasil;
    merge(bil1, bil2, hasil);
    
    cout<<"Hasil Penggabungan: ";
    for(int i=0; i<hasil.size(); i++){
        cout<<hasil[i]<<" ";
    }
    cout<<endl;
    return 0;
}
