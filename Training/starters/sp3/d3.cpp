#include <cstdio>


int main() {
	
	FILE * in;
	FILE * out;
	int n,q,x;
	in = fopen("encyin.txt","r");
	out=fopen("encyout.txt","w");
	
	fscanf(in,"%d %d", &n, &q);
	int p[n];
	//int x[q];
	for(int i= 0; i<n; i++){
		fscanf(in, "%d", &p[i]);
		}
	for(int j=0; j<q;j++){
		fscanf(in, "%d", &x);
		printf("%d\n", p[x-1]);
		fprintf(out,"%d\n",p[x-1]);
		}
			
			fclose(in);
			fclose(out);
			return 0;
}