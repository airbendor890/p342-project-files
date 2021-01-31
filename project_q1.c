#include<stdio.h>
#include<time.h>
#include"utility.h"
#include<math.h>
#include<stdlib.h>

void main(){
	//this programm is for calculations involved in q1
	//random_walk_2D() writes x,y coordinate in file
	//& returns radial displacement R 
	time_t t;
	srand((unsigned) time(&t));//seed for random number

	FILE* file;
	FILE* file1;//for plot of Rrms vs sqrt(N)
	file1=fopen("Rrms_vs_sqrtN.txt","w");
	int K=500;//no of walks in each (steps=N)
	int N;//no of steps
	double Rrms;
	double R[K];//storing radial distance for every set of walk
	double x;
	double y;
	double del_x[K];
	double del_y[K];
	double del_X,del_Y;

	printf("\nN\tsqrt(N)\tRrms\taverage(del_X)\taverage(del_Y)\n");
N=250;
while(N<=1250){
	file=fopen("random_walk.txt","w");//this file has no use as such but  
	//function argument has file input for returning output data
	for(int i=1;i<=K;i++)
	{	x=0;y=0;
		R[i-1]=random_walk_2D(&x,&y,N,file);
		//keep x,y displacements in each set for calculation
		del_x[i-1]=x;
		del_y[i-1]=y;		
	}
	fclose(file);
	//calculate Rrms,del_X,del_Y
	del_X=0;del_Y=0;
	for(int i=1;i<=K;i++)
	{	del_X+=del_x[i-1];
		del_Y+=del_y[i-1];
		Rrms+=pow(R[i-1],2);
	}
	del_X/=K;
	del_Y/=K;
	Rrms=pow(Rrms/K,0.5);

	printf("\n%d\t%.3f\t%.3f\t%.3f\t%.3f\n",N,sqrt(1.0*N),Rrms,del_X,del_Y);
	fprintf(file1,"%lf	%lf\n",sqrt(1.0*N),Rrms);
	N=N+250;
     }

fclose(file1);	
}

/**
N	sqrt(N)	Rrms	average(del_X)	average(del_Y)

250	15.811	15.318	0.471	-0.554

500	22.361	22.585	0.266	-1.022

750	27.386	27.151	-0.637	1.476

1000	31.623	31.637	-0.554	-1.013

1250	35.355	35.004	1.611	0.040



/
