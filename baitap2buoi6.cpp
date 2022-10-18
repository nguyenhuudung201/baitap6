#include<stdio.h>
int main(){
	int X;
	scanf("%d",&X);
	if(X>15){
		float thue= X*30/100;
		printf("thue thu nhap ca nhan la %f",thue);
		
	}else{
		if(7<X<15){
			float thue=X*20/100;
			printf("thue thu nhap ca nhan la %f",thue);
		}else{
			if(X<7){
				float thue=X*10/100;
				printf("thue thu nhap ca nhan la %f",thue);
			}
		}
		
	}
}
