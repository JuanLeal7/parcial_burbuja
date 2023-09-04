#include <iostream>
#include <conio.h>
using namespace std;
struct nodo{
    int nro;
    struct nodo *sig;
};
void insertar(nodo *&,int);
void actualizar(nodo*lista,int x){
    bool band = false;
	nodo *act =new nodo();
    act = lista;
    
    while((act!=NULL)&&(act->nro <=x)){

     if(act->nro==x){
     	band=true;
	   }
	   act = act->sig;
    } 
    if(band= true){
    cout<<"el numero "<<x<<" esta en la lista\n";
    cout<<"meta el nuevo numero\n";
    cin>> act->nro;
    }
    else{
	cout<<"el numero"<<x<<" no esta \n";
    }
	
}


int main(){
    nodo *lista= NULL;
    int nro,m,nuevo;
    cout<<"cantidad de la lista\n";
    cin>>m;

for (int a=0 ; a < m ; a++)
{
    cout<<"ingrese el numero\n";
    cin>>nro;
    insertar(lista,nro); 	
}
int opc;
do{	

cout<<"OPCIONES\n";
cout<<"1.Actualizar numero\n";
cout<<"2.salir\n";
cin>>opc;
	switch(opc){
		case 1:
		cout<<"valor que desea actualizar\n";
		cin>>nro;
		actualizar(lista,nro);
		cout<<"lista actualizada\n";
		system("pause");
		break;
	}

   }while(opc !=2);

}


void insertar(nodo *&lista,int n){
    nodo *Nlista = new nodo();
    Nlista -> nro =n;
    nodo *aux1 = lista;
    nodo *aux2;

while((aux1 != NULL)&&(aux1->nro<n)){
        aux2 = aux1;
     
        aux1 = aux1->sig;
    }
    if(lista== aux1){
        lista=Nlista;

    }
    else{
        aux2->sig =Nlista;
    }
Nlista ->sig=aux1;
}


