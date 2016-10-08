#pragma once 

#include "Mlek.h" 

 class Tiers :  	public Mlek 
{ 
 	int weight;

 public: 
 	Tiers(void); 

 	void setweight( int weight);  	
	void getweight(); 
 
 	~Tiers(void); 
}; 
