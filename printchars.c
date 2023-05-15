#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main () {
	int i;
	int alphabet_count;
	char str [500];
	char alphabet [500];
	char alphabet_caps [500];
	char *token;
	FILE *ptr;
	strcpy(alphabet,"abcdefghijklmnopqrstuvwxyz");
	strcpy(alphabet_caps,"ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	ptr = fopen("skyworks_earnings.txt","r");
	if (ptr == NULL ) {	
		printf("ERROR | file skyworks_earnings.txt is not found \n TERMINATING \n");
		return 1;
	}
	while (fgets(str,34,ptr) != NULL) {
		str[strlen(str) - 1] ='\0';
		for(i = 0 ; i < strlen(str) ; i++) {
			printf("%3c",str[i]);
		}
		printf("\n");
		for(i = 0 ; i < strlen(str) ; i++) {
			printf("%3d",i+1);
		}
		printf("\n");
		for(i = 0 ; i < strlen(str) ; i++) {
			if(str[i] == '.' || str[i] == ',' || str[i] == ' ') {
				printf("   ");
			} else {
			    for (alphabet_count = 0 ;alphabet_count < strlen(alphabet) ;alphabet_count++) {
				if (alphabet[alphabet_count] == str[i]) {
					printf("%3d",alphabet_count+1);
				}	 
			     }
			    for (alphabet_count = 0 ;alphabet_count < strlen(alphabet) ;alphabet_count++) {
				if (alphabet_caps[alphabet_count] == str[i]) {
					printf("%3d",alphabet_count+1);
				}	 
			     }
			}
		}	
		printf("\n");
		printf("\n");
	}
	for (i = 0; i < strlen(alphabet) ; i++) {
		printf("%3c",alphabet[i]);	
	}
	printf("\n");
	for (i = 0; i < strlen(alphabet) ; i++) {
		printf("%3d",i+1);	
	}
	printf("\n");
return 0;
}
