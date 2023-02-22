#include "Persona.cpp"
#include <iostream>
using namespace std;

class empleado : Persona {
        
		//atributos
        private : string nit;
        
		//constructor
        public :
        empleado (){
        }

        empleado(string nom, string ape,string dir,string fn, string pues, int tel, int cd, string n) : Persona (nom, ape, dir, fn, pues, tel, cd){
        nit=n;
         }
         // metodos
         // set (modificar)
        void setNit(string n){nit = n;}
        void setNombres(string nom) {nombres = nom;}
        void setApellidos(string ape){apellidos = ape;}
        void setDireccion(string dir){direccion = dir;}
        void setfechaN(string fn){fechaN = fn;}
        void setpuesto(string pues){puesto = pues;}
        void settelefono(int tel){telefono = tel;}
        void setcodigoE(int cd){codigoE = cd;}
        // get (mostrar)
        string getNit(){return nit;}
        string getNombres (){return nombres;}
        string getApellidos(){return apellidos;}
        string getDireccion(){return direccion;}
        string getfechaN(){return fechaN;}
        string getpuesto(){return puesto;}
        int gettelefono(){return telefono;}
        int getcodigoE(){return codigoE;}
        //metodos
        
         void mostrar(){
         cout<<"____________________"<<endl;
         cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fechaN<<","<<puesto<<","<<telefono<<","<<codigoE<<endl;

         }
};


