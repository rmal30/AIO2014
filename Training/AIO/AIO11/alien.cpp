#include <cstdio>
int main() {
	int n,w;
	FILE * in = fopen("alienin.txt","r");
	FILE * out= fopen("alienout.txt","w");
	fscanf(in,"%d %d", &n,&w);
	int p[n];
	int max = 0;
	int j=0;
	for(int i = 0; i<n; i++){fscanf(in,"%d",&p[i]);}
	for(int i = 0; i<n; i++){
		while(p[i]-p[j]>=w){j++;}
		if(i-j+1>max){max = i-j+1;}
	}
	fprintf(out,"%d",max);
	fclose(in); fclose(out);
}