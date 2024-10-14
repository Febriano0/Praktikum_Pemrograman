#include<iostream>
#include<vector>
using namespace std;
void fizzbuzz(){
    int n; cin>>n;
    vector<string> h;
    h.reserve(n);

    for(int i=1; i<=n; ++i){
        if(i%3 == 0 && i%5 == 0){
            h.push_back("FizzBuzz");
        }else if(i%3 == 0){
            h.push_back("Fizz");
        }else if(i%5 == 0){
            h.push_back("Buzz");
        }else{
            h.push_back(to_string(i));
        }
    }
    for(const auto & h : h){
        cout<<h<<endl;
    }
    return 0;
}
void reverse(){
vector<int> reverseVector(const vector<int>& h){
    vector<int> r(h.rbegin(), h.rend());
    return r;
}
    int n;
    cout<<"Masukkan Jumlah Angka: ";
    cin>>n;

    vector<int> h(n);
    cout<<"Masukkan "<<n<<" Angka: ";
    for(int i=0; i<n; ++i){
        cin>>h[i];
    }
    vector<int> r=reverseVector(h);

    cout<<"Reversed: ";
    for(int i=0; i<r.size(); ++i){
        cout<<r[i]<<" ";
    }
    cout<<endl;
    return 0;
}
int main(){
    fizzbuzz();
    reverse();
}
