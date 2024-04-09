#include <stdio.h>
int main(){
	int r=5 ,i,j;
	int num=10;
	
	for(i=1;i<=r;i++){
		for(j=1;j<=i;j++){
			printf("%d",num * num);
		}
		num=num-1;
		printf("\n");
	}
}


