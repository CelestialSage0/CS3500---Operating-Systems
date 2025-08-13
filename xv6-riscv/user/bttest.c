// user/bttest.c
#include "kernel/types.h"
#include "user/user.h"
int
main(int argc, char *argv[])
{
// Call sleep(1) so sys_sleep() runs in kernel and triggers
sleep(1);
printf("bttest: returned from sleep\n");
exit(0);
}
