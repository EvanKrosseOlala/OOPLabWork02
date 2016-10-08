#pragma once 
#include "Tiers.h" 

 class Fishes :  	public Tiers 
{ 
 	char *harakt; 
 public: 
 	Fishes(void); 
 
 	void setharakt(char *harakt); 
 	void getharakt(); 
 
 	~Fishes(void); 
}; 
