//Какое число является 10001-м простым числом?
#include <stdio.h>
#include <math.h>
int is_primary(int number){
	for(int i=2;i<=sqrt(number);i++){
		if(number%i==0){
			return 1;
		}
	}
return 0;
}
int main(void){
int number=2,count=1;
while(count!=1){
	++number;
	if(is_primary(number)==0){
		count++;
	}
}
printf("%d\n",number);
return 0;
}