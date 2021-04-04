#include <iostream>

using namespace std;


main(){
	float a;//variables 
	float b;
	float c;
	
	cout<<"ingrese primer lado"<<endl;//pido que inngrese los datos
	cin>>a;
	cout<<"ingrese segundo lado"<<endl;//pido que inngrese los datos
	cin>>b;
	cout<<"ingrese tercer lado"<<endl;//pido que inngrese los datos
	cin>>c;
	
	if ( ((a==b)&&(a!=c) ) or ((a!=b)&&(a==c)) or ((c==b)&&(c!=a)) )//comparacion entre valores para definir que tipo de triangulo es
			//explicacion de la condicion en clases 
			//es una comparacion en segmentos que no solamente c tiene que ser el diferente 
		cout<<"es isoceles"<<endl;
	else{
		if ((a==b)&&(a==c)&&(b==c))
		cout<<"es equilatero"<<endl;
		else{
			if ((a!=b)&&(a!=c)&&(b!=c))//if inecesario puesto por las dudas 
				cout<<"es Escaleno"<<endl;
			else{
				cout<<"hubo un error en la comparacion!"<<endl;//mensaje de error al haber algo que no coincide 
			}
		}
	}
		
	
	
	return 0;
}
