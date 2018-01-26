#include <cstdio>
int h;
int w;
int count=0;
char tmp;

int main(){
	
	FILE * in = fopen("cavein.txt","r");
	FILE * out= fopen("caveout.txt","w");
	fscanf(in,"%d %d",&h,&w);
	char cell[h+1][w+1];
	
	for(int i=1; i<=h; i++){
		fscanf(in,"%c",&tmp);
		for(int j=1; j<=w; j++){
		fscanf(in,"%c",&cell[i][j]);
		}
	}
	printf("%c",tmp);
	//for(int i=0; i<=h; i++){cell[i+1][0]=0;}
	//for(int i=0; i<=w; i++){cell[0][i+1]=0;}
	if(cell[1][2]==cell[2][1] && cell[1][2]==46){count++;}
	for(int i=1; i<=h; i++){
		for(int j=1; j<=w; j++){
			int path=0;
			if(cell[i][j]==46){
				if(cell[i+1][j]==46){path++;}
				if(cell[i][j+1]==46){path++;}
				if(cell[i-1][j]==46){path++;}
				if(cell[i][j-1]==46){path++;}
				if(path==1 || path==0){count++;}
			}
			
		}
	}
	if(count==0){fprintf(out,"%d",count); return 0;}
	count--;
	if(count==0 || count ==-1){count=1;}
	fprintf(out,"%d",count);
	fclose(in); fclose(out);
	}

