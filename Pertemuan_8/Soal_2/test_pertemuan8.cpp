#include <iostream>
using namespace std;

double Total(int arr[], int n){
    if (n==1)
        return arr[0];
    return arr[n-1] + Total(arr, n-1);
}

double Rata(int arr[], int n){
    if (n==0)
        return 0;
    return Total(arr, n)/n;
}

int main(){
    int n=3;
    cout<<"Masukkan jumlah elemen: "<<n<<endl;

    int arr[]={7, 2, 5};
    cout << "Angka-angka yang dimasukkan adalah: ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Rata-rata dari angka-angka yang dimasukkan adalah: "<<Rata(arr, n)<<endl;
    return 0;
}
