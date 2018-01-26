#include <cstdio>
#include <stdlib.h>
int main(){
	FILE*in=fopen("islandin.txt","r");
	FILE*out=fopen("islandout.txt","w");
	int n,l;
	int max=0;
	int count;
	int dist;
	fscanf(in,"%d %d",&n,&l);
	int h[n],p[n];
	for(int i=0; i<n; i++){fscanf(in,"%d %d",&h[i],&p[i]);}
	
	for(int i=1; i<=4*l; i++){
		count=0;
		for(int j=0; j<n; j++){
			if(h[j]!=i){
				if(i>h[j]){
					if(h[j]-i+4*l<i-h[j]){dist = h[j]-i+4*l;}
					else{dist=i-h[j];}
					}
				else{
					if(i-h[j]+4*l<h[j]-i){dist = i-h[j]+4*l;}
					else{dist=h[j]-i;}
				}
				count+=dist*p[j];
			}
		}
		
		
		//printf("%s ","\n");
		if(count>max){max=count;}
	}
	fprintf(out,"%d",max);
}