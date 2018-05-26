#include <stdio.h>
 
int main()
{
	int n,i,j;
	char str[30];
	scanf("%d",&n);
	while(n>0)
	{
		scanf("%s",str);
		for(i=1;str[i]!='\0';i++)
		   if(str[i]==str[i-1])
		   {
			for(j=i;;j++)
			{
				str[j]=str[j+1];
				if(str[j]=='\0')
					break;
			}
			i--;
		   }
		printf("%s\n",str);
		n--;
	}
    return 0;
}
