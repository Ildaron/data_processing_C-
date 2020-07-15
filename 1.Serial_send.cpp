#include<windows.h>
#include<stdio.h>
int main()
{ 
  HANDLE hComm;

  hComm = CreateFile("\\\\.\\COM18",                //port name
                      GENERIC_READ | GENERIC_WRITE, //Read/Write
                      0,                            // No Sharing
                      NULL,                         // No Security
                      OPEN_EXISTING,// Open existing port only
                      0,            // Non Overlapped I/O
                      NULL);        // Null for Comm Devices

  if (hComm == INVALID_HANDLE_VALUE)//{
//	  int a=34;
     //std::cout << "Hello World!\n";
      printf("not connect\n");//}
  else//{
	  printf("connected\n");//}
    //  printf(“opening serial port successful”);
     //std::cout << "Hello World!\n";
  CloseHandle(hComm);//Closing the Serial Port

  return 0;
}
