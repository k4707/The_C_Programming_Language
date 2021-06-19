#include <stdio.h>

#define MAXLINE 1000

int getline(char s[], int lim);
void fix_line(char s[], int lim);


int main(){
    char line[MAXLINE];
    int len;

    while ((len = getline(line, MAXLINE)) > 0)
    {
        fix_line(line, len);
    }
    return 0;
}

int getline(char s[], int lim){
    
    int c, i;

    for (i=0; i < lim - 1 && ((c = getchar()) != EOF) && (c != '\n'); ++i){
		s[i] = c;
    }   

	if (c == '\n') {
		s[i] = c;
		++i;
	}

    if (i < lim - 2)
    {   
        s[i + 1] = '\0';
    }
	
    if (i == lim - 2)
	{
		s[i] = '\n';
		s[i + 1] = '\0';
	}
    
    return i;
}

void fix_line(char s[], int len){
    
    len = len - 2;
	if (len >= 0 && s[len] == '\n')
    {
		len--;
    }

	while (len >= 0 && (s[len] == ' ' || s[len] == '\t'))
    {   
		len--;
    }
    
	if (len >= 0) {

		s[len + 1] = '\n';
		s[len + 2] = '\0';
		printf("%s", s);
	}
}