#include <iostream>
#include <string>
using namespace std;

int main(){
 int A,B,C;                                                 //Mendeklarasikan A,B,dan C

    cout<<"Masukkan Bilangan 1: "<<endl;                    //Membuat Input untuk A,B,dan C
        cin>>A;
    cout<<"Masukkan Bilangan 2: "<<endl;
        cin>>B;
    cout<<"Masukkan Bilangan 3: "<<endl;
        cin>>C;

    if (C > B && C > A){                                         //Operasi Bilangan yang menentukan bilangan terbesar dari 3 bilamgan tadi
        cout<<"Bilangan Terbesar adalah: "<<C<<endl;
    } else if(B > C && B > A){
        cout<<"Bilangan Terbesar adalah: "<<B<<endl;
    } else if(A > B && A > C){
        cout<<"Bilangan Terbesar adalah: "<<A<<endl;
    }
return 0;
}