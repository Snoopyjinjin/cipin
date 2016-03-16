#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

typedef struct word
{
 int count;
 char word[WORD_LEN];
}

struct Stack
{
 Word wd[1000];
 int count;

 void push(char* word)
 {
  for(int i=0;i<count;i++)
  {
   if(strcmp(wd[i].word,word)==0)
    return;
  }
  wd[count].word=word;
  wd[count].ref=1;
  count++;
 }
 void main()
{
 Stack st;
 st.count=0;
 fstream ("G:\\英文.txt","r");
 char* buf=(char*)malloc(10000);
 int len=fread(buf,1,10000,fa);
 char* word=buf;
 //全部转为小写
 for(int i=0;i<len;i++)
 {
  if(buf[i]>='A' && buf[i]<='Z')
   buf[i]+='a'-'A';
 }
 for(i=0;i<len;i++)
 {
  if(buf[i]<'a' || buf[i]>'z')
  {
   buf[i]='\0';
   st.push(word);
   while(buf[i]<'a' || buf[i]>'z')
    i++;
   word=&buf[i];
  }
 }
 in.close();
}


