#include "empleado.cpp"
#include <iostream>

using namespace std;

main(){
      string nit, nombres, apellidos, direccion, fechaN , puesto;
      int telefono, codigoE;
      
      cout<<"Ingresar Nit: ";
      cin>>nit;
      cout<<"Ingresar Nombres: ";
      cin>>nombres;
      cout<<"Ingresar Apellidos: ";
      cin>>apellidos;
      cout<<"Ingresar Direccion: ";
      cin>>direccion;
      cout<<"Ingresar Fecha De Nacimiento: ";
      cin>>fechaN;
      cout<<"Ingresar que puesto tiene: ";
      cin>>puesto;
      cout<<"Ingresar Telefono: ";
      cin>>telefono;
      cout<<"Ingresar su codigo de empleado: ";
      cin>>codigoE;
      // instancia de un objeto
      empleado obj = empleado (nombres, apellidos, direccion, fechaN, puesto, telefono, codigoE, nit);
      obj.mostrar();
      //cout<<"Datos Cliente"<<obj.getNit()<<","<<obj.getNombres()<<","<<obj.getApellidos()<<","<<obj.getDireccion()<<","<<obj.getTelefono()<<endl;
      
      
      /*Cliente obj = Cliente();
      obj.setNit(nit);
      obj.setNombres (nombres);
      obj.setApellidos (apellidos);
      obj.setDireccion (direccion);
      obj.setTelefono (telefono);
      obj.mostrar();*/
      
}
