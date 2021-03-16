#include <string.h>
#include <stdio.h>

void build_index_url(const char *domain, char *index_url){
    char str1[100] = "http://www.";
    char str2[] = "/index.html";
    strcat(strcat(str1,domain),str2);
    strcpy(index_url, str1);
}

int main(void){
    char domain[] = "knking.com";
    char index_url[100];

    build_index_url(domain,index_url);
    printf("%s", index_url);

    return 0;
}