// distance and ticket
#include <iostream>
#include<string.h>

using namespace std;

struct routeChart
{
    int sindex,eindex;
    float calculateTicket(const char* start,const char* end,const char* station,int* distance)
    {
        for(int i=0;i<8;i++)
        {
            if(strcasecmp(start,station[i])==0)
            {
                sindex=i;
                cout<<i;
            }
        }
    }
};
int main()
{
    routeChart c1;

    int dist[] = {120, 340, 650, 450, 560, 790, 880, 680};
    const char *station[] = {"s1", "s2", "s3", "s4", "s5", "s6", "s7", "s8"};
    int size = 8;
    float ticket;

    for (int i = 0; i < size; i++)
        {
            cout << "   " << dist[i] << "";
        }
        cout << "\n";
        for (int i = 0; i < size; i++)
        {
            cout << station[i] << "    ";
        }
        cout << " s1";

    const char* start, end;

    cout << "\nSelect Your station";
    cout << "\nStart = ";
    fflush(stdin);
    gets(start);
    cout << "\nEnd = ";
    fflush(stdin);
    gets(end);

    ticket = c1.calculateTicket(start,end,station,distance);
}