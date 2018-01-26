#include <cstdio>

int main(){
	FILE*in = fopen("savein.txt","r");
	FILE*out=fopen("saveout.txt","w");
	int n;
	int total;
	fscanf(in,"%d",&n);
	int c[n];
	for(int i=0; i<n; i++){
		fscanf(in,"%d",&c[i]);
		
		if(c[i]%10>=2){total+=c[i];}
		
		}
	fclose(in); fclose(out);
	}