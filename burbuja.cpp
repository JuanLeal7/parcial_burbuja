
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int vector[30]={3,6,9,12,15,18,21,24,27,30,2,4,6,8,10,12,14,16,18,20,22,24,26,28,1,5,33,35,34,38};
    int valor;
    bool band=false;
    
    while(!band){
        band=true;
        for(int j=0;j<30;j++){
            if (vector[j]<vector[j+1]){
               valor=vector[j];
               vector[j]=vector[j+1];
               vector[j+1]=valor;
               cout<<"\n";
               band=false;
               
           }
         
         } 
         
       }
     for(int j=0;j<30;j++ ){
             cout<<vector[j]<<"\n";  
}
    return 0;
}














