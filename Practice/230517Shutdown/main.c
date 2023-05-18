#include <stdio.h>
#include <windows.h>

#define SHUTDOWN_TIME 3600

int Shutdown(void)
{
	system("shutdown -s -t 3600");
	return 0;
}

int CancelShutdown(void)
{
	system("shutdown -a");
	return 0;
}

int main(void)
{
	int num = 0;

	printf("0: Cancel Shutdown\n");
	printf("1: Shutdown after %dsec \n", SHUTDOWN_TIME);

	while(1)
	{
		scanf("%d", &num);

		if(num == 1)
		{
			Shutdown();
			printf("System will shutdown after %dsec.\n", SHUTDOWN_TIME);

		}
		else if(num == 0)
		{
			CancelShutdown();
			printf("Shutdown canceled.\n");
		}
	}

	return 0;
}
