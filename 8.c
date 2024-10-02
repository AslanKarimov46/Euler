//Найдите наибольшее произведение chetirex последовательных цифр в данном числе.
#include <stdio.h>
#include <stdlib.h>

int main(void){
FILE *fin=fopen("8.txt", "r");
char array[1000];
for(int i=0;i<1000;i++){
	fscanf(fin,"%c",&array[i]);
}
fclose(fin);
long long max=0;
for(int i=0; i<987; i++){
	long long y=1;
	for(int j=i; j<i+13; j++){
		y*=array[j]-'0';
	}
	if(y>max){
		max=y;
	}
}
printf("%lld\n", max);
return 0;
}