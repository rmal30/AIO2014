#include <cstdio>
int main() {
	FILE * in = fopen("postin.txt","r");
	FILE * out= fopen("postout.txt","w");
	int n;
	fscanf(in,"%d", &n);
	int x[n], w[n], l[n], r[n], pos[n];
	int len=0;
	int min=100000000;
	int minpos;
	bool overlap=false;
	for(int i=0; i<n; i++){fscanf(in,"%d %d", &x[i],&w[i]);}
	
	for(int i=0; i<n; i++){
		overlap=false;
		for(int j=0; j<len; j++){
			if((x[i]>=l[j] && x[i]<r[j])||(x[i]+w[i]>=l[j] && x[i]+w[i]<r[j])){
				overlap=true;
				l[j]=x[i]; 
				r[j]=x[i]+w[i];
				pos[j]=i;
				}
			}
			if(overlap==false){l[len]=x[i]; r[len]=x[i]+w[i]; pos[len]=i; len++;}
		}
		for(int j=0; j<len; j++){if(l[j]<min){min=l[j];minpos=pos[j];}}
		fprintf(out,"%d",minpos+1);	
	fclose(in); fclose(out);
}