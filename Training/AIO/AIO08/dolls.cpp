#include <cstdio>

int main(){
	int d;
	int count =0;
	bool counted = false;
	int num;
	int min = 10000;
	FILE*in = fopen("dollin.txt","r");
	FILE*out= fopen("dollout.txt","w");
	fscanf(in,"%d",&d);
	for(int i=0; i<d; i++){
		fscanf(in,"%d",&num);
		if(num<min){
			if(counted==false){count++; counted = true;}
		}else{counted = false;}
		min = num;
		}
	fprintf(out,"%d",count);
	}