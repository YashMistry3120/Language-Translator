#include<stdio.h>
#include<string.h>
char a='a';
void leftfac(char str[],char s1[],char s2[],char s3[]);
void check(char str[])
{
	int i,j=0,k,l,flag=0;
	char s3[20],s1[20],s2[20],s4[20];
	for(k=0;str[k]!='=';k++);
	k++;
	for(i=k;str[i]!='/';i++)
	{
		s1[j]=str[i];
		j++;
	}
	s1[j]='\0';
	//printf("%s\n",s1);
	i++;
	j=0;
	while(i<strlen(str) && str[i]!='/')
	{
		s2[j]=str[i];
		i++;
		j++;
	}
	s2[j]='\0';
	i++;
	l=0;
	while(i<strlen(str))
    {
        flag=1;
        s4[l]=str[i];
		i++;
		l++;
    }
    s4[l]='\0';
	if(s1[0]!=s2[0])
	{
		printf("No left Factoring");
	}
	else
	{

            for(i=0;i<strlen(s1) && i<strlen(s2);i++)
            {
                if(s1[i]==s2[i])
                {
                    s3[i]=s1[i];
                }
            }
            s3[i]='\0';
            leftfac(str,s1,s2,s3);


	}
}

void leftfac(char str[],char s1[],char s2[],char s3[])
{
	int i=0,p=0,l=0;
	char snew[20];
	while(str[i]!='=')
        printf("%c",str[i++]);
    printf("%c",str[i++]);
    printf("%c%c",s3[0],a);
    snew[l++]=a;
	snew[l++]='=';
	for(i=1;i<strlen(s1);i++)
	{
		snew[l++]=s1[i];
	}
	snew[l++]='/';
	for(i=1;i<strlen(s2);i++)
	{
		snew[l++]=s2[i];
	}
	snew[l]='\0';
	a++;
	printf("\n%s\n",snew);
	check(snew);

}

int main()
{
	int i;
	char str[20];
	printf("Enter production: ");
	scanf("%s",str);
	check(str);
}