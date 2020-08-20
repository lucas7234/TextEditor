#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char filename[10000];
char language[100];
char allfilename[20000];
FILE * fptr;

main()
{
//파일생성
  printf("파일의 이름을 입력하세요.");
  gets(filename);
  printf("사용할 언어를 입력해주세요(C, C++, Python, Lua, HTML, Java, Javascript)");
  gets(language);
  allfilename="C:\\Users\\User\\Desktop\\";
  strcat(allfilename, filename);
  if (language=="C")
  {
    fptr=fopen(strcat(allfilename, ".c", "w"));
  }
  else if (language=="C++")
  {
    fptr=fopen(strcat(allfilename, ".cpp", "w"));
  }
  else if (language=="Python")
  {
    fptr=fopen(strcat(allfilename, ".py", "w"));
  }
  else if (language=="Lua")
  {
    fptr=fopen(strcat(allfilename, ".lua", "w"));
  }
  else if (language=="HTML")
  {
    fptr=fopen(strcat(allfilename, ".html", "w"));
  }
  else if (language=="Java")
  {
    fptr=fopen(strcat(allfilename, ".java", "w"));
  }
  else if (language=="Javascript")
  {
    fptr=fopen(strcat(allfilename, ".js", "w"));
  }
  else
  {exit(1);}
  
  //프로그램 작성
  printf("프로그램 작성을 종료하려면 \\0을 입력하세요");
  char text[10000];
  while (text!="\0")
  {
    puts('\n>');
    gets(text);
    fputs(text, fptr);
  }
  fclose(fptr);
  printf("저장이 완료되었습니다.");
  return 0;
}
