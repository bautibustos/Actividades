#include <iostream>
#include <stdlib.h>
using namespace std;



main (){
	float a;//datos pedidos al usuario
	float b;
	float c;
	
	
	//ingreso de datos 
	cout <<"ingresa el primer nunero real o entero para comparar (n° a)" <<endl;
	cin>>a;
	cout <<"ingresa el segundo nunero real o entero para comparar (n° b)" <<endl;
	cin>>b;
	cout<<"ingresa el tercer numero real o entero para comparar (n° c)"<<endl; 
	cin>>c;
	
	
	//comparaciones
	if ((a>b)&&(a>c))//comparacion entre a,b y c. condicion para seguir, "a" mayor que "b" y tambien tiene "a" que ser mayor que "c"
		cout<<"a es el mayor de los 3 "<<endl;
	if ((b>a)&&(b>c))//comparacion entre a,b y c. condicion para seguir, "b" mayor que "a" y tambien tiene "b" que ser mayor que "c"
		cout<<"b es el mayor de los 3"<<endl;	
	if ((c>a)&&(c>b)) //comparacion entre a,b y c. condicion para seguir, "c" mayor que "a" y tambien tiene "c" que ser mayor que "b"
		cout<<"c es el mayor de los 3"<<endl;	
	if ((a==b)&&(a==c)&&(b==c)) //comparacion para saber si los 3 numeros son iguales, osea a tiene que ser igual a b, y tambien tiene que ser igual a c y c tiene que ser igual b
		cout<<"los 3 numeros son iguales"<<endl;
	else { //colocado para ver cuales son iguales y cuales no

		if (a==b)//a es igual a b si no, compara que a sea igual a c y si no lo es, compara que b sea igual a c
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
