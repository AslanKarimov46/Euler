//Найдите первые десять цифр суммы следующих ста 50-значных чисел.
#include <stdio.h>
#include <math.h>

int amount(int number){
if(number!=0){
	int n=0;
	while(number!=0){
		number/=10;
		n++;
	}
	return n;
	}else{
		return 1;
	}
}
int is_numeric(char c){
	return(c >= '0' && c <= '9');
}
int main(void){
char numbers[5000],d; int i=0;
FILE *fin=fopen("13.txt","r");
while(fscanf(fin,"%c",&d)!=EOF){
	if(is_numeric(d)){
		numbers[i]=d;
		i++;
	}
}
int array_number[5000];
for(int i=0;i<5000;i++){
	array_number[i]=numbers[i]-'0';
}
int array_c[50]={0};
for(int i=0;i<50;i++){
	for(int j=i;j<5000;j+=50){
		array_c[i]+=array_number[j];
	}
}
int array_e[50];
array_e[0]=array_c[49];
for(int i=1;i<50;i++){
	array_e[i]=array_c[49-i]+array_e[i-1]/10;
}
unsigned long long array_result[50];
for(int i=0;i<49;i++){
	array_result[i]=array_e[i]%10;
}
array_result[49]=array_e[49];
if(amount(array_result[49])>10){
	printf("%llu\n",array_result[49]/((amount(array_result[49])-10))*10);
}
if(amount(array_result[49])==10){
	printf("%llu\n",array_number[49]);
}
if(amount(array_result[49])<10){
	printf("%llu",array_result[49]);
	for(int i=0;i<(10-amount(array_result[49]));i++){
		printf("%llu",array_result[48-i]);
	}
}
return 0;
}














