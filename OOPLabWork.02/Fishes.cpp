#include "StdAfx.h" 
#include "Fishes.h" 
#include <iostream>

using namespace std; 
 
Fishes::Fishes(void) 
{ 
 	cout<<"���������� ����������� ��� Fishes"<<endl; 
} 
 
void Fishes::setharakt(char *harakt) 
{ 
 	this->harakt = harakt; 
} 
 
void Fishes::getharakt() 
{ 
 	cout << "�������������� ����: " << this->harakt << endl; 
} 
 
Fishes::~Fishes(void) 
{ 
 	cout<<"���������� ���������� ��� Fishes"<<endl; 
} 
