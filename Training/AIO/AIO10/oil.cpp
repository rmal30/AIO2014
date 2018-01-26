#include <cstdio>
#include <math.h>
int main(){
	int r,c,d;
	char tmp;
	int diff,count;
	int start=0;
	FILE*in=fopen("oilin.txt","r");
	FILE*out=fopen("oilout.txt","w");
	fscanf(in,"%d %d %d",&r,&c,&d);
	char cell[c+1][r+1];
	int dolx, doly,lenstar=0;
	int cross=r*c;
	bool star;
	//printf("%d",cross);
	int sx[cross], sy[cross];
	for(int j=0; j<r; j++){
		fscanf(in,"%c",&tmp);
		for(int i=0; i<c; i++){
			fscanf(in,"%c",&cell[i][j]);
			if(cell[i][j]=='$'){cell[i][j]='*'; doly=j; dolx=i;}
			if(cell[i][j]=='*'){sx[lenstar]=i; sy[lenstar]=j; lenstar++;}
			}
		}
	count = lenstar;
	
	for(int i=0; i<d; i++){
		diff=0;
		lenstar=count;
		star=false;
		for(int l=start; l<lenstar; l++){
				if(sx[l]>0 && cell[sx[l]-1][sy[l]]=='.'){
					cell[sx[l]-1][sy[l]]='*'; 
					sx[count]=sx[l]-1; 
					sy[count]=sy[l]; 	
					count++; diff++; star=true;}
					
				if(cell[sx[l]+1][sy[l]]=='.'){cell[sx[l]+1][sy[l]]='*'; sx[count]=sx[l]+1; sy[count]=sy[l]; count++; diff++; star=true;}
				if(sy[l]>0 && cell[sx[l]][sy[l]-1]=='.'){cell[sx[l]][sy[l]-1]='*'; sx[count]=sx[l]; sy[count]=sy[l]-1; count++; diff++;star=true;}
				if(cell[sx[l]][sy[l]+1]=='.'){cell[sx[l]][sy[l]+1]='*'; sx[count]=sx[l]; sy[count]=sy[l]+1; count++; diff++; star=true;}
			if(star==true){start++;}
			}
		
		
		if(diff==0){
			cell[dolx][doly]='$';	
			for(int j=0; j<r;j++){
				for(int k=0; k<c; k++){
					fprintf(out,"%c",cell[k][j]);
					}
				fprintf(out,"%s","\n");
			}
			return 0;
		}
		
			
		}	

		cell[dolx][doly]='$';	
		for(int j=0; j<r;j++){
			for(int k=0; k<c; k++){fprintf(out,"%c",cell[k][j]);}
			fprintf(out,"%s","\n");
			}
		
fclose(in);
fclose(out);
	}