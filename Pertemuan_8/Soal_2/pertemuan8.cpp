#include<iostream>
using namespace std;

double Total(int arr[], int n){
    if (n==1)
        return arr[0];
    return arr[n-1] + Total(arr, n-1);
}

double Rata(int arr[], int n){
    if (n == 0)
        return 0;
    return Total(arr, n)/n;
}

int main(){
    int n;
    cout<<"Masukkan jumlah elemen: ";
    cin>>n;

    int arr[n];
    cout<<"Masukkan "<<n<<" angka: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }cout<<"Rata-rata dari angka-angka yang dimasukkan adalah: "<<Rata(arr, n)<<endl;
    return 0;
}
