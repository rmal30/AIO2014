#include <cstdio>
int main(){
	int n,p;
	int max = 0;
	int maxid;
	int solved=0;
	int count = 0;
	FILE*in = fopen("genin.txt","r");
	FILE*out = fopen("genout.txt","w");
	fscanf(in,"%d %d",&n,&p);
	int a[n];
	for(int i=0; i<n; i++){a[i]=0;}
	while(solved<p-count){
		count++;
		a[(count-1)%n]+=count;
		solved +=count;
		}
	a[count%n] += p-solved; 
	for(int i = 0; i<n; i++){
		if(a[i]>max){max = a[i]; maxid = i+1;}
		}
	if(p==0){maxid=1; max=0;}
	fprintf(out,"%d %d",maxid, max);
	fclose(in);
	fclose(out);
	}