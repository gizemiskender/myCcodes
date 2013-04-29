#include <stdio.h>

int main(){
	int a[] = { 1,2,3,4,5 };
	int i;
	
	for(i=0;i<5;i++){
		printf("a[i] -> %d\n",a[i]);
		printf("i[a] -> %d\n",i[a]);
	}
}
