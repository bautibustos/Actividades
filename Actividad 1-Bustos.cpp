#include <iostream>
#include <stdlib.h>
using namespace std;


main (){
	int a;//datos pedidos al usuario
	int b;
	
	cout <<"ingresa el primer nunero entero para comparar (n° a)" <<endl;
	cin>>a;
	cout <<"ingresa el segundo nunero entero para comparar (n° b)" <<endl;
	cin>>b;
	
	
	if (a==b)
		cout <<"a es igual a b"<<endl;
	if (a<b)
		cout<<"b es mayor que a"<<endl;
	if (a>b)
		cout<<"a es mayor que b"<<endl;	
	
	return 0;
}
