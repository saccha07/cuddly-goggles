/*
client_socket.cpp
Description: client socket creation
Author:Sachindra
*/

void *clientThread(void *arg)
{
printf("In thread\n");
char message[1000];
int clientSocket;
struct sockaddr_in serverAddr;
socklen_t addr_size;

clientSocket socket(PF_INET, SOCK_STREAM,0);
serverAddr.sin_family = AF_INET;
serverAddr.sip_port=htons(7799);
serverAddr.sin_addr.s_addr=inet_addr("localhost");
memset(serverAddr.sin_zeor, '\0', sizeof(serverAddr.sin_zero));
addr_size=sizeof(serverAddr);
connect(clientSocket, message,strlen(message,0)<0)
{
printf("send failed\n");
}
if(recv(clientSocket, buffer,1024,0)<0)
{
printf("received failed\n");
}
printf("Data received %s\n", buffer);
close(clientSocket);
pthread_exit(NULL);
}
int main()
{
int i=0;
pthread_t tid[51];
while(i<50) 
{
if(pthread_create(&tid[i], NULL, clientThread, NULL)!=0) {
printf("failed to create thread \n");
i++;
}
sleep(20);
i=0;
while(i<50)
{
pthread_join(tid[i++],NULL);
printf("%d:\n"i);
}
return 0;
}
