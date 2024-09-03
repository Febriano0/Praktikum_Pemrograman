#include <iostream>
#include <string>

using namespace std;

main(){

string nm;
int slry,net,insr,instl,tax;

cout<<"Insert Employee Name: "<<endl;
	cin>>nm;
cout<<"Insert Salary: "<<endl;
	cin>> slry;
cout<<"Insert Installment: "<<endl;
	cin>> instl;
cout<<"Insert Insurance: "<<endl;
	cin>>insr;

tax = slry * 20 / 100;
net = slry - insr - instl - tax;

cout<<"============================="<<endl;
cout<<"PAYSLIP FOR EMPLOYEE"<<endl;
cout<<"============================="<<endl;
cout<<"Name: "<<nm<<endl;
cout<<"Gross Salary: Rp."<< slry <<",00"<<endl;
cout<<"Tax (20%):    Rp." << tax <<",00"<<endl;
cout<<"Installment:  Rp."<< instl <<",00"<<endl;
cout<<"Insurance:    Rp."<< insr <<",00"<<endl;
cout<<"Net Salary:   Rp."<< net <<",00"<<endl;
cout<<"============================="<<endl;
}