#include <cstdio>
#include <stdlib.h>

int main(){
	int a,b,n;
	int best,worst;
	int l,h;
	FILE *in = fopen("archin.txt","r");
	FILE*out = fopen("archout.txt","w");
	fscanf(in,"%d %d %d",&n,&a,&b);
	if(a>b){h=a;l=b;}else{h=b;l=a;}
	best=abs(n-l-h);
	worst = h+l-1;
	
	if(a==1||b==1){best = 1; worst = h;}
	if(a==b){best = a;}
	if(a==n||b==n){worst=n;}
	if(a+b>n){worst = n;}
	if(a+b<=n+1){best = 1;}
	fprintf(out,"%d %d",best,worst);
	}