#include<stdio.h>
#include<time.h>
#include"utility.h"
#include<math.h>
#include<stdlib.h>

void main(){
	//this programm generates txt files for plotting q1.b
	time_t t;
	srand((unsigned) time(&t));//seed for random number

	FILE* file;
	double x=0;double y=0;
	int N=250;
	//250 walks
	file=fopen("random_walk_250_1.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);

	x=0;y=0;
	file=fopen("random_walk_250_2.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);

	x=0;y=0;
	file=fopen("random_walk_250_3.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);

	x=0;y=0;
	file=fopen("random_walk_250_4.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);

	x=0;y=0;
	file=fopen("random_walk_250_5.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);

	N=500;
	//500 walks
	file=fopen("random_walk_500_1.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);
x=0;y=0;
	file=fopen("random_walk_500_2.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);
x=0;y=0;
	file=fopen("random_walk_500_3.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);
x=0;y=0;
	file=fopen("random_walk_500_4.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);
x=0;y=0;
	file=fopen("random_walk_500_5.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);


	N=750;
	//750 walks
x=0;y=0;
	file=fopen("random_walk_750_1.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);
x=0;y=0;
	file=fopen("random_walk_750_2.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);
x=0;y=0;
	file=fopen("random_walk_750_3.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);
x=0;y=0;
	file=fopen("random_walk_750_4.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);
x=0;y=0;
	file=fopen("random_walk_750_5.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);


	N=1000;
	//1000 walks
x=0;y=0;
	file=fopen("random_walk_1000_1.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);
x=0;y=0;
	file=fopen("random_walk_1000_2.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);
x=0;y=0;
	file=fopen("random_walk_1000_3.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);
x=0;y=0;
	file=fopen("random_walk_1000_4.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);
x=0;y=0;
	file=fopen("random_walk_1000_5.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);


	N=2000;
	//2000 walks
x=0;y=0;
	file=fopen("random_walk_2000_1.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);
x=0;y=0;
	file=fopen("random_walk_2000_2.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);
x=0;y=0;
	file=fopen("random_walk_2000_3.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);
x=0;y=0;
	file=fopen("random_walk_2000_4.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);
x=0;y=0;
	file=fopen("random_walk_2000_5.txt","w");	
	random_walk_2D(&x,&y,N,file);
	fclose(file);

}
