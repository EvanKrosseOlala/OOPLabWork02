#pragma once

#include "Mlek.h"

 class Birds :  	public Mlek
{ 
 	int price; 
 public: 
	 Birds(void);  	
	void setprice (int x);  	
	void getprice(); 
	~Birds(void); 
}; 
