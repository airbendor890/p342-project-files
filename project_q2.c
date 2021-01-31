#include<stdio.h>
#include"utility.h"
#include<math.h>
#include<stdlib.h>
#define pi 3.141592
#include<time.h>
int vfunc(double x,double y,double z){
	double a=1;
	double b=1.5;
	double c=2.0;
	if((pow(x/a,2)+pow(y/b,2)+pow(z/c,2)-1.0)<=0)
	return 1;
	else
	return 0;
}


void main(){
	time_t t;
	srand((unsigned) time(&t));

	double a=1;
	double b=1.5;
	double c=2.0;
	FILE* file;
	FILE* file1;
	file=fopen("volume_vs_N.txt","w");
	file1=fopen("fra_error_vs_N.txt","w");	
	double V;

for(int N=100;N<=30000;N=N+500){
	V=volume_montecarlo(&vfunc,-1*a,1*a,-1*b,1*b,-1*c,1*c,N);
	fprintf(file,"%d	%lf\n",N,V);//plot for convergence of V to analytic 		//value
	fprintf(file1,"%d	%lf\n",N,fabs(V-4*pi)/4*pi);	
	//plot for frac error
	printf("\nN=%d	volume=%lf	frac error=%lf\n",N,V,fabs(V-4*pi)/4*pi);

}
	fclose(file);
	fclose(file1);


}
/*//at a instance of program run ,its differnet every time
N=100	volume=14.640000	frac error=1.628626

N=600	volume=12.640000	frac error=0.057830

N=1100	volume=12.916364	frac error=0.274886

N=1600	volume=12.750000	frac error=0.144224

N=2100	volume=12.674286	frac error=0.084758

N=2600	volume=12.646154	frac error=0.062664

N=3100	volume=12.510968	frac error=0.043511

N=3600	volume=12.566667	frac error=0.000235

N=4100	volume=12.556098	frac error=0.008066

N=4600	volume=12.657391	frac error=0.071490

N=5100	volume=12.621176	frac error=0.043046

N=5600	volume=12.642857	frac error=0.060074

N=6100	volume=12.629508	frac error=0.049590

N=6600	volume=12.621818	frac error=0.043550

N=7100	volume=12.659155	frac error=0.072875

N=7600	volume=12.701053	frac error=0.105781

N=8100	volume=12.675556	frac error=0.085756

N=8600	volume=12.692093	frac error=0.098744

N=9100	volume=12.683077	frac error=0.091663

N=9600	volume=12.750000	frac error=0.144224

N=10100	volume=12.765149	frac error=0.156122

N=10600	volume=12.747170	frac error=0.142001

N=11100	volume=12.709189	frac error=0.112171

N=11600	volume=12.713793	frac error=0.115787

N=12100	volume=12.696198	frac error=0.101968

N=12600	volume=12.681905	frac error=0.090742

N=13100	volume=12.692519	frac error=0.099079

N=13600	volume=12.700588	frac error=0.105416

N=14100	volume=12.689362	frac error=0.096599

N=14600	volume=12.708493	frac error=0.111625

N=15100	volume=12.713642	frac error=0.115669

N=15600	volume=12.693846	frac error=0.100121

N=16100	volume=12.703602	frac error=0.107784

N=16600	volume=12.698313	frac error=0.103630

N=17100	volume=12.689123	frac error=0.096411

N=17600	volume=12.679091	frac error=0.088532

N=18100	volume=12.680221	frac error=0.089420

N=18600	volume=12.660645	frac error=0.074045

N=19100	volume=12.677277	frac error=0.087108

N=19600	volume=12.688163	frac error=0.095658

N=20100	volume=12.672239	frac error=0.083151

N=20600	volume=12.665243	frac error=0.077656

N=21100	volume=12.667678	frac error=0.079568

N=21600	volume=12.670000	frac error=0.081392

N=22100	volume=12.677647	frac error=0.087398

N=22600	volume=12.696637	frac error=0.102313

N=23100	volume=12.466494	frac error=0.078441

N=23600	volume=12.485085	frac error=0.063840

N=24100	volume=12.485975	frac error=0.063140

N=24600	volume=12.482927	frac error=0.065535

N=25100	volume=12.508685	frac error=0.045304

N=25600	volume=12.531562	frac error=0.027336

N=26100	volume=12.548966	frac error=0.013668

N=26600	volume=12.541353	frac error=0.019646

N=27100	volume=12.530480	frac error=0.028187

N=27600	volume=12.527826	frac error=0.030271

N=28100	volume=12.528683	frac error=0.029598

N=28600	volume=12.523636	frac error=0.033561

N=29100	volume=12.526186	frac error=0.031559

N=29600	volume=12.522973	frac error=0.034082

*/
