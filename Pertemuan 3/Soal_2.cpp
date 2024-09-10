#include <iostream>
#include <string>
using namespace std;

int main(){
 int A,B,C;

    cout<<"Masukkan Bilangan 1: "<<endl;
        cin>>A;
    cout<<"Masukkan Bilangan 2: "<<endl;
        cin>>B;
    cout<<"Masukkan Bilangan 3: "<<endl;
        cin>>C;

    if (C > B > A){
        cout<<"Bilangan Terbesar adalah: "<<C<<endl;
    } else if(B > C > A){
        cout<<"Bilangan Terbesar adalah: "<<B<<endl;
    } else if(A > B > C){
        cout<<"Bilangan Terbesar adalah: "<<A<<endl;
    }
return 0;
}