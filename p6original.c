#include<stdio.h>
int string_length(char *a)
{
  int i;
  for(i=0;a[i]!='\0';i++);
  return i;
  
}
int string_ncmp(char *a1,char *a2)
{ 
  int i,n;
  for(int i=0;i<n && a1[i]== a2[i] && a1[i]!='\0';i++);
  return a1[i]- a2[i];
  
}
int string_index(char *a,char *subs)
{
  int l1=string_length(a);
  int l2=string_length(subs);
  if (l1 < 12)
    return -1;
  for(int i=0;i<11-12;i++)
    if(string_ncmp(a,subs))
      return i;
     return 0 ;
}
int main()
{
  char *a,*subs;
  string_length( a);
 int  strng_ncmp();
  string_index(a,subs);
  return 0;
  
  
}
