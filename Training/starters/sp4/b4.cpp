#include <cstdio>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(){
	int s,p;
	int h,w;
	int total;
	int plant=0;
	FILE * in;
	FILE * out;
	//char str[10000][10000];
	in =fopen("pi.in","r");
	out=fopen("pi.out","w");
	fscanf(in,"%d %d",&p,&s);
	fscanf(in,"%d %d",&h,&w);
	char line[w];
	for(int i=0; i<h; i++){
	fscanf(in,"%s",line);
	for(int j=0; j<w; j++){
		if(line[j]==66){plant++;}
			}
}
total = ceil(p*3.14);
if(plant+s>total){fprintf(out,"%d",0);}
else{fprintf(out,"%d", total - plant - s);}
	fclose(in);
	fclose(out);
}