#include <iostream>
using namespace std;

void Reduce(int A[], int inicio, int final) {
    int izq = inicio;
    int der = final;
    int pos = izq;
    int cen = 1;

    while (cen == 1) {
        cen = 0;

        
        while (A[pos] <= A[der] && pos != der) {
            der--;
        }
        if (pos != der) {
            int aux = A[pos];
            A[pos] = A[der];
            A[der] = aux;
            pos = der;
        }

    
        while (A[pos] >= A[izq] && pos != izq) {
            izq++;
        }
        if (pos != izq) {
            int aux = A[pos];
            A[pos] = A[izq];
            A[izq] = aux;
            pos = izq;
            cen = 1;
        }

        
        if (pos - 1 > inicio) {
            Reduce(A, inicio, pos - 1);
        }

        
        if (pos + 1 < final) {
            Reduce(A, pos + 1, final);
        }
    }
}
	

void QuickSort(int A[],int n){
	
	Reduce(A,0,n);
	
}

int main(){
	
	int tam = 10;
	int A[tam] = {5,8,9,6,3,4,12,15,14,1} ;
	cout<<"Lista antes: ( ";
	for(int i=0; i<tam;i++){
		if(i==tam-1){
			cout<<A[i]<<" ) ";
		}else{
			cout<<A[i]<<" , ";
		}	
	}
	cout<<endl<<endl;
	QuickSort(A,tam);
	
	cout<<"Lista despues: ( ";
	for(int i=0; i<tam;i++){
		if(i==tam-1){
			cout<<A[i]<<" ) ";
		}else{
			cout<<A[i]<<" , ";
		}	
	}
	
	return 0;
}
