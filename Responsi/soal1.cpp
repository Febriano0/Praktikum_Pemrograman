#include<iostream>
using namespace std;

int faktorial(int n){
    int faktorial = 1;
    for(int i=1; i<=n; i++){
        faktorial *= i;
    }
    return faktorial;
}

int main(){
    int n;
    cout<<"Masukkan Angka: ";
    cin>>n;
    cout<<"Faktorial dari "<<n<<" Adalah: "<<faktorial(n);
    return 0;
}