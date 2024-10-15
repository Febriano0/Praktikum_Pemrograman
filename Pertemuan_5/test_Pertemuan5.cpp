#include<iostream>
#include<vector>
using namespace std;

void fizzbuzz(){
    int n = 15;
    vector<string> hasil;
    hasil.reserve(n);

    for(int i = 1; i <= n; ++i){
        if(i % 15 == 0){
            hasil.push_back("FizzBuzz");
        } else if (i % 5 == 0){
            hasil.push_back("Buzz");
        } else if (i % 3 == 0){
            hasil.push_back("Fizz");
        } else{
            hasil.push_back(to_string(i));
        }
    }

    for(const auto & hasil : hasil){
        cout << hasil << endl;
    }
}

vector<int> reverseVector(const vector<int>& vec){
    vector<int> reversedVec(vec.rbegin(), vec.rend());
    return reversedVec;
}

void reverse(){
    int n = 5;
    cout << "Masukkan Jumlah Angka: " << n << endl;

    vector<int> angka = {1, 2, 3, 4, 5};
    cout << "Masukkan " << n << " Angka: ";
    for(int i = 0; i < n; ++i){
        cout << angka[i] << " ";
    }
    cout << endl;

    vector<int> reversedNumbers = reverseVector(angka);

    cout << "Reversed: ";
    for(int i = 0; i < reversedNumbers.size(); ++i){
        cout << reversedNumbers[i] << " ";
    }
    cout << endl;
}

int main(){
    fizzbuzz();
    reverse();
}
