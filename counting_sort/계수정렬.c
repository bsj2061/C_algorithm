#include <stdio.h>

int main(void){
	int i,j,temp;
	int count[5]={0};
	int array[30] = {1,3,2,4,3,2,5,3,1,2,3,4,4,3,5,1,2,3,5,2,3,1,4,3,5,1,2,1,1,1};
	//원소개수세기 
	for(i = 0;i<30;i++) {
		count[array[i]-1]++;
	}
	//출력하기 
	for(i=0;i<5;i++){
		if(count!=0){
			for(j = 0;j<count[i];j++){
				printf("%2d",i+1);
			}
		}
	}
	return 0;
} 
