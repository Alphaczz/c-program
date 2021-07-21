#include<stdio.h>
int main()
{  int blank=0,digits=0,letters=0,others=0;
int c;
while ((c=getchar(Users>shiva>c program>switch statement>1st..c ))!=EOF)
{
    if (c==' ')
    ++blank;
    else if(c>='0'&&c<='9')
    ++digits;
    else if (c>='a'&&c<='z'||c>='A'&&c<='z')
    ++letters;
    else 
     ++others;    
}
printf("blanks=%d,digits=%d,letters=%d,others=%d",others,letters,digits,blank);
return 0;

}    
