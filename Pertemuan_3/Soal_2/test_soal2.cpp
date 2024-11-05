#include <iostream>
#include <string>
using namespace std;

int main(){
 int A=8,B=10,C=15;                                                 //Mendeklarasikan A,B,dan C

    cout<<"Masukkan Bilangan 1: 8"<<endl;                    //Membuat Input untuk A,B,dan C
    cout<<"Masukkan Bilangan 2: 10"<<endl;
    cout<<"Masukkan Bilangan 3: 15"<<endl;

    if (C > B && C > A){                                         //Operasi Bilangan yang menentukan bilangan terbesar dari 3 bilamgan tadi
        cout<<"Bilangan Terbesar adalah: "<<C<<endl;
    } else if(B > C && B > A){
        cout<<"Bilangan Terbesar adalah: "<<B<<endl;
    } else if(A > B && A > C){
        cout<<"Bilangan Terbesar adalah: "<<A<<endl;
    }
return 0;
}