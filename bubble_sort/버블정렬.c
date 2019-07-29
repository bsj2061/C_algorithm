#include <stdio.h>

int main() {
	int i,j,temp;
	int array[] = {3,5,2,4,8,7,10,9,1,6};
	for(i=0;i<10;i++){
		for(j=0;j<10-i;j++){
			if(array[j]>array[j+1]){
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			}
		}
	} 
	for(i=0;i<10;i++){
		printf("%3d",array[i]);
	}
	return 0;
}
