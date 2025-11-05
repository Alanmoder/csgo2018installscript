#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    const char* folderPath = "C:\\Games";

    DWORD attributes = GetFileAttributesA(folderPath);

    if (attributes == INVALID_FILE_ATTRIBUTES) {
        printf("C:\\Games does not exist, creating it.\n");
        system("mkdir C:\\Games");
    }
    else if (attributes & FILE_ATTRIBUTE_DIRECTORY) {
        printf("C:\\Games exists, skipping creating it.\n");
    }
    else {
        printf("C:\\Games exists but is not a folder. Please delete the file.\n");
        exit(0);
    }
    system("curl --output C:\\Games\\2018.zip https://files.hackvshack.net/2018.zip");
    system("powershell Expand-Archive -Path C:\\Games\\2018.zip -DestinationPath C:\\Games\\2018");
    system("curl --output %%USERPROFILE%%\\Desktop\\2018.exe ");
    printf("Succesfully installed CSGO 2018");
    getchar();
    return 0;
}