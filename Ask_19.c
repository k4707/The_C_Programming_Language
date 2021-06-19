#include <stdio.h>

#define MAXLINE 1000

int getline(char s[], int lim);
void reverse(char s[], int len);

int main(){
    char line[MAXLINE];
    int len;

    while ((len = getline(line, MAXLINE)) > 0)
    {
        reverse(line, len);
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
        s[i] = '\0';
    }
	
    if (i == lim - 2)
	{
		s[i] = '\n';
		s[i + 1] = '\0';
	}
    
    return i;
}

void reverse(char s[], int len){

    int i, j;
    char revS[len];
    j = 0;
    for (i = len - 2; i >= 0; i--)
    {
        revS[j] = s[i];
        j++;
    }

    revS[j] = '\n';
    revS[j + 1] = '\0';
    printf("%s", revS);
}
