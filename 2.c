//Найдите сумму всех четных элементов ряда Фибоначчи, которые не превышают четыре миллиона.
#include <stdio.h>
int main(void){
int a=1,b=2,c=0,summ=2;
while(c<4000000){
	c=a+b;
	a=b;
	b=c;
	if (c%2==0){
		summ+=c;
	}
}
printf("%d\n", summ);
return 0;
}