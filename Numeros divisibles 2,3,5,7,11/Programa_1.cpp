/*
Crear un programa que reciba un número y por medio de funciones validar si
dicho número es divisible por 2, 3, 5, 7 y 11; retornando los mensajes
respectivos.
*/

#include <iostream>
using namespace std;


void divisibleDos(int);
void divisibleTres(int);
void divisibleCinco(int);
void divisibleSiete(int);
void divisibleOnce(int);



int main(){

  int numero = 0;

  cout<<"Ingrese un numero: ";
  cin>>numero;

  cout<<""<<endl;
  divisibleDos(numero);
  cout<<""<<endl;
  divisibleTres(numero);
  cout<<""<<endl;
  divisibleCinco(numero);
  cout<<""<<endl;
  divisibleSiete(numero);
  cout<<""<<endl;
  divisibleOnce(numero);

  return 0;


}


void divisibleDos(int numero){

   
    if(numero % 2 == 0){

      cout<<"EL numero es divisible por 2";

    }else{

     cout<<"El numero NO es divisible entre 2";

    }

}

void divisibleTres(int numero){

    if(numero % 3 == 0){

      cout<<"EL numero es divisible por 3";

    }else{

     cout<<"El numero NO es divisible entre 3";

    }


}

void divisibleCinco(int numero){

    if(numero % 5 == 0){

      cout<<"EL numero es divisible por 5";

    }else{

     cout<<"El numero NO es divisible entre 5";

    }

}

void divisibleSiete(int numero){

   if(numero % 7 == 0){

      cout<<"EL numero es divisible por 7";

    }else{

     cout<<"El numero NO es divisible entre 7";

    }


}

void divisibleOnce(int numero){

    if(numero % 11 == 0){

      cout<<"EL numero es divisible por 11";

    }else{

     cout<<"El numero NO es divisible entre 11";

    }



}