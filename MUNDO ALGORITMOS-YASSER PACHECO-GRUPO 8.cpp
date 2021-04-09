#include<stdio.h>
int n,x,m,y,i;
int main(){
	printf("\n ingrese cantidad de numeros \n");
	scanf("%d",&n);
	printf("\n ingrese los numeros\n");
	for(i=1;i<=n;i+=1){
	
		scanf("%d",&m);
		if(m%2==0){
			x=x+1;
		}else
		{
			y=y+1;
		}
	}
	printf("%d",x);
	printf(" Numeros pares \n");
	printf("%d",y);
	printf(" Numeros impares \n");
}
