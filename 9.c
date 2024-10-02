//Существует только одна тройка Пифагора, для которой a + b + c = 1000. Найдите произведение abc.
#include <stdio.h>

int is_pifagoric(int a, int b, int c){
	if(a*a+b*b==c*c || a*a+c*c==b*b || c*c+b*b==a*a){
		return 0;
	}
return 1;
}
int is_triangle(int a, int b, int c){
	if(a<b+c && b<a+c && c<a+b){
		return 0;
	}
return 1;
}
int main(void){
int abc,x,y,z;
for (int a=1; a<1000; a++){
	for (int b=1; b<999-a; b++){
		int c=1000-b-a;
		if( is_triangle(a,b,c)==0){
			if(is_pifagoric(a,b,c)==0){
				abc=a*b*c;
				x=a;y=b;z=c;
			}
		}
	}
}
printf("%d %d %d %d\n",x,y,z,abc);
return 0;
}