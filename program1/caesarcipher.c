#include<stdio.h>
//#include<conio.h>
 
int main()
{
	char message[100], ch;
	int i, key = 0, number[100], stage2[100], stage3[100];
	/*char arr[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n'
	,'o','p','q','r','s','t','u','v','x','y','z'};
	char carr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N'
	,'O','P','Q','R','S','T','U','V','X','Y','Z'};*/
	
	printf("Enter a message to encrypt: ");
	//gets(message);
	scanf("%s", message);
	//printf("Enter key: ");
	//scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + 1;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			message[i] = ch;
			int asci = ch;
			number[i] = asci - 70;
			
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + 1;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			message[i] = ch;
			int asci= ch;
			number[i]=asci-64;
			
				}
	}
	/*for(int j=0; j<6; j++){
	  for(i=0; i<26; i++){
	   if(message[j]==arr[i])
	   {
	       printf("%d ",i+1);
	   }
	}
}*/

	printf("Stage1: %s\n", message);
	printf("Facevalue:");
	for(i=0;message[i]!='\0';i++){
	    printf(" %d",number[i]);
	    key = key + number[i];
	}
	printf("\nPosition value:");
	for(i=0;message[i]!='\0';i++){
	    printf(" %d",i+1);
	    stage2[i] = key - number[i];
	    stage3[i]=stage2dd[i]-(i+1);
	    
	}
	printf("\nsum %d",key);
	printf("\nstage2:");
	for(i=0;message[i] != '\0';i++){
	    printf(" %d", stage2[i]);
}
printf("\nstage3:");
	for(i=0;message[i] != '\0';i++){
	    printf(" %d", stage3[i]);
}
	printf("\n");                                                                          
	return 0;
}