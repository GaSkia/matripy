#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,m;
	int *v;
	
	printf("n= ");
	scanf("%d", &n);
	v = (int*)malloc(n*sizeof(int)); 
	if (v== NULL){
		printf("Err\n");
		return -1;
	}

	for (int i = 0; i<n; i++){
		printf("v[%d]= ",i);
		scanf("%f", &v[i]);
		}
	for (int i = 0; i<n; i++){
		printf(" %f ", &v[i]);
		}
	
	free(v);
	return 0;
}

