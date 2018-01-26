#include <cstdio>

int main(){
	int n,m;
	int q[4];
	int x, y;
	int max=0;
	int qmax;
	FILE *in = fopen("flowin.txt", "r");
	FILE*out = fopen("flowout.txt","w");
	fscanf(in , "%d", &n);
	fscanf(in, "%d", &m);
	for(int j=0; j<4; j++){q[j]=0;}
	for(int i = 0; i<m; i++){
		fscanf(in,"%d %d", &x, &y);
		if(x>n&&y>n){q[4-1]++;}
		else if(x<=n&&y>n){q[3-1]++;}
		else if(x>n&&y<=n){q[2-1]++;}
		else if(x<=n&&y<=n){q[1-1]++;}
	}
		
	for(int j=0; j<4; j++){
		if(q[j]>max){max = q[j]; qmax=j;}
		}
		fprintf(out,"%d %d", qmax+1, max);
	fclose(in); fclose(out);
	}