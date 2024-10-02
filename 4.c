//Найдите самый большой палиндром, полученный умножением двух трехзначных чисел
#include <stdio.h>
int amount(int number){
	int n=0;
	if (number==0) number++;
	while(number!=0){
		number/=10;
		n++;
	}
return n;
}
void number_to_array(int *array, int amount, int number){
	for(int i=amount-1; i>=0; i--){
		array[i]=number%10;
		number/=10;
	}
}
int polindrom(int number, int amount, int *array){
	for(int i=0; i<=amount/2-1; i++){
		if (array[i]!=array[amount-i-1]) {return 1;}
	}
return 0;
}
int main(void){
int number, max=0;
for(int i=100; i<1000; i++){
	for( int j=100; j<1000; j++){
		number=i*j;
		int n=amount(number);
		int array[n];
		number_to_array(&array,n,number);
		if(polindrom(number,n,&array)==0){
			if(number>max){
				max=number;
			}
		}
	}
}
printf("%d\n", max);
return 0;
}