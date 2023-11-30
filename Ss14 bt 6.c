#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[1000];
	char str2[1000];
	char temp[1000];
	int choice;
	char *ptr=str;
	char *ptr2=str2;
	char *ptr3=temp;
	do{
		printf("\nMENU\n");
		printf("1. Nhap vao chuoi\n");
		printf("2. In ra chuoi\n");
		printf("3. Sao chep chuoi vao 1 chuoi khac\n");
		printf("4. Nhap chuoi khac, tien hanh them chuoi do vao chuoi ban dau\n");
		printf("5. Nhap chuoi khac, so sanh voi chuoi ban dau\n");
		printf("6. In ra chuoi dao nguoc\n");
		printf("7. Thoat\n");
		printf("Nhap lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap:");
				scanf("%s",str);
				break;
			case 2:
				printf("%s\n",str);
				break;
			case 3:
				strcpy(str2,str);
				break;
			case 4:
				printf("Nhap chuoi 2: ");
				scanf("%s",str2);
				strcat(str,str2);
				break;
			case 5:
				printf("Nhap chuoi 2: ");
				scanf("%s",str2);
				strcmp(str2,str);
				if(strcmp(str,str2)>0){
					printf("Chuoi 1 lon hon\n");
				}else if(strcmp(str,str2)<0){
					printf("Chuoi 2 lon hon\n");
				}else{
					printf("2 chuoi bang nhau");
				}
				break;
			case 6:
				{
					int length=strlen(str);
//				for(int i=0;i<strlen(str)/2;i++){
//					int temp = str[i];
//					str[i]=str[strlen(str)-i-1];
//					str[strlen(str)-i-1]=temp;
				for(int i=0;i<length/2;i++){
					*temp = *(ptr+i);
					*(ptr+i)=*(ptr+(length-i-1));
					*(ptr+(length-i-1))=*temp;
					}
				break;
				}
		}
	}while(choice !=7);
}