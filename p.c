#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
	int pid, status;
	pid = fork();
	if (pid==0){
		int num =7;
		for (int i=1; i<=10; i++){
			printf("%d * %d = %d\n", num,i,num*i);
		}
	}
	else {
		wait(&status);
		printf("Parent Process Name is\n");
		printf("Habib Ahmad \n");
		printf("CNIC is\n");
		printf("36502-9177689-7\n");
	}
	return 0;
}
