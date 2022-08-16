#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <unistd.h>//linux
//#include <windows.h>//windows
int ifcng();
int pinging();
int nslook();
int option;
int main(){
  do
  {
    printf("1.ifconfig 2.pinging 3.nslookup 0.exit\n");
    scanf("%d", &option);
    if ((option < 0 || option > 3)){
		
		 printf("\033[1;31m");
		printf("!!Enter in range 0-3!!\n");
		 printf("\033[0m");
		}
  } while (option < 0 || option > 3);
  
		if(option==0){for(int i=0;i<1;i++){printf("\033[1;32m");printf("executing...\n");printf("\033[0m");sleep(1);}exit(0);}
		if(option==1){ifcng();main();}
		if(option==2){pinging();}
		if(option==3){nslook();main();}
  return 0;
}
int ifcng(){system("ifconfig");printf("\n");}//used to configure the kernel-resident network interfaces.
int pinging(){								//roubleshooting, testing, and diagnosing network connectivity issues.
	char destination[] = "ping www.";
    char source[50] ;
	 printf("\033[1;31m");
	printf("Warning! terminate the program to stop! use:");
	printf("'CTRL+Z'\n");
	printf("\033[0m");
	printf("site:www.");
	scanf("%s",source);
    strcat(destination,source);
	char command[50];
	strcpy( command,destination);
	system(command);
	printf("\n");
}
int nslook(){							//getting information from the DNS server.
	char destination[] = "nslookup www.";
    char source[50] ;
	printf("site: www.");
	scanf("%s",source);
    strcat(destination,source);
	char command[50];
	strcpy( command,destination);
	system(command);
	printf("\n");
}




