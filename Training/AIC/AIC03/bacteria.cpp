#include <cstdio>

int main(){
	int n;
	int count=0;
	FILE*in = fopen("cultin.txt","r");
	FILE*out= fopen("cultout.txt","w");
	fscanf(in, "%d", &n);
	while(n%2==0){
		n=n/2;
		count++;
		}
		fprintf(out,"%d %d",n,count);
	}