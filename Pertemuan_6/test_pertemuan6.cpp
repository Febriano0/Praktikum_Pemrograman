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

int main() {
    int n = 3;

    item[0] = {{"Pensil", "P001"}, 100, 1500.0};
    item[1] = {{"Pulpen", "P002"}, 50, 2500.0};
    item[2] = {{"Buku", "B001"}, 30, 5000.0};

    cout<<"Isi Gudang" << endl;
    for(int i=0; i<n; i++){
        cout<<"Nama: "<<item[i].produk.nama<<endl;
        cout<<"Kode: "<<item[i].produk.code<<endl;
        cout<<"Jumlah: "<<item[i].jumlah<<endl;
        cout<<"Harga Satuan: Rp."<<item[i].harga<<endl;
        cout<<"Harga Rata-Rata: Rp."<<item[i].harga / item[i].jumlah<<endl;
    }cout<<endl;
    return 0;
}
