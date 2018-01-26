#include <cstdio>

int main(){
	int c,r,v,x,y,z;
	FILE * in  = fopen("curryin.txt","r");
	FILE*out = fopen("curryout.txt","w");
	fscanf(in,"%d %d %d",&c,&r,&v);
		if(v>c+r){v=c+r;}
		else if(c>r+v){c=v+r;}
		else if(r>c+v){r=c+v;}
		else if((v+r+c)%2!=0){
			if(c > (v+r+c)/3){c--;}
			else if(v > (v+r+c)/3){v--;}
			else{r--;}
			}
		x = (r+v-c)/2;
		y = (c+v-r)/2;
		z = (c+r-v)/2;
		fprintf(out,"%d %d %d",x,y,z);
	}