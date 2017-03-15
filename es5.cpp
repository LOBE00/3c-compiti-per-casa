#include <iostream>

using namespace std;

void dimensione (int&);
void inserimento (int [], int);
float radice (int[], int);

int main()
{
    int vet[10];
    int dim;
    dimensione (dim);
    inserimento (vet, dim);
    cout << "la radice quadrata della somma dei quadrati delle componenti dspari è: ";
    cout << radice(vet,dim);
}

void dimensione (int&dim){
do{
    cout << "inserisci il numero di elementi ";
    cin >> dim;
}while(dim>10 || dim<0)
}

void inserimento (int v[], int dim){
for(int i=0;i<dim;i++){
    cout << "inserisci il "<<i+1<< "elemento ";
    cin >> v[i];
}
}
float radice (int v[],int dim){
int somma;
float r;
for(int i=0;i<dim;i++){
    if(v[i]%2==0){
        cout << "";
    }
    else{
        somma=somma+(v[i]*v[i]);
    }
}
r=sqrt(somma);
return r;
}
