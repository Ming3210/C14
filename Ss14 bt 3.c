#include<stdio.h>
int countStr(char *str) {
    int count = 0;
    char *ptr = str;

    while (*ptr != '\0') {
        count++;
        ptr++;
    }

    return count;
}
int main()
{
	char str1[1000];
	char str2[1000];
	char chuoi[100];
    printf("Nhap chuoi ky tu thu 1: ");
    scanf("%s",str1);
	printf("Nhap chuoi ky tu thu 2: ");
    scanf("%s",str2);

    int strNum1 = countStr(str1);
	int strNum2 = countStr(str2);
    printf("So ky tu trong chuoi 1 la: %d\n",countStr(str1));
    printf("So ky tu trong chuoi 2 la: %d\n",countStr(str2));
    
    if(countStr(str1)>countStr(str2)){
    	printf("Chuoi ki tu dai hon:");
    	printf("%s",str1);
	}else if(countStr(str1)<countStr(str2)){
		printf("Chuoi ki tu dai hon:");
		printf("%s",str2);
	}else{
		printf("2 chuoi ki tu bang nhau.");
		printf("%s\n",str1);
		printf("%s\n",str2);
	}
}