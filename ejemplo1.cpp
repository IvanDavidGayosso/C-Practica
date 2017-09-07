#include<iostream>
using namespace std;
//* puntero
//& val Memoeria referente
int main( ){
	int *p,i,val;
	i=100;
	p=&i;
	val=*p;
	cout<<val;
	return 0;
	
}
