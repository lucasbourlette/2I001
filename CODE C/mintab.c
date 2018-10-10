#include <stdio.h>

float min(float tab[],int taille){
	float m=tab[0];
	int i;
	for(i=0;i<taille;i++){
		if(tab[i]< m){
			m=tab[i];
		}
	}
	
	return m;
}
int indice_min(float tab[],int taille){
	int indice;
	int i;
	float m=tab[0];
	for(i=0;i<taille;i++){
		if(tab[i]< m){
			indice=i;
		}
	}
	
	return indice;
}
	
int main(){
	float t[]={5,2,6,7};
	float m;
	int i;
	int n=4;
	i=indice_min(t,n);
	m=min(t,n);
	printf("le mini du tableau est %f et se trouve en position %d",m,i);
	return 0;
}
