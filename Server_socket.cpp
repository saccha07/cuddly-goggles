/*
Server_socket.cpp
Description: tcp server socket
Author:Sachindra
*/
char clinet_message[2000]
char buffer[1024]
pthread_mutex_t lock= PTHREAD_MUTEX_INITIALIZER

void *socketThread(void *arg) {
int newSocket = *((int*)arg);
recv(newSocket, client_message,2000,0);

//Send message to client socket
pthread_mutex_lock(&lock);
char *message = malloc(sizeof(client_message)+20);
strcpy(message, "Hello client");
strcat(message, client_message);
strcpy(buffer, message);
free(message);
pthread_mutex_unlock(&lock);
sleep(1);
send(newSocket, buffer,13,0);
printf("Exit Sockthread \n");
close(newSocket);
pthread_exit(NULL);
}

int main()
{
int serverSocket, newSocket;
struct sockaddr_in serverAddr;
struct sockaddr_storage serverStorage;
socklen_t addr_size;

serverSocket = socket(PF_INET, SOCK_STREAM, 0)
serverAddr.sin_family = AF_INET;
serverAddr.sin_port = htons(7799);
serverAddr.sin_addr.s_addr= inet_addr("127.0.0.1");
memset(serverAddr.sin_zero, '\0', sizeof(serverAddr.sin_zero);
bind(serverSocket, (struct sockaddr *) &serverAddr, sizeof(serverAddr));
if(listen(serverSocket,50)==0)
printf("Listining\n");
else
printf("error\n")
pthread_t tid[60];
int i=0;
while(1) {
addr_size = sizeof(serverStorage);
newSocket = accpet(serverSocket, (struct sockaddr*) &serverStorage, &addr_size);
if(pthread_create(&tid[i++], NULL, socketThread, &newSocket)!=0)
printf("Failed to create thread");

if (i>=50)
{
i=0;
while(i<50)
{
pthread_join(tid[i++], NULL);
}
}
i=0;
}
}
return 0;
}
