#include <cstdio>

int main(){
	int d, t,a,b;
	FILE*in = fopen("dancein.txt","r");
	FILE*out= fopen("danceout.txt","w");
	fscanf(in, "%d %d", &d, &t);
	int h[d+1];
	int sum = 0;
	for(int i =1; i<=d; i++){h[i]=0;}
		
	for(int i =0; i<t; i++){
		fscanf(in,"%d %d",&a,&b);
		if(h[a]==0){h[b]++;}
		else{h[a]--; h[b]++;}
		//for(int i =1; i<=d; i++){printf("%d ",h[i]);}
		//printf("\n");
		}
	for(int i =1; i<=d; i++){sum+=h[i];}
	fprintf(out,"%d",sum);
	}