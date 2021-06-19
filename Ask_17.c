#include <stdio.h>

#define MAXLINE 1000
#define DISPLAYED_LENGTH 80

int getline(char line[], int maxline);

int main(){
    int len; /* current line length */
    char line[MAXLINE]; /* current input line */
    
    while ((len = getline(line, MAXLINE)) > 0){
        if (len >= DISPLAYED_LENGTH)
        {
            printf(line);
        }
    }  

    return 0;
}

int getline(char s[],int lim)
{    
    int c, i;
    for (i=0; (c=getchar())!=EOF && c!='\n'; ++i){
		if (i < lim - 2)
        {
            s[i] = c;
        }
    }

    s[i] = '\n';
	s[i + 1] = '\0';
	
    return i;
}
