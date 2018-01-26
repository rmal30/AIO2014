#include <cstdio>

int main(){
	int t;
	int count =0;
	FILE*in = fopen("fashin.txt","r");
	FILE*out= fopen("fashout.txt","w");
	fscanf(in,"%d",&t);
	while(t>=100){t -=100;count++;}
	while(t>=20){t-=20;count++;}
	while(t>=5){t-=5;count++;}
	while(t>=1){t-=1;count++;}
	fprintf(out,"%d",count);
	}