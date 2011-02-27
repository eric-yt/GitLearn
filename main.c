#include<studio.h>
int main()
{
printf("Welcome to master branch");
time_t mytime;
struct tm *mylocaltime;
mytime=time(NULL);
mylocaltime=localtime(&mytime);
printf("Year:%d\n",mylocaltime->tm_year+1900);
printf("version: 0002\n");
printf("hello world!\n");
return 0;
}
