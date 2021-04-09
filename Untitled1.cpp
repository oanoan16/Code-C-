#include <stdio.h>
int __cdecl main(int argc, const char **argv, const char **envp)
{
  int result; // eax
  int v4; // [rsp+20h] [rbp-120h]
  int v5; // [rsp+24h] [rbp-11Ch]
  int v6; // [rsp+28h] [rbp-118h]
  int v7; // [rsp+2Ch] [rbp-114h]
  char s[264]; // [rsp+30h] [rbp-110h]
  unsigned __int64 v9; // [rsp+138h] [rbp-8h]

  v9 = __readfsqword(0x28u);
  puts("Congratulations! You are the 1000th CTFer!!! Fill out this short survey to get FREE FLAGS!!!");
  puts("What number am I thinking of???");
  __isoc99_scanf("%d", &v7);
  if ( v7 == 31337 )
  {
    puts("What two numbers am I thinking of???");
    __isoc99_scanf("%d %d", &v6);
    if ( v5 + v6 == 1142 && v5 * v6 == 302937 )
    {
      puts("What animal am I thinking of???");
      __isoc99_scanf(" %256s", s);
      s[strcspn(s, "\n")] = 0;
      if ( !strcmp(s, "banana") )
      {
        puts("Wow!!! Now I can sell your information to the Russian government!!!");
        puts("Oh yeah, here's the FREE FLAG:");
        print_flag("Oh yeah, here's the FREE FLAG:", "banana");
        v4 = 0;
      }
      else
      {
        puts("Wrong >:((((");
        v4 = 1;
      }
    }
    else
    {
      puts("Wrong >:((((");
      v4 = 1;
    }
  }
  else
  {
    puts("Wrong >:((((");
    v4 = 1;
  }
  result = v4;
  if ( __readfsqword(0x28u) == v9 )
    result = v4;
  return result;
}
