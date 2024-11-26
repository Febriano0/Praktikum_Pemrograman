#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& bil1, vector<int>& bil2, vector<int>& hasil){
    int i=0, j=0;
    hasil.clear();
    while(i<bil1.size() && j<bil2.size()){
        if(bil1[i]<bil2[j]){
            hasil.push_back(bil1[i]);
            i++;
        }else{
            hasil.push_back(bil2[j]);
            j++;
        }
    }

    while(i<bil1.size()){
        hasil.push_back(bil1[i]);
        i++;
    }

    while(j<bil2.size()){
        hasil.push_back(bil2[j]);
        j++;
    }
}

int main(){
    vector<int> bil1={1, 3, 5, 7};
    vector<int> bil2={2, 4, 6, 8};
    vector<int> hasil;
    merge(bil1, bil2, hasil);
    for(int i=0; i<hasil.size(); i++){
        cout<<hasil[i]<<" ";
    }
    return 0;
}