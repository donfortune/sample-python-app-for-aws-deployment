#include <stdio.h>
#include <unistd.h>

int main()
{
    int number = 17;
    pid_t process_id;

    process_id = getpid();

    printf("%d\n", number);
    printf("%u\n", process_id);
}
