#include <stdio.h>
#include <string.h>
#include <stdlib.h>




int longitudCadena(char *cad1){
	int i;
	i=0;
	while(cad1[i] != '\0'){
		i++;
	}
	printf("la longitud de la cadena es: %d \n",i);
	return i;
}

int copiarCadena(char *cad1,char *cad2){
	int i;
	for(i=0;cad1[i]!='\0';i++){
		cad2[i]=cad1[i];
	}
	cad2[i]='\0';
	return *cad2;
}

void imprimirCad(char *cad2){
	int n, m;
	printf("introduzca un n: \n");
	scanf("%d", &n);
	printf("introduzca un m:  \n");
	scanf("%d", &m);
	

	while(n<=m){
		printf("%c",cad2[n]);
		n++;
	}

}
 
 int compararCadena(){

 	char caden1[50];
 	printf("\ningrese la cadena 1: \n");
 	scanf("%s",caden1);
 	char caden2[50];
 	printf("ingrese la cadena 2: \n");
 	scanf("%s",caden2);
 	int i, z, y, x;
 	x=longitudCadena(caden1);
 	y=longitudCadena(caden2);
 	for(i=0;i<x;i++){
 		for(z=0;z<y;z++){
 			if(caden1[i]==caden2[z]){
 				return 0;
 			}else{
 				z++;
 			}

 		}
 	    i++;
 	}
 	return 1;
}

char* concatenarCadena(){
	char *cad3;
	int n,i,z;
	n=1;
	char caden1[50];
 	printf("\ningrese la primera cadena: \n");
 	scanf("%s",caden1);
 	char cadena2[50];
 	printf("ingrese la segunda cadena: \n");
 	scanf("%s",cadena2);

 	int len1 = longitudCadena(caden1);
 	int len2 = longitudCadena(cadena2);
 	
 	cad3 = (char*)malloc(n*(sizeof(caden1)+sizeof(cadena2)));
 		for(i=0;i<len1;i++){
 			cad3[i]=caden1[i];
 		}for(z=0;z<len2;z++){
 			cad3[z+len1]=cadena2[z];
 		}cad3[z+len1]='\0';
 		return cad3;
 	}




int main(){
	char *cad1="hola mundo";
	char *cad2;
	char *conca;
	int comparar;

	cad2 = calloc(longitudCadena(cad1)+1 , sizeof(char));
	copiarCadena(cad1,cad2);
	printf("%s \n",cad2);
	imprimirCad(cad2);
	comparar=compararCadena();
	printf("%d \n", comparar);
	concatenarCadena();
	conca=concatenarCadena();
	printf("%s \n",conca);
}

