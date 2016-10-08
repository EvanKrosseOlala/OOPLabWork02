#include "StdAfx.h" 
#include "Birds.h" 
#include <iostream>

using namespace std; 
 
Birds::Birds(void) 
{ 
 	cout  << "Вызывается конструктор для Birds" << endl; 
} 
 
void Birds::setprice(int x) 
{ 
this->price = x; 
} 
 
void Birds::getprice() 
{ 
 	cout <<"Цена птицы : " << this->price << endl; 
} 
 
Birds::~Birds(void) 
{ 
 	cout <<"Вызывается деструктор для Birds" << endl; 
} 
