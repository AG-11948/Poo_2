#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona {
        
		//atributos
        private : string nit;
        
		//constructor
        public :
        Cliente (){
        }

        Cliente(string nom, string ape, string n) : Persona (nom, ape){
        nit=n;
         }
         // metodos
         // set (modificar)
        void setNit(string n){nit = n;}
        void setNombres(string nom) {nombres = nom;}
        void setApellidos(string ape){apellidos = ape;}
    
        // get (mostrar)
        string getNit(){return nit;}
        string getNombres (){return nombres;}
        string getApellidos(){return apellidos;}

        //metodos
        
         void mostrar(){
         cout<<"____________________"<<endl;
         cout<<nit<<","<<nombres<<","<<apellidos<<endl;

         }
};

