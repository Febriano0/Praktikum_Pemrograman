#include<iostream>
using namespace std;

int fibonacci(int n){
    if (n<=1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n=12;
    cout<<"Masukkan nilai n untuk bilangan Fibonacci ke: 12"<<endl;
    cout<<"Bilangan Fibonacci ke-"<<n<<" adalah: "<< fibonacci(n)<<endl;
    return 0;
}
