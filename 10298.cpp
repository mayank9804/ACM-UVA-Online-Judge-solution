#include <stdio.h>
#include<string.h>
char s[1000000];

main(){
   int i,j,k,m,n;
   while (gets(s) && strcmp(s,".")) {
      m = n = strlen(s);
      for (i=2;i<=n;i++) {
	 while (n%i == 0) {
	    n /= i;
	    for (j=0;j<m-m/i && s[j] == s[j+m/i];j++);
	    if (j == m-m/i) m /= i;
	 }
      }
      printf("%d\n",strlen(s)/m);
   }
	return 0;

}


