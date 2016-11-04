#include "clock.h"
int main(int argc, char **argv)
{
    Clock naiyuan(0, 0, 3);
    naiyuan.show();
    naiyuan.update(2);
    naiyuan.show();
    
    Clock ha = Clock(0, 0, 3);
    ha.show();
    ha = 3 * ha;
    ha.show();
 //   (ha + naiyuan).show();
    
    return 0;
}
