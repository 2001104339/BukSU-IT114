#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100];
    int i,vowels=0, consonants=0, l;

    printf("Input a sentence: ");
    fgets(s, sizeof(s), stdin);

    l = strlen(s);

    i=0;
    while(s[i]!='\0')
        {
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u')
            s[i]=s[i]-32;
        i++;
        }

    for(i=0;s[i];i++)
    {
    	if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))
    	{

            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
		      vowels++;
            else
             consonants++;
        }

 	}

    printf("String Converted: ");
    puts(s);
    printf("\nString length: %d\n", l);
    printf("vowels = %d\n",vowels);
    printf("consonants = %d\n",consonants);

    return 0;
}
