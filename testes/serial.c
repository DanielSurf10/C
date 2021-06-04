#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int main() {
    HANDLE hSerial;
	char readBuffer[128], lerbuffer[128];
    DWORD bytesRead;
    char *ptr;
    unsigned int botoes;


	hSerial = CreateFile("COM6",GENERIC_READ | GENERIC_WRITE,0,NULL,OPEN_EXISTING,FILE_ATTRIBUTE_NORMAL,NULL);

	if (hSerial == INVALID_HANDLE_VALUE)
      printf("Error in opening serial port\n");
  	else
      printf("opening serial port successful\n");

    while (1) {

        ReadFile(hSerial, lerbuffer, sizeof(lerbuffer), &bytesRead, NULL);

        ptr = strtok(lerbuffer, "\n");
        botoes = (int)(*ptr);

        while (ptr != NULL) {
            botoes = (int)(*ptr);
            printf("%s\n", botoes);
            ptr = strtok(NULL, "\n");
        }

    }

    CloseHandle(hSerial);


    return 0;
}
