#include<stdio.h>
int main()
{
	char ch;
	printf("\n enter the any charecter");
	scanf("%d",&ch);
	switch(ch)
	{
		case'A':
		case'a':
			printf("\n %C is vowel",ch);
			break;
			case'E':
			case'e':
			printf("\n %C is vowel",ch);
				break;
			case'I':
			case'i':
			printf("\n %C is vowel",ch);
				break;
			case'O':
			case'o':
			printf("\n %C is vowel",ch);
				break;
			case'U':
			case'u':
			printf("\n %C is vowel",ch);
				break;
				default:	printf("\n %C is not vowel",ch);
				
	}
	return 0;
}
