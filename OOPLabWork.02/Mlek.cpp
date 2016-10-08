#include "stdafx.h" 
#include "Mlek.h" 

#include <iostream> 
	
using namespace std;  


	Mlek::Mlek(void) 
{ 
 	cout << "Вызывается конструктор для Mlek"<<endl; 
}
	
	void Mlek::setname(char *name) 
{ 
	this->name=name; 
}

	void Mlek::getname() 
{ 
 	cout<<"Name: "<<this->name<<endl; 
}
 
	Mlek::~Mlek(void) 
{ 
 	cout<<"Вызывается деструктор для Mlek"<<endl; 
}


