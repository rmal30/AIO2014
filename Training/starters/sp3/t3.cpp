#include <cstdio>


int main() {
	
	FILE * in;
	FILE * out;
	int count=0;
	int n,t;
	in = fopen("tripin.txt","r");
	out=fopen("tripout.txt","w");
	
	fscanf(in,"%d", &n);
	for(int i= 0; i<n; i++){
		fscanf(in, "%d", &t);
		if(t%3==0){count++;}
		}
	if(count>0){
	printf("%d\n",count);
	fprintf(out,"%d\n",count);
		}else{
	printf("%s","Nothing here!");
	fprintf(out,"%s","Nothing here!");
	return 0;
	}
	
	fclose(in);
	in = fopen("tripin.txt","r");
	fscanf(in,"%d", &n);
	for(int j = 0; j<n; j++){
		fscanf(in, "%d", &t);
		if(t%3==0){
			printf("%d ",j+1);
			fprintf(out,"%d ",j+1);
			}
		}
	
	fclose(out);
	return 0;
}