#include<stdio.h>
#include<string.h>

void strlen1()
{
	printf("String length is : ");
	char str1[10]="vaibhav";
	printf("%d",strlen(str1));
	printf("\n");
	
}

void strcpy2()
{
	char str1[10]="hello";	
	char res[11];
	
	strcpy(res,str1);
	
	printf("Stiring Copy : ");
	printf("%s",res);
	printf("\n");	
}

void strncpy3()
{
	char str1[10]="hello";	
	char res[11];
	
	strncpy(res,str1,3);
	
	res[3]='\0';
	
	printf("3 characters copy of string : ");
	printf("%s",res);
	printf("\n");
}

void strcat4()
{
	char strn1[10]="First";
	char strn2[10]="Bit";
	char res[20];
	
	strcpy(res,strn1);
	strcat(res,strn2);
	
	printf("String Concat : ");
	printf("%s",res);
	printf("\n");
}

void strncat5()
{
	char strn1[10]="First";
	char strn2[10]="Bit";
	char res[20];
	
	strcpy(res,strn1);
	strncat(res,strn2,6);
	res[6]='\0';
	
	printf("2 charactes are concat in string 2 : ");
	printf("%s",res);
	printf("\n");
}

void strcmp6()
{
	char str1[10]="corn";
	char str2[10]="corn";
	
	printf("Comparison of two string : ");
    if(strcmp(str1,str2)==0)
    {
    	printf("String are same ");
	}
	else printf("String Not same");
	
    printf("\n");
    
}

void strncmp7()
{
	char str1[10]="bornfire";
	char str2[10]="bornwild";
	
	printf("Comparison of two string of 4 characters : ");
    if(strncmp(str1,str2,4)==0)
    {
    	printf("String are same ");
	}
	else printf("String Not same");
	
    printf("\n");
    
}
void strchr8()
{
	char str[10]="Vaibhav";
	char *p=strchr(str,'a');
	
	printf("First occurance of string : ");
	printf("%s",p);
	printf("\n");
	
}
void strrchr9()
{
	char str[10]="Vaibhav";
	char *p=strrchr(str,'a');
	
	printf("First occurance of string : ");
	printf("%s",p);
	printf("\n");
	
}
void strstr10()
{
	{
    char str[] = "Hello World";

	printf("Substring find : ");
    printf("%s", strstr(str, "World"));
    printf("\n");
    
}
}
void strtok11()
{
    char str[] = "Hello-World-C";

    char *p = strtok(str, "-");
	printf("Split string : ");
    while(p != NULL)
    {
        printf("%s\n", p);
        p = strtok(NULL, "-");
    }
    	printf("\n");
}
	
void strspn12()
{
	char strp[10]="12345@vaibhav";
	
	printf("Character count match : ");
	printf("%d",strspn(strp,"12345"));
	printf("\n");
}

void strcspn13()
{
	char st[10]="Vaibhav Borse";
	
	printf("Position of character : ");
	printf("%d",strcspn(st," "));
	printf("\n");
}

void strpbrk14()
{
	char str[10]="Onion";
	
	printf("First matching character is : ");
	printf("%s",strpbrk(str,"aeiou"));
	printf("\n");
}

int   strcoll15()
{
	char str1[10]="Nashik";
	char str2[10]="Nashik";
	
	int res = strcoll(str1,str2);
	return res;
}

void strxfrm16()
{
	char str[] = "Hello";
    char res[20];

    strxfrm(res, str, 20);

	printf("Transform string is : ");
    printf("%s", res);
    printf("\n");

}

void memcpy17()
{
	char str1[] = "Hello";
    char str2[10];

    memcpy(str2, str1, 6);

	printf("copy to memory :");
    printf("%s", str2);
    printf("\n");
}

void memmove18()
{
	char str[] = "Hello";

    memmove(str + 2, str, 3);

	printf("Move to memory : ");
    printf("%s", str);
    printf("\n");
}

void memcmp19()
{
	char str1[] = "Hello";
    char str2[] = "Hello";

	printf("compare memory : ");
    printf("%d", memcmp(str1, str2, 5));
    printf("\n");
}

void memset20()
{
	char str[10];

    memset(str, '*', 5);
    str[5] = '\0';
	printf("Fill memory :");
    printf("%s", str);
    printf("\n");
}

void memchr21()
{
	char str[] = "Hello World";
    char *p = memchr(str, 'W', 11);
	
	printf("Search character in memory : ");
    printf("%s", p);
}
void main()
{
	strlen1();
	strcpy2();
	strncpy3();
	strcat4();
	strncat5();
	strcmp6();
	strncmp7();
	strchr8();
	strrchr9();
	strstr10();
	strtok11();
	strspn12();
	strcspn13();
	strpbrk14();
	int result;
	
		result=strcoll15();
		if(result==0)
			printf("String are equal \n");
		else 
			printf("String are no equal \n");
			
	strxfrm16();
	memcpy17();
	memmove18();
	memcmp19();
	memset20();
	memchr21();
}
