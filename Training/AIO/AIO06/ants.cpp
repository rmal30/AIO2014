#include <cstdio>

int main(){
	int d;
	int count =0;
	bool counted = false;
	int num;
	int max = 10000;
	FILE*in = fopen("antsin.txt","r");
	FILE*out= fopen("antsout.txt","w");
	fscanf(in,"%d",&d);
	for(int i=0; i<d; i++){
		fscanf(in,"%d",&num);
		if(num>max){
			if(counted==false){count++; counted = true;}
		}else{counted = false;}
		max = num;
		}
	fprintf(out,"%d",count);
	}