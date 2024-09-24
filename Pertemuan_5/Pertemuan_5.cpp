#include<iostream>
using namespace std;

int main(){
    int i,n;

    cin>> n;
    int f=0;
    for (i=1; i<=n; i++){
    if(i%3==0 && i%5==0){
        cout<<"FizzBuzz"<<endl;
    }else if(i%3==0){
        cout<<"Fizz"<<endl;
    }else if(i%5==0){
        cout<<"Buzz"<<endl;
    }else cout << i<<endl;
    }

    return 0;
}

int sec(){
    int n;
    
    cin>>n;
    cout<<n;

    return 0;
}