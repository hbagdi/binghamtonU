#include<stdio.h>
#include<stdlib.h>
#define EQUAL ==
#define TRUE 1
#define FALSE 0

#if TRUE
#define DEBUG(s) TRACE;fprintf(stderr,"\t %s",s);
#define TRACE fprintf(stderr,"%d", __LINE__)
#else
#define DEBUG(s) 
#define TRACE 
#endif


int myStrStr (char  haystack[], char needle[], char buffer[]){

int i=0,j=0;
int k;
int start=-1;
int copyi;
int end=-1;
while(haystack[i]!='\0'){

	if(haystack[i]==needle[j]){
		//buffer[j]=needle[j];
		//printf("\nouter %c",needle[j]);
		j++;k=i;start=i;k++;
			while(needle[j]!='\0'){
				if(haystack[k]!=needle[j]) break;
				//printf("\n inner %c",needle[j]);
				//buffer[j]=needle[j];
				j++;k++;
				
			}
			if(needle[j]=='\0'){	
				end=k-1;
				i=0;
				copyi=start;
				while(copyi<=k-1){
				buffer[i]=haystack[copyi];
				copyi++;i++;
				}	
				buffer[i]='\0';
			//	buffer[j]=needle[j];
			//	printf("\nstring found at %d",r);
				//copy here;
				
				return 0;
			}
	j=0;
	}

i++;
}
//printf("String not found");
return 1;

}


int main(){
int result;
DEBUG("HELLO");

//char haystack[20],needle[20],buffer[20];
//fprintf(stderr,"%d", __LINE__);
printf("\n");


char haystack[20];
char needle[20];
char buffer[10]="";
printf("\nEnter the haystack string:");
scanf("%s",haystack);
printf("\nEnter the needle string:");
scanf("%s",needle);
result =myStrStr(haystack,needle,buffer);
if(result==0){
printf("\nHaystack:%s \nNeedle:%s \nBuffer:%s\n",haystack,needle,buffer);
}
else{
printf("String not found\n");
}
return 0;
}
