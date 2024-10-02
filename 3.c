//Каков самый большой делитель числа 600851475143, являющийся простым числом?
#include <stdio.h>

int main(void){
	unsigned long number=600851475143, x=2;
	while(number!=1){
		while(number%x==0){
			number/=x;
		}
		x++;
	}
printf ("%lu\n",x-1);
return 0;
}