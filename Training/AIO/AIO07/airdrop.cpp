#include <cstdio>

int main(){
	FILE * in = fopen("dropin.txt","r");
	FILE *out = fopen("dropout.txt","w");
	int n;
	int init=0;
	int gap=0;
	int max=0;
	fscanf(in,"%d",&n);
	int ad[n];
	for(int i=0; i<n; i++){fscanf(in,"%d",&ad[i]);}
	
	

}