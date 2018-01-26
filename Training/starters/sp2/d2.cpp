#include <cstdio>


int main() {
	
	FILE * in;
	FILE * out;

	int num;
	int min=1000000;
	int max=0;
	int sum=0;
	int n;
	in = fopen("dishin.txt","r");
	out=fopen("dishout.txt","w");
	
	fscanf(in,"%d", &num);
	for(int i= 0; i<num; i++){
		fscanf(in, "%d", &n);
		if(n<min){min = n;}
		if(n>max){max = n;}
		sum+=n;		
		}
	
	printf("%d %d %d",min, max, sum/num);
	fprintf(out,"%d %d %d",min, max, sum/num);
	fclose(in);
	fclose(out);
	return 0;
}