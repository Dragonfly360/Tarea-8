#include <iostream>
#include "Cliente.cpp"

using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	
	
	// instancia de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
  
   // cout<<"Nit: "<<obj.getNit()<<","<<"Nombres: "<<obj.getNombres()<<","<<"Apellidos: "<<obj.getApellidos()<<","<<"Direccion: "<<obj.getDireccion()<<","cout<<"Telefono: "<<obj.getTelefono()<<endl;
	
	/*
	Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	*/	

}
