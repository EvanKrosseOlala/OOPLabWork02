#include "StdAfx.h" 
#include "Tiers.h" 
#include <iostream> 

using namespace std; 
 
Tiers::Tiers(void) 
{ 
 	cout << "Вызывается конструктор для Tiers" << endl; } 
 
void Tiers::setweight( int weight) 
{ 
 	this->weight = weight; 
} 
 
void Tiers::getweight() 
{ 
 	cout << "Вес животного: " << this->weight << endl; 
} 
Tiers::~Tiers(void) 
{ 
 	cout << "Вызывается деструктор для Tiers" << endl; 
} 
