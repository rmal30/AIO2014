#include <cstdio>


int main() {
	long int n,q;
	scanf("%ld", &n);
	long int p[n];
	for(long int i= 0; i<n; i++){scanf("%ld", &p[i]);}
	scanf("%ld", &q);
	long int x[q];
	for(long int j=0; j<q;j++){scanf("%ld", &x[j]);}
	for(long int j=0; j<q;j++){
		for(long int i=0; i<n; i++){
			if(x[j]==p[i]){printf("%ld\n", i+1); j++;}
			}
		}
			return 0;
}