#include <iostream>
using namespace std;

int main(){
	float HorasTrabajadas;//horas del trabajador
	float Calculos_horas;/*sumas de horas*/
	float calculos_pagototal;
	float aux;
	float Xsemana;//por semana
	
	
	cout<<"ingrese la cantidad de horas trabajadas"<<endl;
	cin>>HorasTrabajadas;
	
	if (HorasTrabajadas<=40){
	
		calculos_pagototal=HorasTrabajadas*150;
		cout<<"se le debe pagar:"<<calculos_pagototal<<endl;
	}
	else{
		if (HorasTrabajadas>40){
	
			Calculos_horas=HorasTrabajadas-40;// resto las horas ingresadas,  - 40 para tener las horas que trabajo fuera de el horario normal. para calcular el extra a  pagar
			calculos_pagototal=40*150+Calculos_horas*250;//40 que son las horas minimas * 150 que seria lo normal + las horas extra que trabajó
			aux=Calculos_horas*250;
			Xsemana=calculos_pagototal*4;
			cout<<"se le debe pagar: "<<calculos_pagototal<<endl;
			cout<<"dinero ganado por horas extras es: "<<aux<<endl;
			cout<<"Por semana gana: "<<Xsemana<<endl;
		}
	}
	
	
	return 0; 
}
