#include <iostream>
using namespace std;

int main() {
    int n=7, i;
    cout << "Masukkan Nomor untuk dibentuk tabel perkalian 10: "<< n<<endl;

    int h;
    cout<<"================<TABEL PERKALIAN " << n << ">================"<<endl;
    for (i = 1; i <= 10; i++) {
        h = n * i;
        cout << n << " x " << i << " = " << h << endl;
    }
    cout<<"===================================================="<<endl;

    return 0;
}