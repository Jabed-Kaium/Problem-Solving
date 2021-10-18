#include<stdio.h>
#include<string.h>
int main()
{
  char s[155];
  int t,i,j;

  scanf("%d", &t);
  while(t--){
      int sv=0,sj=0;
    scanf("%s", &s);
    int len=strlen(s);
    for(i=0; i<len; i++){
      if(s[i]=='S' && s[i+1]=='U' && s[i+2]=='V' && s[i+3]=='O' && s[i+4]=='J' && s[i+5]=='I' && s[i+6]=='T'){
        sj++;
        i+=6;
      }
      if(s[i]=='S' && s[i+1]=='U' && s[i+2]=='V' && s[i+3]=='O'){
        sv++;
        i+=3;
      }

    }
    printf("SUVO = %d, SUVOJIT = %d\n", sv,sj);
  }

  return 0;
}
