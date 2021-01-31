#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void randu(){
for(int i=1;i<=5;i++)
printf("\n%d\n",rand());
	
}

void main(){
time_t t;
srand((unsigned) time(&t));

randu();
randu();	

}
