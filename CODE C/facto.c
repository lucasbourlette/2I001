#include <stdio.h>

int facto(int n){
	int i;
	int res=1;
	for (i=1;i<=n;i++){
		res=res*i;
	}
	return res;
	}

int main(){
	int n,res;
	n=4;
	res=facto(n);
	printf("%d",res);
	return 0;
}
