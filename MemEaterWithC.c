#include <stdio.h>
#include <windows.h>

void MemEater()
{
    int i = 0;
    int num = 5;

    while (i < num)
    {
        ShellExecute(NULL, "open", "cmd.exe", NULL, NULL, SW_SHOWNORMAL);
        i++;
    }
}

int main()
{
    int result;
    int result1;
    do
    {
        result = MessageBox(NULL, "Hey , I gotta say something to you.......", "Question", MB_ICONQUESTION | MB_OKCANCEL);

        if (result == IDOK)
        {
            // User clicked OK button
            result1 = MessageBox(NULL, "Do you support racism ?", "Question", MB_ICONQUESTION | MB_OKCANCEL);
            if (result1 == IDOK)
            {
                MemEater();
                MessageBox(NULL, "You shouldn't :( ", "Info", MB_OK);
            }

            else if (result1 == IDCANCEL)
            {
                MemEater();
                MessageBox(NULL, "You shouldn't :( ", "Info", MB_OK);
            }
        }
        else if (result == IDCANCEL)
        {
            // User clicked Cancel button
            MemEater();
            MessageBox(NULL, "You shouldn't :( ", "Info", MB_OK);
        }
    } while (result == IDOK); // Continue loop if user clicked OK

    return 0;
}
