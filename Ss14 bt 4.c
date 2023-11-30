#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice;
	int count =0;
	int temp2;
	int temp[1000];
	int find;
	int n,m;
	printf("Nhap vao so phan tu cua mang:");
	scanf("%d",&n);
	int nums[n];
	int nums2[m];
	int *ptr=nums;
	int *ptr2=nums2;
	int numsAdded[n];
	int *ptr3=numsAdded;
	int *finding=&find;
	do{
		printf("\nMENU\n");
		printf("1. Nhap vao mang\n");
		printf("2. In ra mang\n");
		printf("3. Sao chep vao mang khac\n");
		printf("4. Nhap vao mang khac, doi cho 2 mang voi nhau\n");
		printf("5. Dao nguoc mang\n");
		printf("6. Nhap vao 1 ki tu,tim kiem ki tu trong mang\n");
		printf("7. Thoat\n");
		printf("Lua chon cua ban:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(int i=0;i<n;i++){
					printf("nums[%d]=",i);
					scanf("%d",&nums[i]);
				}
				break;
			case 2:
				for(int i=0;i<n;i++){
					printf("nums[%d]=%d\n",i,nums[i]);
				}
				break;
			case 3:
				for(int i=0;i<n;i++){
					*(ptr3+i)=*(ptr+i);
				}
				printf("Mang vua dc sao chep:\n");
				for(int i=0;i<n;i++){
					printf("coppiedNums[%d]=%d\n",i,numsAdded[i]);
				}
				break;
			case 4:
				printf("Nhap so phan tu mang 2:");
				scanf("%d",&m);
				for(int i=0;i<m;i++){
					printf("nums[%d]=",i);
					scanf("%d",&nums2[i]);
				}
				if(n>m){
					for(int i=0;i<n;i++){
						*(ptr3+i)=*(ptr+i);
					}
//					nums[n]={0};
					for(int i=0;i<m;i++){
						*(ptr+i)=*(ptr2+i);
					}
					for(int i=0;i<n;i++){
						*(ptr2+i)=*(ptr+i);
					}
				}else if(n<m){
					for(int i=0;i<n;i++){
						*(ptr3+i)=*(ptr2+i);
					}
//					nums2[n]={0};
					for(int i=0;i<m;i++){
						nums2[i]=nums[i];
					}
					for(int i=0;i<n;i++){
						nums[i]=temp[i];
					}
				}else{
					for(int i=0;i<n;i++){
						temp[i]=nums[i];
						nums[i]=nums2[i];
						nums2[i]=temp[i];
					}
				}
				break;
			case 5:
				for(int i=0;i<n/2;i++){
					temp2 = nums[i];
					nums[i]=nums[n-i-1];
					nums[n-i-1]=temp2;
				}
				break;
			case 6:
				printf("Nhap so can tim:");
				scanf("%d",&find);
				for(int i=0;i<n;i++){
					if(*(ptr+i)==find){
						printf("So can tim :%d",find);
					}else{
						count++;
					}
				}
				if(count==n){
					printf("Ko co so trong mang");
				}
				break;
			case 7:
				exit(0);
			default:
				printf("Nhap tu 1-7");
		}
	}while(1==1);
}