#include <cstdio>
using namespace std;

int main() {
    char open = false, c;
    while (scanf("%c", &c) == 1)
        if (c == '\"')
            if ((open = ~open))
                printf("``");
            else
                printf("\'\'");
        else
            printf("%c", c);
    return 0;
}
