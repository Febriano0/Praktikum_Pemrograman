#include<iostream>
using namespace std;

struct barang{
    string nama;
    string code;
};
struct gudang{
    barang produk;
    int jumlah;
    float harga;
};
gudang item[50];

int main(){
    int n;
    cout<<"Masukkan Jumlah barang: ";
    cin>>n;

    cout<<"Isi Gudang"<<endl;
    for(int i=0; i<n; i++){
        cout<<"Nama Barang: ";
        cin>>item[i].produk.nama;
        cout<<"Kode Barang: ";
        cin>>item[i].produk.code;
        cout<<"Jumlah Barang: ";
        cin>>item[i].jumlah;
        cout<<"Harga Barang: ";
        cin>>item[i].harga;
    }cout<<endl;

    cout<<"Isi Gudang"<<endl;
    for(int i=0; i<n; i++){
        cout<<"Nama: "<<item[i].produk.nama<<endl;
        cout<<"Kode: "<<item[i].produk.code<<endl;
        cout<<"Jumlah: "<<item[i].jumlah<<endl;
        cout<<"Harga Satuan: Rp."<<item[i].harga << endl;
        cout<<"Harga Rata-Rata: Rp."<<item[i].harga / item[i].jumlah<<endl;
    }cout<<endl;
    return 0;
}
