#include <stdio.h>
#include <stdlib.h>
#include "subsetSum.h"

int subsetSum(int x[],int n,int k,int v){
	if(v==0 && k==0){
		return true;
	}
	if(v!=0 && k==0){
		return false;
	}
	if(n==0){
		return false;
	}
	int result1=0;
	if(v>=x[0]){
		result1=subsetSum(x+1,n-1,k-1,v-x[0]);
	}
	int result2=subsetSum(x+1,n-1,k,v);
	return (result1+result2)>0;
}
