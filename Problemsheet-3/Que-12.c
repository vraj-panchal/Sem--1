#include<stdio.h>
int main()
{
    int num1 , len = 0 ,temp = 0 , flag = 1;

    //input of string size  
    printf("Enter size of string : ");
    scanf("%d",&num1);

    char str1[num1],str2[num1];
    
    //input of  string
    printf("Enter value in string in size : ");
    scanf(" %s",str1);

    //process
    //length
    for(int i = 0 ; str1[i] != 0 ; i++)
    {
        len++;
    }
    //copy string 1 to 2
    for(int i = 0 ; i < len ; i++)
    {
        str2[i] = str1[i];
    }
    //reverce first string
    for(int i = 0 , j = len-1 ; i < j ; i++,j--)
    {
        temp = str2[j];
        str2[j] = str2[i];
        str2[i] = temp;   
    }
    //main process of compare
    for(int i = 0 ; i < len ; i++)
    {
        if(str1[i] != str2[i]){
            flag = 0;
            break;
        }
    }
    //output
    if(flag == 1)
    {
        printf("palindrome word.");
    } else {
        printf("not palindrome word.");
    }

    return 0;
}