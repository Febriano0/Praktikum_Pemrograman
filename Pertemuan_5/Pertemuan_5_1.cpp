#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin>>n;
    vector<string> h;
    h.reserve(n);

    for(int i=1; i<=n; ++i) {
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
    for(const auto & h : h) {
        cout<<h<<endl;
    }
    return 0;
}