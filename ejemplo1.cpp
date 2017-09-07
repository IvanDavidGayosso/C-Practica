#include<iostream>
using namespace std;
//* puntero
//& val Memoria de referecia
int main( ){
	int *p,i,val;
	i=100;
	p=&i;
	val=*p;
	cout<<val;
	return 0;
	
}
