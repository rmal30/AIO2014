#include <cstdio>
#include <math.h>
int main(){
	int n,k;
	FILE*in=fopen("ninjain.txt","r");
	FILE*out=fopen("ninjaout.txt","w");
	fscanf(in,"%d %d",&n,&k);
	if(n==0){fprintf(out,"%d",0);}
	//else if(n<=k+1){fprintf(out,"%d",n-1);}
	else{fprintf(out,"%d", (n-1)%(k+1)+k*(int(floor((n-1)/(k+1)))));}
fclose(in);
fclose(out);
	}