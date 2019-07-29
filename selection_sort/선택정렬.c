#include <stdio.h>

int main(void){
	int array[] = {3,7,5,6,1,4,10,9,2,8};
	int tmp, i, j, index, min;
	for(i=0;i<10;i++){
		min = 9999;
		for(j=i;j<10;j++){
			if(min>array[j]){
				min=array[j];
				index = j;
			}
		}
		tmp = array[i];
		array[i] = array[index];
		array[index] = tmp;
	}
	for(i=0;i<10;i++)
	printf("%3d",array[i]);
	return 0;
}
