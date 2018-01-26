#include <cstdio>
#include <stdlib.h>
#include <math.h>
int main() {
	int n;
	int aus=0,fra=0;
	int tax =0;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		}
		
		for(int i=0; i<n; i++){
		if(aus<=fra){
			aus+=a[i];
			printf("%d a\n",a[i]);
			}
		else if(aus>fra){
			fra+=a[i];
			printf("%d f\n",a[i]);
			}
		tax+=abs(aus-fra);
	}
		printf("%d",tax);
		
	
}