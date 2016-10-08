#include "StdAfx.h" 
#include "Fishes.h" 
#include <iostream>

using namespace std; 
 
Fishes::Fishes(void) 
{ 
 	cout<<"Вызывается конструктор для Fishes"<<endl; 
} 
 
void Fishes::setharakt(char *harakt) 
{ 
 	this->harakt = harakt; 
} 
 
void Fishes::getharakt() 
{ 
 	cout << "Характеристика рыбы: " << this->harakt << endl; 
} 
 
Fishes::~Fishes(void) 
{ 
 	cout<<"Вызывается деструктор для Fishes"<<endl; 
} 
