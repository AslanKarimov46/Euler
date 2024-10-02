#include <stdio.h>
int amount_letters(int number){
	if(number==1||number==2||number==6||number==10){
		return 3;
	}
	if(number==4||number==5||number==9){
		return 4;
	}
	if(number==3||number==7||number==8||number==40||number==50||number==60){
		return 5;
	}
	if(number==11||number==12||number==20||number==80||number==90){
		return 6;
	}
	if(number==15||number==16||number==70||number==100){
		return 7;
	}
	if(number==13||number==14||number==18||number==19){
		return 8;
	}
	if(number==17){
		return 9;
	}
return 0;
}
int letters(int number){
	int summ=0;
	if(amount_letters(number)!=0){
		int x=amount_letters(number);
		return x;
	}else{
	if(number>20&&number<100){
		summ=amount_letters(number%10)+amount_letters(10*(number/10));
		//printf("%d %d ",amount_letters(number%10),amount_letters(10*(number/10)));
	}else{
		summ=amount_letters(number%10)+amount_letters(number%100-number%10)+amount_letters(number/100)+10;
		//printf("%d %d %d ",amount_letters(number%10),amount_letters(number%100-number%10),amount_letters(number/100));
	}}
return summ;
}

int main(void){
int summ=0;
for(int i=1;i<1001;i++){
	summ+=letters(i);
}
printf("%d\n",summ);
return 0;
}







