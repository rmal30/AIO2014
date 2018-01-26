#include <cstdio>
int main(){
	int d,n;
	int count=0;
	int num =0;
	int sum = 0;
	FILE * in = fopen("nomin.txt","r");
	FILE * out= fopen("nomout.txt","w");
	fscanf(in,"%d",&n);
	for(int i=0; i<n;i++){
		fscanf(in,"%d",&d);
		sum+=d;
		//printf("%d\n",sum);
		if(sum>=num){num = sum; count++; sum = 0;}		
		}
		fprintf(out,"%d",count);
	}