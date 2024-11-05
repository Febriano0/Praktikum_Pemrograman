#include <iostream>
#include <string>
using namespace std;

int main(){	
	double A=87,B=98,C=33,D,x,x1,x2;		//mendeklarasikan variabel A, B, C, D, x, x1, x2, sebagai double
    
	cout<<"Insert A: 87"<<endl;	//masukkan jumlah A, B, dan C
	cout<<"Insert B: 98"<<endl;
	cout<<"Insert C: 33"<<endl;

	D = ( B*B - 4*A*C);						//menentukan diskriminan dari A, B, dan C, dengan rumus berikut
		cout<<"Discriminant: "<<D<<endl;	//tampilkan diskriminan

	if (D < 0){											//apabila Diskriminan kurang dari 0
		cout<<"Result: (Imaginer)."<<endl;				//akan tampilkan kata berikut
	} else if(D > 0){									//Jika Diskriminan lebih dari 0
		x1 = -	(-B + D) / 2*A;							//akan menampilkan 2 hasil dengan rumus berikut
		x2 = - (-B - D) / 2*A;
		cout<<"There are two distinct real roots: "<< endl;		//dan menampilkan kata berikut
		cout<<"X1= "<<x1<<endl;
		cout<<"X2= "<<x2<<endl;
	} else if (D == 0){											//Jika Diskriminan sama dengan 0
		x = -B / 2*A;											//akan menampilkan hasil dengan rumus berikut
		cout<<"There is exactly one real root: "<<endl;
        cout<<"X1= " << x <<endl;
        cout<<"X2= " << x <<endl;
	}

return 0;	
}