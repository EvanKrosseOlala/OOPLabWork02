#include "stdafx.h" 
#include "Mlek.h" 
#include "Tiers.h" 
#include "Fishes.h" 
#include "Birds.h" 
#include "locale"
#include <iostream> 

// Классы -
// Млекопитающие : кл. Птицы, кл. Животные, эл. Лев .
// Животные : кл. Рыбы, эл. Тигр.
// Рыбы : эл. Акула
// Птицы : эл. Попугай, эл.  Сова.



using namespace std; 
 
int _tmain(int argc, _TCHAR* argv[]) 
{    
 	setlocale(LC_ALL,"rus"); 
 
 	Mlek a; 
 	a.setname("Lev"); 
 	a.getname(); 
 
 	cout << endl; 
 
 	Tiers b; 
 	b.setname("Tigr"); 
 	b.getname(); 
 	b.setweight(200); 
 	b.getweight();  
 	cout << endl; 
 
 	Birds c; 
 	c.setname("Sova"); 
 	c.getname(); 
 	c.setprice(20); 
 	c.getprice();  
 	cout << endl; 
 
 	Fishes d; 
 	d.setname("Akula"); 
 	d.getname(); 
 	d.setweight(500); 
 	d.getweight(); 
 	d.setharakt("Zlaya"); 
 	d.getharakt();  
 	cout << endl; 

	Birds e;
	e.setname("Popugay");
	e.getname();
	e.setprice(30);
	e.getprice();
	cout << endl;
 	return 0; 
} 

