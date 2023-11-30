#include<stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu:");
	scanf("%d",&n);
	int nums[n];
	int *str=nums;
	for(int i=0;i<n;i++){
		printf("nums[%d]=",i);
		scanf("%d",&nums[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(*(str+i)>*(str+j)){
				int temp= *(str+i);
				*(str +i)=*(str+j);
				*(str+j)=temp;
			}
		}
	}
	printf("Mang tang dan:\t");
	for(int i=0;i<n;i++){
		printf("%d\t",nums[i]);
	}
}