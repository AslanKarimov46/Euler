#include <stdio.h>

int delit(int number){
	int y=0;
	for(int i=1;i<=number;i++){
		if(number%i==0){
			y++;
		}
	}
return y;
}
int main(void){
	int x=1,number=0;
	while(delit(number)<=400){
		number+=x;x++;
	}
printf("%d\tdelit:%d\n",number,delit(number));
return 0;
}