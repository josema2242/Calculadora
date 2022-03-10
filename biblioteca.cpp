#include"biblioteca.hpp"

int suma(int a, int b){
	
	return a+b;
}

int resta(int a, int b){
	if(a>b){
		return a-b;
	}else{
		return b-a;
	}
}

int multiplicacion(int a, int b){
	return a*b;
}

int division(int a, int b){
	if(a>b && b>0){
		return a/b;
	}else{
		if(b>a && a>0){
			return b/a;
		}else{
		return 0;
		}		
	return 0;
	} 
}




