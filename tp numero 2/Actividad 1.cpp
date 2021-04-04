#include <iostream>
#include <stdlib.h>//importo librerias 
using namespace std;



main() {
	
	float x;//defino variable 
	cout<<"ingresar valor x"<<endl;
	cin>>x;
	
	if (x>0)//comparo que x sea mayor a 0
		cout<<"Es positivo"<<endl;
	else{
		if (x<0)//comparo que x sea menor a 0
			cout<<"Es negativo"<<endl;
		else{
			cout<<"es cero"<<endl;
		}
		
	}



return 0;
}
