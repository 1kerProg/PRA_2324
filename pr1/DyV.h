#ifndef DYV_H
#define DYV_H

using namespace std; 

void printarr(int arr[], int ini, int tama){
        for(int i=ini; i<tama; i++){
                cout<<arr[i]<<" ";
        }
        cout<<endl;
}


template<class TIPO>
int Busquedabinaria(TIPO x, TIPO  v[], int ini, int end) {
	if(end<=ini){
		return -1;
	}
	int m = (end +ini)/2;
	int medio = v[m];
	
	if(medio==x){
		return m;
	}
	if(x>medio){
		return Busquedabinaria(x, v, m+1, end);
	}
	else{
		return Busquedabinaria(x, v, ini, m);
	}


}
template <class TIPO>
void swap(TIPO v[], int a, int b){
	int aux = v[a];
	v[a]=v[b];
	v[b]=aux;
}

template <class TIPO>
void inversa(TIPO v[], int ini, int end){
	end = end-1;
        while(ini < end){
		swap(v, ini, end);
		ini=ini+1;
		end=end-1;
	}
}	

template <class TIPO>
int Busquedabinariainv(TIPO x, TIPO v[], int ini, int end){
	if(end<=ini){
                return -1;
        }
        int m = (end +ini)/2;
        int medio = v[m];

        if(medio==x){
                return m;
        }
        if(x<medio){
                return Busquedabinaria(x, v, m+1, end);
        }
        else{
                return Busquedabinaria(x, v, ini, m);
        }

}	

int partition(int v[], int ini, int end, int p){
	int i = ini-1;
	int j = ini;
	int aux;
	while(j<=end-1){
		while(v[j]>p){
			j++;
		}
		i++;
		swap(v, j, i);
		j++;
	}
	return i; 
}
void Quickshort(int v[], int ini, int end){//valor final para pivote
	if(end<=ini){
		return;
	}
	int p = v[end-1];
	int pivote = partition(v, ini, end, p);
	Quickshort(v, ini, pivote);
	Quickshort(v,pivote+1, end);
}

void Quickshortrand(int v[], int ini, int end){//valor aleatorio de pivote
	if(end<=ini){
		return;
	}
	srand(time(NULL));
	int a = rand()%end;
	int p = v[a];
	swap(v, a, end-1);
	int pivote = partition(v, ini, end, p);
        Quickshort(v, ini, pivote);
        Quickshort(v,pivote+1, end);
}


#endif
