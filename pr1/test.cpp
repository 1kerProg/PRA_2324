#include <iostream>
#include "DyV.h"

using namespace std;


int main(){
	int x;
	int v[7]={31,6,11,9,73,43,5};
	printarr(v, 0,7);
	Quickshortrand(v, 0, 7);
	printarr(v, 0, 7);
	cout<<"Insterta valor para buscar: ";
	cin>>x;
	cout<<Busquedabinaria(x, v, 0, 7)<<endl;
	cout<<"invertimos array"<<endl;
	inversa(v, 0,7);
	printarr(v,0,7);
	cout<<"Insterta valor para buscar: ";
        cin>>x;
	cout<<Busquedabinariainv(x, v, 0, 7)<<endl;
	return 0;
}
