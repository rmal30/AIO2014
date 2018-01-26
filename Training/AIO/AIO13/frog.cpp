#include <cstdio>
#include <stdlib.h>

int main(){
	int n;
	FILE *in = fopen("frogin.txt","r");
	FILE*out = fopen("frogout.txt","w");
	fscanf(in,"%d",&n);
	int h[n];
	int max=0;
	int min1[n];
	int min2[n];
	for(int i = 0; i<n; i++){fscanf(in,"%d",&h[i]);}
	min1[0]=h[0]; min2[n-1]=h[n-1];
	
	for(int i = 1; i<n; i++){
		if(min1[i-1]>=h[i] && i<n-2){min1[i]=h[i];}
		else{min1[i]= min1[i-1];}
		//printf("%d\n",min1[3]);
	}
	
	for(int k = n-2; k>0; k--){
		if(min2[k+1]>=h[k] && k>1){min2[k]=h[k];}
		else{min2[k]=min2[k+1];}
		//printf("%d\n",min2[k]);
	}
	
	for(int j = 1; j<n-1; j++){
		
		if(2*h[j] - min1[j]-min2[j]>max && min1[j]<h[j] && min2[j]<h[j] && min1[j]!=0 && min2[j]!=0){
			//printf("%d\n",j);
			max=2*h[j] - min1[j]-min2[j];
			}
	}
	fprintf(out,"%d",max);
	fclose(in); fclose(out);
	}