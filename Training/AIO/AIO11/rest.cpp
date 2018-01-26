#include <cstdio>

int main(){
	int n,a,b;
	int count=0;
	int 
	FILE*in=fopen("restin.txt","r");
	FILE*out=fopen("restout.txt","w");
	fscanf(in,"%d %d %d",&n,&a,&b);
	int s[n], t[n];
	for(int i=0; i<n; i++){
		fscanf(in,"%d %d",&s[i],&t[i]);
		if(s[i]>t[i] && s[i]>0){count+=s[i]; }
		}
	}