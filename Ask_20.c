#include <stdio.h>

#define MAXLINE 1000
#define TAB 8

int getline(char s[], int lim);
void detab(char s[]);

int main(){
    int c;
    char lineIn[MAXLINE];
    char lineOut[MAXLINE];
    
    while ((c = getline(lineIn, MAXLINE)) > 0)
    {
        detab(lineIn);
    }
    
    return 0;
}

int getline(char s[],int lim)
{    
    int c, i;
    for (i=0; (c=getchar())!=EOF && c!='\n'; ++i){
		if (i < lim - 1)
        {
            s[i] = c;
        }
    }

	s[i] = '\0';
	
    return i;
}

void detab(char s[]){
    int i, k;
    int blanks;
    k = 0;
    for (i = 0; s[i] != '\0'; i++)
    {   
        if(s[i] == '\t'){
	        blanks = TAB - (k % TAB);
	        for(blanks; blanks > 0; blanks--)
            {
	            putchar(' ');
	            k++;
	        }
	    }else{
	        putchar(s[i]);
	        k++;
	    }
    }
    putchar('\n');
}
