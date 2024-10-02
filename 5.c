//Какое самое маленькое число делится нацело на все числа от 1 до 20?
#include <stdio.h>

int nok( int number1, int number2){
	int x=1;
	for( int i=1; i<=number1*number2; i++){
		if(i%number1==0 && i%number2==0) {
			x=i;
			break;
		}
	}
return x;
}
int main(void){
int nok_20=1, n;
for(int i=2; i<20; i++){
	n=nok(nok_20,i);
	nok_20=n;
}
printf("%d\n", nok_20);
return 0;
}