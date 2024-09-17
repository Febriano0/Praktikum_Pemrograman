#include <iostream>
#include <string>
using namespace std;

int main(){
	char nm1[50];	//penetapan nama karyawan yang tidak lebih dari 30 huruf
	int slry,insr,instl,net,tax;	//mendeklarasikan salary, instalment, tax, dan net adalah integer

	cout<<"Insert Employee Name: "<<endl;	//input dari user untuk nama karyawan
		cin.getline(nm1, 50);	
	
	cout<<"Insert Salary: "<<endl;	//masukkan jumlah salary utama
		cin>> slry;
	cout<<"Insert Installment: "<<endl;	//masukkan biaya installment
		cin>> instl;
	cout<<"Insert Insurance: "<<endl;	//masukkan biaya insurance
		cin>>insr;

	tax = slry * 20 / 100;	//penjumlahan untuk menetapkan tax 20% dari salary utama
	net = slry - insr - instl - tax;	//pengurangan salary utama dengan tax, installment, dan insurance

	cout<<"============================="<<endl;	//display semua rincian dalam bentuk tabel sesuai rumus yang sudah dibuat
	cout<<"PAYSLIP FOR EMPLOYEE"<<endl;
	cout<<"============================="<<endl;
	cout<<"Name        :    "<<nm1<<endl;
	cout<<"Gross Salary:    Rp."<< slry <<",00"<<endl;
	cout<<"Tax (20%)   :    Rp."<< tax <<",00"<<endl;
	cout<<"Installment :    Rp."<< instl <<",00"<<endl;
	cout<<"Insurance   :    Rp."<< insr <<",00"<<endl;
	cout<<"Net Salary  :    Rp."<< net <<",00"<<endl;
	cout<<"============================="<<endl;

return 0;
}