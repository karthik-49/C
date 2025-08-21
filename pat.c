#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]) {
    char note[100] = "Hello this is world of C.";
    char *keyword = argv[1];

    int find(char *note, char *keyword) {
        int i, keyword_len, match=0;
        keyword_len = strlen(keyword);

        for(i=0; i<strlen(note); i++)
        {
            if(note[i]==keyword[match])
                match++;
            else {
                if(note[i] == keyword[0])
                    match = 1;
                else
                    match = 0;
            }
            if(keyword_len == match)
                return i;
        }
        return 0;
    }

    int k = find(note,keyword);
    if(k==0)
        printf("Failed. \n");
    else
        printf("Pattern matched from %d to %d.\n",(k+2)-strlen(keyword),k+1);
}