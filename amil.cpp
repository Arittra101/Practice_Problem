
#include <stdio.h>
#include <string.h>

void solve()
{
    char dic[9][40] = {"Home", "House", "Field",
                       "Happy","Pleasure","Sad","Good","Well","Bad"
                      };
   // printf("%s",dic[0]);
    char a[5];

    printf("Enter a Word \n");
    scanf("%s",a);


    int temp=-1;
    for (int i = 0; i < 9; i+=3)
    {
        //printf("%s",dic[i]);

        if(!strcmp(a, dic[i]))
        {
            temp = i;
        }
    }

    if(temp==-1)
    {
         printf("Not Found ??\n");

        return;
    }
    else
    {

        char b[5];
        printf("Is it Synonym or Antonym ??\n");
        scanf("%s",b);

        if(!strcmp(b, "Synonym"))
        {
            printf("%s",dic[temp+1]);
        }
        else
        {
            printf("%s",dic[temp+2]);
        }
    }

}
int main()
{
    solve();
    return 0;
}


