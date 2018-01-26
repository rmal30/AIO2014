#include <cstdio>

int main(){
	int count =0;
	int a,b,w,h;
	int xi=0,yi=0;
	FILE*in = fopen("paintin.txt","r");
	FILE*out= fopen("paintout.txt","w");
	fscanf(in,"%d %d",&w,&h);
	fscanf(in,"%d %d",&a,&b);
	printf("%d %d\n",xi,yi);
	if(xi+a<=w && yi+b<=h){xi+=a;}
	else if(xi+a>w){xi=0; yi+=b;}
	while(a!=0 && b!=0){
		printf("%d %d\n",xi,yi);
		if(xi+a<=w && yi+b<=h){xi+=a;}
		else if(xi+a>w){xi=0; yi+=b;}
		
		fscanf(in,"%d %d",&a,&b);
		}
		fclose(in);
		fclose(out);
	}