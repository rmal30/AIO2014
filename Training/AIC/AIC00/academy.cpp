#include <cstdio>

int main(){
	char t;
	int count =0;
	FILE*in = fopen("acadin.txt","r");
	FILE*out= fopen("acadout.txt","w");
	while(true){
		fscanf(in,"%c",&t);
		if(t=='i'){count++;}
		if(t=='o'){count--;}
		if(t=='x'){fprintf(out,"%d",count); return 0;}
			printf("%c",t);
		}
		fclose(out);
	}