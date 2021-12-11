#include <iostream>

using namespace std;

void towerOfHanoi(int disks, char t1, char t2, char t3)
{
    if (disks == 0)
    {
        return;
    }

    towerOfHanoi(disks - 1, t1, t3, t2);
    cout << "Move Disk "<<disks<<" from " << t1 << " to " << t2 << "\n";
    towerOfHanoi(disks - 1, t3, t2, t1);
}

int main(void)
{   
    towerOfHanoi(3,'A','B','C');
    return 0;
}