#include <cstdio>
int main() {
	
	FILE * in;
	FILE * out;
	int n;
	in = fopen("hailin.txt","r");
	out=fopen("hailout.txt","w");

	while(true){
		fscanf(in,"%d", &n);
		int count = 0; 
		if(n==0){return 0;}
		while(true){
			if(n==1){fprintf(out,"%d\n",count); break;}
			else if(n%2==0){n = n/2;}
			else{n = 3*n+1;}
			count++;
		}
		
	}
	fclose(in);
	fclose(out);
	}
