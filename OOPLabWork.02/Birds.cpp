#include "StdAfx.h" 
#include "Birds.h" 
#include <iostream>

using namespace std; 
 
Birds::Birds(void) 
{ 
 	cout  << "���������� ����������� ��� Birds" << endl; 
} 
 
void Birds::setprice(int x) 
{ 
this->price = x; 
} 
 
void Birds::getprice() 
{ 
 	cout <<"���� ����� : " << this->price << endl; 
} 
 
Birds::~Birds(void) 
{ 
 	cout <<"���������� ���������� ��� Birds" << endl; 
} 
