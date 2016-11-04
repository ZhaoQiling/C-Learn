#include "clock.h"
int main(int argc, char **argv)
{
    Clock naiyuan(0, 0, 3);
    cout << naiyuan;
    naiyuan.update(2);
    cout << naiyuan;
    
    Clock ha = Clock(0, 0, 3);
    cout << ha;
    ha = 3 * ha;
    cout << ha;
 //   (ha + naiyuan).show();
    
    return 0;
}
