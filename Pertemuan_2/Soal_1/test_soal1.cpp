#include <iostream>
#include <string>
using namespace std;

int main(){
	int slry=1000000,insr=10000,instl=5000,net,tax;	//mendeklarasikan salary, instalment, tax, dan net adalah integer

	cout<<"Insert Employee Name: GIBRAN MULYONO"<<endl;	//input dari user untuk nama karyawan
	
	cout<<"Insert Salary: 1000000"<<endl;	//masukkan jumlah salary utama
	cout<<"Insert Installment: 1000"<<endl;	//masukkan biaya installment
	cout<<"Insert Insurance: 5000"<<endl;	//masukkan biaya insurance

	tax = slry * 20 / 100;	//penjumlahan untuk menetapkan tax 20% dari salary utama
	net = slry - insr - instl - tax;	//pengurangan salary utama dengan tax, installment, dan insurance

	cout<<"============================="<<endl;	//display semua rincian dalam bentuk tabel sesuai rumus yang sudah dibuat
	cout<<"PAYSLIP FOR EMPLOYEE"<<endl;
	cout<<"============================="<<endl;
	cout<<"Name        :    GIBRAN MULYONO"<<endl;
	cout<<"Gross Salary:    Rp."<< slry <<",00"<<endl;
	cout<<"Tax (20%)   :    Rp."<< tax <<",00"<<endl;
	cout<<"Installment :    Rp."<< instl <<",00"<<endl;
	cout<<"Insurance   :    Rp."<< insr <<",00"<<endl;
	cout<<"Net Salary  :    Rp."<< net <<",00"<<endl;
	cout<<"============================="<<endl;

return 0;
}