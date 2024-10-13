#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseVector(const vector<int>& h){
    vector<int> r(h.rbegin(), h.rend());
    return r;
}
int main(){
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
