/*
programa creado por Ed guzman, publicado en github el 1 de noviembre del 2023
Todos los derechos reservados.
*/

#include <iostream>

using namespace std;

int suma(int, int);
int resta(int, int);
int division(int, int);
int multiplicacion(int, int);

int main()
{
    int numero_uno = 0, numero_dos = 0, opcion = 0, resultado = 0;
    
    while(true){
       
    cout<<"\nBienvenido, por favor eliga una operacion:\n1.Suma\n2.Resta\n3.Multiplicacion\n4.Division\n5.Salir\n"; 
    
    cout<<"Ingrese una opcion:";
    cin>>opcion;
     
    
    switch(opcion){
        
    case 1:
    
      cout<<"INGRESE EL PRIMER NUMERO:";
      cin>>numero_uno;
      
      cout<<"INGRESE EL SEGUNDO NUMERO:";
      cin>>numero_dos;
    
      resultado = suma(numero_uno, numero_dos);
    
      cout<<"El resultado de la suma es: "<<resultado<<endl;
    
      break;
        
    case 2:
    
      cout<<"INGRESE EL PRIMER NUMERO:\n";
      cin>>numero_uno;
      
      cout<<"INGRESE EL SEGUNDO NUMERO:\n";
      cin>>numero_dos;
    
      resultado = resta(numero_uno, numero_dos);
      cout<<"El resultado de la resta es: "<<resultado<<endl;
    
    break;
    
    case 3: 
    
      cout<<"INGRESE EL PRIMER NUMERO:\n";
      cin>>numero_uno;
      
      cout<<"INGRESE EL SEGUNDO NUMERO:\n";
      cin>>numero_dos;
    
      resultado = multiplicacion(numero_uno, numero_dos);
      cout<<"El resultado de la multiplicacion es: "<<resultado<<endl;
    
    
    break;
    
    case 4: 
    
      cout<<"INGRESE EL PRIMER NUMERO:\n";
      cin>>numero_uno;
      
      cout<<"INGRESE EL SEGUNDO NUMERO:\n";
      cin>>numero_dos;
    
      resultado = division(numero_uno, numero_dos);
      cout<<"El resultado de la division es: "<<resultado<<endl;
    
    
      break;
      
    case 5:
    
    return false;
    
    default:
    
    cout<<"\nIngrese una opcion valida";
    
    break;
        
    }
   
    
    
}

    return 0;
}



int suma(int numero_uno, int numero_dos){
    
    int suma = numero_uno + numero_dos;
    
    return suma;
    
    
    
}


int resta(int numero_uno, int numero_dos){
    
    int resta = numero_uno - numero_dos;
    
    return resta;
    
}

int multiplicacion(int numero_uno, int numero_dos){
    
    int multiplicacion = numero_uno * numero_dos;
    
    return multiplicacion;
    
}

int division(int numero_uno, int numero_dos){
    
    int division = numero_uno / numero_dos;
    
    return division;
    
}
