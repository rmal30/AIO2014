#include <cstdio>
int main(){
	int a,b,c;
	FILE * in = fopen("salesin.txt","r");
	FILE * out= fopen("salesout.txt","w");
	fscanf(in,"%d\n%d\n%d",&a,&b,&c);
	int smallest = 1000000;
	if(a<smallest){smallest=a;}
	if(b<smallest){smallest=b;}
	if(c<smallest){smallest=c;}
	fprintf(out,"%d", a+b+c - smallest);
	}