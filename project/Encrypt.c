#include<stdio.h>
int main()
 {
	char Message[100], Character;
	int Counter, key = 0, Stage1[100], Stage2[100], Stage3[100];
	printf("Enter the message which you want to encrypt: ");
	scanf("%[^\n]%*c", &Message);
	for(Counter = 0; Message[Counter] != '\0'; ++Counter) {
	    Character = Message[Counter];
		if(Character >= 'a' && Character <= 'z'){		   
		   if(Character == 'z'){
		       Character = Character - 90;
			   Message[Counter] = Character;
    		   int asci = Character;
			   Stage1[Counter] = asci + 21;
	         }
	         else {
	             Character = Character + 1;
	             Message[Counter] = Character;
	             int asci = Character;
	             Stage1[Counter] = asci - 70;
	         }
	    }
	    else if(Character >= 'A' && Character <= 'Z') {
	        if(Character == 'Z'){
	            Character = Character + 7;
	            Message[Counter] = Character;
	            int asci = Character;
	            Stage1[Counter] = asci +21;
	            }
	            else {
	                Character = Character + 1;
	                Message[Counter] = Character;
	                int asci = Character;
	                Stage1[Counter] = asci - 64;
	            }  
    	}
		else {
			  if(Character == '~') {
			      Character = 'A';
			      Message[Counter] = Character;
			      int asci = Character;
			      Stage1[Counter] = asci - 64;
				  }
              else {
                  Character = Character + 1;
                  Message[Counter] = Character;
                  int asci = Character;
                  Stage1[Counter] = asci + 21;
				   }
		     }
          }
	
	printf("Stage1: %s\n", Message);
	printf("Facevalue:");
	for(Counter = 0; Message[Counter] != '\0'; Counter++) {
	    printf(" %d",Stage1[Counter]);
	    key = key + Stage1[Counter];
	}
	printf("\nPosition value:");
	for(Counter = 0; Message[Counter] != '\0'; Counter++) {
	    printf(" %d", Counter + 1);
	    Stage2[Counter] = key - Stage1[Counter];
	    Stage3[Counter] = Stage2[Counter] - (Counter + 1);
	  }
	printf("\n Key: %d",key);
	printf("\nStage2: ");
	for(Counter = 0; Message[Counter] != '\0'; Counter++) {
	    printf(" %d", Stage2[Counter]);
      }
    printf("\nStage3:");
    for(Counter = 0; Message[Counter] != '\0'; Counter++){
	    printf(" %d", Stage3[Counter]);
       }
	printf("\n");                                                                          
	return 0;
}