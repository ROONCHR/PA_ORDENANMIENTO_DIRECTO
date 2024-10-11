#include <iostream>
#include <string>
using namespace std;


struct Fecha {
    int dia;
    int mes;
    int anio;
};


struct Persona {
    string DNI;
    string name;
    Fecha fecha; 
};

bool ComparaFechas(Persona PER[],Persona  menor,int i){
	Fecha P=PER[i].fecha;
	Fecha M=menor.fecha;
	
	int retorna=false;
	if(P.anio>M.anio){
		retorna= true;
	}else if(P.anio==M.anio&&P.mes>M.mes){
		retorna=true;
	}else if(P.anio==M.anio&&P.mes==M.mes&&P.dia>M.dia){
		retorna = true;
	}
		
	return retorna;
	
	
}
void OrdenaPer(Persona PER[],int n){
	
	
	for(int i=0;i<n;i++){
		Persona menor = PER[i];
		int k=i;
		for(int j=i+1;j<n;j++){
			if(ComparaFechas(PER,menor,j)==true){
				menor = PER[j];
				k=j;
			}
		}
		PER[k]=PER[i];
		PER[i]=menor;
	}
	
	
}


int main() {
    int cantper=0;
	
    cout<<"Ingrese la cantidad de personas a agregar: ";cin>>cantper;
    Persona PER[cantper];
    for(int i=0; i<cantper;i++){
    	cout << "Persona " << i + 1 << ":\n";
    	cin.ignore();
    	cout<<"Nombre: ";getline(cin,PER[i].name);
		cout<<"DNI: ";getline(cin,PER[i].DNI);
		cout<<"Fecha de nacimiento: \n"<<"Dia: ";cin>>PER[i].fecha.dia;
		cout<<"Mes: ";cin>>PER[i].fecha.mes;
		cout<<"Anio: ";cin>>PER[i].fecha.anio;

	}
	OrdenaPer(PER,cantper);
	cout<<"\nAqui el arreglo Ordenado:\n ";
	for (int i = 0; i < cantper; i++) {
        cout << "Persona " << i + 1 << ":\n";
        cout << "DNI: " << PER[i].DNI << endl;
        cout << "Nombre: " << PER[i].name << endl;
        cout << "Fecha de Nacimiento: " << PER[i].fecha.dia << "/"
             << PER[i].fecha.mes << "/" << PER[i].fecha.anio << endl;
        cout << "-----------------------------\n";
    }
	
    
    return 0;
}

