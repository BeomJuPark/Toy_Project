#include <stdio.h>
#include <sys/prctl.h>

#include <system_server.h>
#include <gui.h>
#include <input.h>
#include <web_server.h>

int input()
{
    printf("나 input 프로세스!\n");

    while (1) {
        sleep(1);
    }

    return 0;
}

int create_input()
{
    pid_t systemPid;
    const char *name = "input";

    printf("여기서 input 프로세스를 생성합니다.\n");

    /* fork 를 이용하세요 */
    systemPid = fork();
    switch(systemPid)
    {
      case -1:
        printf("Failed!!!\n");
        break;
      case 0:
          printf(" current Process id = %d :: parent pid = %d \n",systemPid, getppid());
          input();
          break;
      default:
            printf("parent id = %d \n", systemPid);
          break;
    }



    return 0;
}
