#include <cstdio>
int main(){
	int a,b,k;
	bool found = false;
	FILE * in = fopen("safein.txt","r");
	FILE * out= fopen("safeout.txt","w");
	fscanf(in,"%d %d",&a,&b);
	int cs[a];
	int cc[a];
	for(int i=0; i<a; i++){fscanf(in,"%d",&cs[i]);}
	for(int i=0; i<b; i++){fscanf(in,"%d",&cc[i]);}
	for(int i=0; i<=a-b; i++){
		if(found==false && cs[i]-cc[0]>=0){
			k = cs[i]-cc[0];
		for(int j=1; j<b;j++){
			//printf("%d %d\n",cs[i+j],cc[j]);
			if(k!=cs[(i+j)]-cc[j]){j=b;}
			if(j==b-1){found=true;}
			}
			}
		}
		for(int i=0; i<a; i++){
			fprintf(out,"%d\n", cs[i]-k);
		}
fclose(in);fclose(out);
	}