#include <stdio.h>
#include "ad.h"
#include "lib.h"

gType_obstacleDATA_st g_obstacle;
gType_obstacle_st g_obstacle11;
gType_obstacle_st data1 =
    {
        123,
        123,
        123,
        123,
        123,
        123};

Boolean data_copy(gType_obstacle_st f_ObstacleData_st)
{
    g_obstacle11 = f_ObstacleData_st;  
    printf("data_copy!\t");

}

void m_DATA_inti()
{

    g_obstacle.USS_obstacle_DATA[1] = data1;
    data_copy(data1);
    printf("m_DATA_inti!\t");
}

void prinum()
{
    gType_VehStandstill_en VehStands = VehStand_NoStandStill_enm;
    g_obstacle.USS_obstacle_DATA[1].Test_Obj1A_Pt1X = 125;
    int num = 234;
    printf("num = %d\n", num);
}
