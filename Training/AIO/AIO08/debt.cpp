#include <cstdio>

int main(){
	FILE*in=fopen("debtsin.txt","r");
	FILE*out=fopen("debtsout.txt","w");
	int n;
	int total=0;
	int id;
	int count=0;
	fscanf(in,"%d",&n);
	int p[n];
	int pid=n;
	for(int i=0; i<n; i++){fscanf(in,"%d",&p[i]);}
	for(int i=0; i<n; i++){
		total=p[i]; count++; id=1;
		while(total<=0 && pid==n){
			total+=p[(id+i)%n]; id++;
			if(total==0 && id>n-2){
				pid=i; 
				fprintf(out,"%d",pid+1); 
				return 0;
				}
			}
		i=(i+id)%n-1;
		}
}