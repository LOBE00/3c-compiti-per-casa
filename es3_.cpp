#include <iostream>

using namespace std;

void dimensione (int&);
void inserimento (int [], int);
void inverso (int[], int);

int main()
{
int vet[10];
int dim;
dimensione (dim);
inserimento (veet, dim);
inverso (vet,dim)
}

void dimensione (int&dim){
do{
    cout <<"inserisci il numero di elementi: ";
    cin >> dim;

}while(dim>10 || dim<0);
}

void inserimento (int v[], int dim){
for(int i=0;i<dim;i++){
    cout << "inserisci il "<<i<<" numero ";
    cin >> v[i];
}
}

void inverso (int v[], int dim){
for( int i=dim-1; i>=0; i--){
    cout<<v[i]<< endl;
}
}
