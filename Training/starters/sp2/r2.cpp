#include <cstdio>


int main() {
	
	FILE * in;
	FILE * out;
	int sum=0;
	int c,n, rain;
	in = fopen("rainin.txt","r");
	out=fopen("rainout.txt","w");
	
	fscanf(in,"%d %d", &n, &c);
	for(int i= 0; i<n; i++){
		fscanf(in, "%d", &rain);
		sum+=rain;
		if(sum>=c){
			printf("%d",i+1);
			fprintf(out,"%d",i+1);
			fclose(in);
			fclose(out);
			return 0;
			}
		}
	
	
}