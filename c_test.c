#include <stdio.h>
#include <uchar.h>
#include <unistd.h>

void main()
{
    char to_add[100];
    int count;
    printf(u8"����� ���ڿ��� �Է����ּ���: ");
    scanf("%[^\n]",to_add);
    printf(u8"������ �Է����ּ���: ");
    scanf("%d", &count);
    printf("\n");
    counting(count, to_add);
}

void counting(int count, char *stuff[])
{
    int i = count;
    while (i > 0)
        {
            printf(u8"%s�� %d�� ���ҽ��ϴ�. �ϳ��� ��������ϴ�.\n", stuff, i);
            i -= 1;
            sleep(1);
        }
    printf(u8"���� %s�� �����ϴ�. �����մϴ�.\n", stuff);
    sleep(1);
    counting(count, stuff);
}
