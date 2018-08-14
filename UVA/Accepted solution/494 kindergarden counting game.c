#include<stdio.h>
int main( )
{
	char a[1000];
	int i,words;
	while(gets(a)){
    words=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(((a[i]<'a' || a[i]>'z') && (a[i]<'A' || a[i]>'Z')) && ((a[i-1]>='a' && a[i-1]<='z') || (a[i-1]>='A' && a[i-1]<='Z')))
			{
			    words++;
			    }
	}
	printf("%d\n",words);
	}

	return 0;
}

