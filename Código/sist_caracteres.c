#include <stdio.h>
#include <string.h>

char transforma (char str[]){
	int g;
	
	for(g=0;g<strlen(str);g++){
		if(str[g]>96 && str[g]<123){
			str[g]=str[g]-32;
		}
		else
		str[g]=str[g];
	}
}


int main(){
	float cont_un=0;
	int i,j;
	int cont=0;
	
	char alfa[37] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";	
	char alf = 'A';
	char num = '0';
	
	char str3[1001];
	char str[1000000];
	char str2[1001];
	

	//LEITURA
	fgets(str3,1001,stdin);
	strcat(str,str3);
	for(i=0;i<100000;i++){
		fgets (str2,1001, stdin);
		if((str2[0]=='F')&&(str2[1]=='I')&&(str2[2]=='M')){
			break;
		}else{
			strcat(str,str2);
		}
	}
	//maiuscula
	transforma(str);
	
	//contagem
	for(i=0;i<strlen(str);i++){
		for(j=0;j<37;j++){
			if(str[i]==alfa[j]){
				cont_un++;
				break;
			}	
		}
	}
	
	alf = 'A';
	num = '0';
	
	//impressao
	printf("Caracteres:\n");
	for(j=0;j<26;j++){
		printf("%c: ",alf);
		cont =0;
		for(i=0;i<strlen(str);i++){
			if(strlen(str)>1002){
				break;
			}
			if(str[i]==alf){
					cont++;
				printf("-");
				
			}
			
		}
		printf(" (%d - %0.2f)",cont,(cont/cont_un));
		alf++;
		printf("\n");
	}
	
	printf("\nDigitos:\n");
	for(j=0;j<10;j++){
		printf("%c: ",num);
		cont = 0;
		for(i=0;i<strlen(str);i++){
			if(str[i]==num){
					cont++;
				printf("-");
			}
	
		}
	printf(" (%d - %0.2f)",cont,(cont/cont_un));
		cont=0;
		num++;
		printf("\n");
	}	

	
	return 0;
}


