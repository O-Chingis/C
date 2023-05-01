

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>//for fork() func

int main(int argc, char* argv[]){

	pid_t newpid;
	newpid = fork();
	
	if(fork()==0){
		printf("[son] pid %d from [parent] %d\n", getpid(),getppid());
	}
	
}
