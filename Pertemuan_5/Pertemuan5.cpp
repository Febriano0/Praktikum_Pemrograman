#include<iostream>
#include<vector>
using namespace std;

void fizzbuzz(){
    int n; cin>>n;
    vector<string>hasil;
    hasil.reserve(n);

    for(int i=1; i<=n; ++i){
        if(i%3 == 0 && i%5 == 0){
            hasil.push_back("FizzBuzz");
        } else if (i % 3 == 0){
            hasil.push_back("Fizz");
        } else if (i % 5 == 0){
            hasil.push_back("Buzz");
        } else{
            hasil.push_back(to_string(i));
        }
    }
    for(const auto & hasil : hasil){
        cout<<hasil<<endl;
    }
}

vector<int> reverseVector(const vector<int>& vec){
    vector<int> reversedVec(vec.rbegin(), vec.rend());
    return reversedVec;
}

void reverse(){
    int n;
    cout<<"Masukkan Jumlah Angka: ";
    cin>>n;

    vector<int>angka(n);
    cout<<"Masukkan "<<n<<" Angka: ";
    for(int i=0; i<n; ++i){
        cin>>angka[i];
    }

    vector<int> reversedNumbers = reverseVector(angka);

    cout<<"Reversed: ";
    for(int i=0; i<reversedNumbers.size(); ++i){
        cout<<reversedNumbers[i]<<" ";
    }
    cout<<endl;
}

int main(){
    fizzbuzz();
    reverse();
}
