#include <cstdio>
#include <vector>

int main() {
	FILE * in = fopen("hippoin.txt", "r");
	FILE * out = fopen("hippoout.txt", "w");
	int n,h,f;
	int sum = 0, max = 0, maxid;
	fscanf(in,"%d %d %d",&n, &h, &f);
	int e[h], d[h + 1];
	int init=f;
	for(int i=0; i<h; i++) {fscanf(in, "%d", &e[i]);}
	d[0]=e[0]-1;
	for(int i=1; i<h; i++){d[i] = e[i]-e[i-1]-1;}
	d[h]=n-e[h-1];
	bool done=false;
	if(f%2 == 1) {
			if(d[h]>d[0]) {sum+=d[h]; d[h]=0;}
			else {sum+=d[0];d[0]=0;}
			f--;
		}
	while(f>0 && f>init-2*h){
		max=0;
		for(int i=0; i<=h; i++){if(d[i]>max){max=d[i]; maxid=i;}}
		
		if(f>1){
			if(d[h]>=max){f--; sum+=d[h]; d[h]=0;}
			else if(d[0]>=max){f--; sum+=d[0]; d[0]=0;}
			else if(d[0]+d[h]>=max){f-=2; sum+=d[0]+d[h]; d[h]=0; d[0]=0;}
			else{sum+=d[maxid]; f-=2; d[maxid]=0;}
		}
		if(f == 1) {
			if(d[h]>d[0]) {sum+=d[h];}
			else {sum+=d[0];}
			f=0;
		}
	}
	fprintf(out, "%d", sum);
}