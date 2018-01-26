#include <cstdio>
int main(){
	FILE*in = fopen("heatin.txt","r");
	FILE*out = fopen("heatout.txt","w");
	int n,h,t;
	int count = 0;
	int max = 0;
	fscanf(in, "%d %d",&n,&h);
	for(int i = 0; i<n; i++){
		fscanf(in, "%d", &t);
		if(t>=h){
			count++;
			if(count>max){max = count;}
			}else{count=0;}
		}
		fprintf(out, "%d", max);
		printf("%d", max);
	fclose(in); fclose(out);
	}