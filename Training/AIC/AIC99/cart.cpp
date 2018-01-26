#include <cstdio>
#include <math.h>
int main(){
	int r,c,diff;
	char tmp;
	int count=0;
	FILE*in=fopen("cartin.txt","r");
	FILE*out=fopen("cartout.txt","w");
	fscanf(in,"%d %d",&r,&c);
	char cell[c+1][r+1];
	int lenstar;
	int cross=r*c;
	int total=0;
	int sx[cross], sy[cross];
	for(int j=0; j<r; j++){
		fscanf(in,"%c",&tmp);
		for(int i=0; i<c; i++){
			fscanf(in,"%c",&cell[i][j]);
			}
		}	
		
	
	for(int i=0; i<c; i++){
		for(int j=0; j<r;j++){
			if(cell[i][j]=='X'){
				sx[0]=i; sy[0]=j;
				cell[i][j]='*';
				diff=1; count=1; lenstar=1; total++;
				while(diff>0){
					diff=0;
					for(int l=0; l<lenstar; l++){
						if(sx[l]>0 && cell[sx[l]-1][sy[l]]=='X'){cell[sx[l]-1][sy[l]]='*'; sx[count]=sx[l]-1; sy[count]=sy[l]; count++; diff++;}
						if(sx[l]<c-1 && cell[sx[l]+1][sy[l]]=='X'){cell[sx[l]+1][sy[l]]='*'; sx[count]=sx[l]+1; sy[count]=sy[l]; count++; diff++;}
						if(sy[l]>0 && cell[sx[l]][sy[l]-1]=='X'){cell[sx[l]][sy[l]-1]='*'; sx[count]=sx[l]; sy[count]=sy[l]-1; count++; diff++;}
						if(sy[l]<r-1 && cell[sx[l]][sy[l]+1]=='X'){cell[sx[l]][sy[l]+1]='*'; sx[count]=sx[l]; sy[count]=sy[l]+1; count++; diff++;}
					}
					lenstar=count;
				}
				
			}
		}
	}
		
		fprintf(out,"%d",total);	
		fclose(in);
		fclose(out);
	}