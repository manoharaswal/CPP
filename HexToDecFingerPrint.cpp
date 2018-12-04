#include <iostream>
#include <string.h>
#include <math.h>
#include <stdio.h>

using namespace std;

char HexString[] = "01 21 03 06   0f 1a 1c 33   3a 3b 3a 4a |..!..y";

char DecString[256] = {0};

void upper_string(char s[])
{
	int c = 0;
	while (s[c] != '\0') {
		if (s[c] >= 'a' && s[c] <= 'z') {
			s[c] = s[c] - 32;
		}
		c++;
	}
}

int mypow(int Hex,int count)
{
	int num = 1;
	while(count--)
	{
		num  = num * Hex;
	}
	return num;
}

void hextodec(char *HexPtr)
{
	int len,i,sum,count=0,num = 0;
	char temp[8] = {0};
	upper_string(HexPtr);
	len = strlen(HexPtr);
	for(i = len - 1;i >= 0;i--)
	{
		if(HexPtr[i] >= '0' && HexPtr[i] <= '9')
			num=HexPtr[i] - '0';
		else
		{
			if(HexPtr[i] >= 'A' && HexPtr[i] <= 'F')
				num = HexPtr[i] - 55;
		}
		sum = sum + mypow(16,count) * num;
		count++;
	}
	sprintf(temp,"%d ",sum);
	strcat(DecString,temp);
}

int main()
{
	char *HexPtr;
	char *str = NULL;

	cout << "Original Hex String = " << HexString << endl;

	if(str=strchr(HexString,'|'))
	{
		HexString[strlen(HexString) - strlen(str)] = '\0';
	}
	cout << "Hex String = " << HexString << endl;

	HexPtr = strtok(HexString,"' ''  '");

	while (HexPtr !=NULL)
	{
		hextodec(HexPtr);
		HexPtr = strtok (NULL,"' ''  '");
	}
	cout << "Dec String = " << DecString << endl;
	return 0;
}

