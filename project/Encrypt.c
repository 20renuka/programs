#include<stdio.h>
//#include<conio.h>
 
int main()
{
	char message[100], ch;
	int i, key = 0, number[100], stage2[100], stage3[100];
	
	printf("Enter a message to encrypt: ");
	
	scanf("%[^\n]%*c", message);
	
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
		   
		   if(ch == 'z'){
		       ch = ch -90;
				message[i] = ch;
			int asci = ch;
			number[i] = asci +21;
	    }
            else{
			ch = ch + 1;
			message[i] = ch;
			int asci = ch;
			number[i] = asci - 70;
			
			
		}

			
		}
		else if(ch >= 'A' && ch <= 'Z'){
			
			if(ch == 'Z'){
		       ch = ch + 7;
				message[i] = ch;
			int asci = ch;
			number[i] = asci +21;
		}

			
			else{
			ch = ch + 1;
			message[i] = ch;
			int asci= ch;
			number[i]=asci-64;
			
				}}
				else{
				    if(ch == '~'){
				    ch = 'A';
				    message[i] = ch;
				    int asci = ch;
				    number[i] = asci - 64;
				    
			    }

				   else{ ch = ch + 1;
				   message[i] = ch;
			       int asci= ch;
			       number[i]=asci+21;
				}
				
			}

				
	}
	
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
	    stage3[i]=stage2[i]-(i+1);
	    
	}
	printf("\n %d",key);
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