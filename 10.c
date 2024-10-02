//Найдите сумму всех простых чисел меньше двух миллионов.
#include <stdio.h>

int is_primary(int a){
	for (int i=2; i*i<=a; i++){
		if (a%i==0){
			return 1;
		}
	}
return 0;
}

int main(void){
int summ=0;
for (int i=2; i<2.e+6; i++){
	if (is_primary(i)==0){
		summ+=i;
	}
}
printf("%d\n",summ);
return 0;
}