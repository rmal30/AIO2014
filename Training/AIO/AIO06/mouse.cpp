#include <cstdio>

int main(){
	FILE*in=fopen("mousein.txt","r");
	FILE*out=fopen("mouseout.txt","w");
	int n=0,e=0,w=0,s=0;
	int x[9];
	int y[9];
	char dir[5]="NEWS";
	int dirid;
	int minx=1000000;
	int maxx=0,miny=1000000,maxy=0;
	for(int i=0; i<8; i++){
		fscanf(in,"%d %d",&x[i],&y[i]);
		if(x[i]>maxx){maxx=x[i];}
		if(x[i]<minx){minx=x[i];}
		if(y[i]>maxy){maxy=y[i];}
		if(y[i]<miny){miny=y[i];}
		
		}
	
	for(int i=0; i<8; i++){
		if(x[i]==minx){w++;}
		if(x[i]==maxx){e++;}
		if(y[i]==miny){s++;}
		if(y[i]==maxy){n++;}
		}
	if(n==4){dirid=0;}
	if(e==4){dirid=1;}
	if(w==4){dirid=2;}
	if(s==4){dirid=3;}
	fprintf(out,"%c",dir[dirid]);
	}