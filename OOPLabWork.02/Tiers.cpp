#include "StdAfx.h" 
#include "Tiers.h" 
#include <iostream> 

using namespace std; 
 
Tiers::Tiers(void) 
{ 
 	cout << "���������� ����������� ��� Tiers" << endl; } 
 
void Tiers::setweight( int weight) 
{ 
 	this->weight = weight; 
} 
 
void Tiers::getweight() 
{ 
 	cout << "��� ���������: " << this->weight << endl; 
} 
Tiers::~Tiers(void) 
{ 
 	cout << "���������� ���������� ��� Tiers" << endl; 
} 
