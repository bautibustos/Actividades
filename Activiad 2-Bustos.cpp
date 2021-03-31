#include <iostream>
#include <stdlib.h>
using namespace std;



main (){
	float a;//datos pedidos al usuario
	float b;
	float c;
	
	cout <<"ingresa el primer nunero real o entero para comparar (n° a)" <<endl;
	cin>>a;
	cout <<"ingresa el segundo nunero real o entero para comparar (n° b)" <<endl;
	cin>>b;
	cout<<"ingresa el tercer numero real o entero para comparar (n° c)"<<endl; 
	cin>>c;
	

	if ((a>b)&&(a>c))
		cout<<"a es el mayor de los 3 "<<endl;
	if ((b>a)&&(b>c))
		cout<<"b es el mayor de los 3"<<endl;	
	if ((c>a)&&(c>b))
		cout<<"c es el mayor de los 3"<<endl;	
	if ((a==b)&&(a==c)&&(b==c))
		cout<<"los 3 numeros son iguales"<<endl;
	else { 

		if (a==b)
			cout<<"a es igual a b"<<endl;
			else
				if (a==c)
					cout<<"a es igual a c"<<endl;
				else
						if (b==c)
								cout<<"b es igual a c"<<endl;
	}
	
	
	return 0;
}
