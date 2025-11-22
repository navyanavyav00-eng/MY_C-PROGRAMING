#include <stdio.h>

enum week {
    Monday,//0
    Tuesday,  //1
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main() {
    enum week today = Wednesday;
    printf("%d", today);

    return 0;
}
