#include<stdio.h>
int main(){
	int X;
	scanf("%d",&X);
	if(X>=9){
		printf("A");
	}else{
		if(7<=X&&X<9){
			printf("B");
		}else{
			if(5<=X&&X<7){
				printf("C");
			}else{
				printf("F");
			}
		}
	}



}

