#include <cstdio>

int main(){
	int n,t,b;
	FILE*in=fopen("aflin.txt","r");
	FILE*out=fopen("aflout.txt","w");
	fscanf(in,"%d\n%d",&n,&t);
	int s[t];
	int max;
	int maxid;
	for(int i=0; i<t; i++){fscanf(in,"%d",&s[i]);}
	fscanf(in,"%d",&b);
	int no[b];
	for(int i=0; i<b; i++){fscanf(in,"%d",&no[i]);}
	
	
	if(n-s[t-1]>s[0]){max = n-s[t-1]; maxid=s[t-1]+1;}
	else{max = s[0]-1; maxid=1;}
	
	for(int i=0; i<t; i++){
		if(s[i]-s[i-1]-1>max){
			max=s[i]-s[i-1]-1; 
			maxid=s[i-1] + 1;
			}
		}
		
	printf("%d",max);
}