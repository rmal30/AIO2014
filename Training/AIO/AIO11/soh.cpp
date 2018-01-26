#include <cstdio>
int main() {
	FILE * in = fopen("handin.txt","r");
	FILE * out= fopen("handout.txt","w");
	int n,s,k,a,b;
	int pos;
	fscanf(in,"%d %d %d", &n,&s,&k);
	pos = s;
	
	for(int i = 0; i<k; i++){
		fscanf(in,"%d %d",&a,&b);
		if(a<pos && pos<=b){pos--;}
		else if(a>pos && pos>=b){pos++;}
		else if(pos==a){pos = b;}
		}
		fprintf(out,"%d",pos);
	fclose(in); fclose(out);
}