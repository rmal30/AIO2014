#include <cstdio>

int main(){
	int total = 0;
	int w;
	FILE*in=fopen("wetin.txt","r");
	FILE*out=fopen("wetout.txt","w");
	for(int i = 0; i<8; i++){
		fscanf(in,"%d", &w);
		total +=w;
		if(total<10){total = 0;}
		else{total = total-10;}
		}
		fprintf(out,"%d",total);
	}