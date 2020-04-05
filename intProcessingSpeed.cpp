#include <iostream>

#include <windows.h>

using std::cout; using std::cin; using std::endl;

LARGE_INTEGER StartingTime, EndingTime, ElapsedMicroseconds;
LARGE_INTEGER Frequency;

void inline showElapsed(const char activity [])
{
    QueryPerformanceCounter(&EndingTime);
    ElapsedMicroseconds.QuadPart = EndingTime.QuadPart - StartingTime.QuadPart;
    ElapsedMicroseconds.QuadPart *= 1000000;
    ElapsedMicroseconds.QuadPart /= Frequency.QuadPart;
    cout << activity << " took: " << ElapsedMicroseconds.QuadPart << "us" << endl;
}

int main()
{
    cout << "Hallo!" << endl << endl;

    QueryPerformanceFrequency(&Frequency);

    const int32_t count = 1100100;
    char activity[200];

    //-----------------------------------------------------------------------------------------//
    sprintf(activity, "Initialise & Set %d 8 bit integers", count);
    QueryPerformanceCounter(&StartingTime);

    int8_t *data8 = new int8_t[count];
    for (int i = 0; i < count; i++)
    {
        data8[i] = i;
    }
    showElapsed(activity);

    sprintf(activity, "Add 5 to %d 8 bit integers", count);
    QueryPerformanceCounter(&StartingTime);

    for (int i = 0; i < count; i++)
    {
        data8[i] = i + 5;
    }
    showElapsed(activity);
    cout << endl;
    //-----------------------------------------------------------------------------------------//

    //-----------------------------------------------------------------------------------------//
    sprintf(activity, "Initialise & Set %d 16 bit integers", count);
    QueryPerformanceCounter(&StartingTime);

    int16_t *data16 = new int16_t[count];
    for (int i = 0; i < count; i++)
    {
        data16[i] = i;
    }
    showElapsed(activity);

    sprintf(activity, "Add 5 to %d 16 bit integers", count);
    QueryPerformanceCounter(&StartingTime);

    for (int i = 0; i < count; i++)
    {
        data16[i] = i + 5;
    }
    showElapsed(activity);
    cout << endl;
    //-----------------------------------------------------------------------------------------//

    //-----------------------------------------------------------------------------------------//    
    sprintf(activity, "Initialise & Set %d 32 bit integers", count);
    QueryPerformanceCounter(&StartingTime);

    int32_t *data32 = new int32_t[count];
    for (int i = 0; i < count; i++)
    {
        data32[i] = i;
    }
    showElapsed(activity);

    sprintf(activity, "Add 5 to %d 32 bit integers", count);
    QueryPerformanceCounter(&StartingTime);

    for (int i = 0; i < count; i++)
    {
        data32[i] = i + 5;
    }
    showElapsed(activity);
    cout << endl;
    //-----------------------------------------------------------------------------------------//

    //-----------------------------------------------------------------------------------------//
    sprintf(activity, "Initialise & Set %d 64 bit integers", count);
    QueryPerformanceCounter(&StartingTime);

    int64_t *data64 = new int64_t[count];
    for (int i = 0; i < count; i++)
    {
        data64[i] = i;
    }
    showElapsed(activity);

    sprintf(activity, "Add 5 to %d 64 bit integers", count);
    QueryPerformanceCounter(&StartingTime);

    for (int i = 0; i < count; i++)
    {
        data64[i] = i + 5;
    }
    showElapsed(activity);
    cout << endl;
    //-----------------------------------------------------------------------------------------//

    getchar();
}
