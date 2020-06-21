#include <stdio.h>
#include <uchar.h>
#include <unistd.h>

void main()
{
    char to_add[100];
    int count;
    printf(u8"사용할 문자열을 입력해주세요: ");
    scanf("%[^\n]",to_add);
    printf(u8"개수를 입력해주세요: ");
    scanf("%d", &count);
    printf("\n");
    counting(count, to_add);
}

void counting(int count, char *stuff[])
{
    int i = count;
    while (i > 0)
        {
            printf(u8"%s가 %d개 남았습니다. 하나가 사라졌습니다.\n", stuff, i);
            i -= 1;
            sleep(1);
        }
    printf(u8"이제 %s가 없습니다. 리필합니다.\n", stuff);
    sleep(1);
    counting(count, stuff);
}
