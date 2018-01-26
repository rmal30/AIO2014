#include <cstdio>
int main(){
	int n,p;
	int small=1000000000;
	int large=0;
	FILE *in = fopen("ladyin.txt","r");
	FILE*out=fopen("ladyout.txt","w");
	fscanf(in,"%d",&n);
	for(int i=0; i<n; i++){
		fscanf(in,"%d",&p);
		if(p<small){small=p;}
		if(p>large){large=p;}
		}
		fprintf(out,"%d",large-small+1);
		fclose(in); fclose(out);
	}