#include <cstdio>

int main(){
	int n;
	FILE*in=fopen("hallin.txt","r");
	FILE*out = fopen("hallout.txt","w");
	fscanf(in,"%d",&n);
	int count = 0;
	while(n>=0){
		if(n>=count){n-=count;}
		else{n-=count; break;}
		count++;
		}
	fprintf(out,"%d",count);
	}