#include <cstdio>
#include <stdio.h>
#include <stdlib.h>

int main(){
	char l[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char word[100];
	char message[100];
	char encrypt[100];
	int w[100];
	int m[100];
	int count = 0;
	FILE*in = fopen("secrtin.txt","r");
	FILE*out = fopen("secrtout.txt","w");
	
	for(int i=0; i<100; i++){word[i]=0; message[i]=0;}
	
	fscanf(in,"%s",word);
	fscanf(in,"%s",message);

	for(int i=0; i<100; i++){
		m[i]=26; w[i]=27;
			//printf("%c",word[i]);
		for(int j=0; j<27; j++){
			if(l[j]==word[i]){w[i]=j+1;}
			if(l[j]==message[i]){m[i]=j;}
			}
			
		}
	for(int i=0; i<100; i++){if(w[i]!=27){count++;}}
	
	for(int i=0; i<100; i++){
		if(m[i]!=26){
		encrypt[i]=(m[i]+w[i%count])%26;
		fprintf(out,"%c",l[encrypt[i]]);
	}
		}
	fclose(in);
	fclose(out);
	}