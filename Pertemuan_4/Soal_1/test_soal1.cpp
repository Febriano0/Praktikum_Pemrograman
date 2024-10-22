#include<iostream>
using namespace std;

int main(){
    int i, n=5;
    
    cout<<"Insert Number: "<< n<<endl;
    int f=0;
    for (i=0; i<=n; i++){
        f+=i;
    }
    cout<<"Sum: "<<f<<endl;

    return 0;
}