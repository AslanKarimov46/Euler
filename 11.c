//Каково наибольшее произведение четырех подряд идущих чисел в таблице 20×20, 
//расположенных в любом направлении (вверх, вниз, вправо, влево или по диагонали)?60*20
#include <stdio.h>

int main(void){
FILE *fin=fopen("11.txt","r");
int array[400]; char c,d,e;
for( int i=0; i<400; i++){
	fscanf(fin,"%c%c%c",&c,&d,&e);
	array[i]=(c-'0')*10+d-'0';
}
int max_diag=0,max_down=0,max_right=0;
for(int i=0;i<400;i+=20){
	for(int j=0;j<17;j++){
		int y=array[j+i]*array[j+1+i]*array[j+2+i]*array[j+3+i];
		if(y>max_right){
			max_right=y;
		}
	}
}
for(int i=0;i<20;i++){
	for(int j=)
}
return 0;
}