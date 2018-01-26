#include <cstdio>
#include <math.h>
int main(){
	int r,s,a,b;
	int sum = 0;
	int rose[10001];
	int scarlet[10001];
	FILE*in=fopen("snapin.txt","r");
	FILE*out=fopen("snapout.txt","w");
	fscanf(in,"%d %d",&r,&s);
	for(int i=0; i<10001; i++){rose[i]=0; scarlet[i]=0;}
	for(int i = 0; i<r; i++){
		fscanf(in,"%d",&a);
		rose[a]++;
		}
	for(int i=0; i<s; i++){
		fscanf(in,"%d",&b);
		scarlet[b]++;
		}
for(int i=0; i<10001;i++){sum+=rose[i]*scarlet[i];}
fprintf(out,"%d",sum);
fclose(in);
fclose(out);
	}