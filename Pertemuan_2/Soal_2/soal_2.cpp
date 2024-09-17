#include <iostream>
#include <string>
using namespace std;

int main(){	
	double A,B,C,D,x,x1,x2;	//mendeklarasikan variabel A, B, C, D, x, x1, x2, sebagai double

	cout<<"Insert A: "<<endl;	//masukkan jumlah A, B, dan C
		cin>>A;	
	cout<<"Insert B: "<<endl;
		cin>>B;
	cout<<"Insert C: "<<endl;
		cin>>C;

	D = ( B*B - 4*A*C);	//menentukan diskriminan dari A, B, dan C, dengan rumus berikut
		cout<<"Discriminant: "<<D<<endl;	//tampilkan diskriminan

	if (D < 0){																		//apabila Diskriminan kurang dari 0
		cout<<"There are no real roots (the roots are complex)."<<endl;				//akan tampilkan kata berikut
	} else if(D > 0){											//Jika Diskriminan lebih dari 0
		x1 = -	(B - D) / (2*A);								//akan menampilkan 2 hasil dengan rumus berikut
		x2 = - (B + D) / (2*A);
		cout<<"There are two distinct real roots: "<< endl;		//dan menampilkan kata berikut
		cout<<"X1= "<<x1<<endl;
		cout<<"X2= "<<x2<<endl;
	} else if (D == 0){											//Jika Diskriminan sama dengan 0
		x = -B / 2*A;											//akan menampilkan hasil dengan rumus berikut
		cout<<"There is exactly one real root: " << x <<endl;	//dan menampilkan kata berikut
	}

return 0;	
}