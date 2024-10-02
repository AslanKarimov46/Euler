//Найдите разность между суммой квадратов и квадратом суммы первых ста натуральных чисел.
#include <stdio.h>

int main(void){
int summ1=0;
int summ2=0;
for(int i=1; i<=100; i++){
	summ1+=i*i;
}
for(int i=1; i<=100; i++){
	summ2+=i;
}
summ2*=summ2;
printf("%d\n", summ2-summ1);
return 0;
}