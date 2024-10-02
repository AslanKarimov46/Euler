//Найдите сумму всех чисел меньше 1000, кратных 3 или 5.
#include <stdio.h>

int main(void){
int number=1,summ=0;
while(number<1000){
	if(number%3==0||number%5==0){
		summ+=number;
	}
	number++;
}
printf("%d\n", summ);
return 0;
}