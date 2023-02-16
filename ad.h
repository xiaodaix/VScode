
typedef enum
{
VehStand_NoStandStill_enm = 0, //车辆移动
VehStand_Stand_enm = 1, //车辆静止
VehStand_Invalid_enm =2, //无效的
VehStand_reserved_enm =3, //保留
}gType_VehStandstill_en;

typedef struct
{
  int Test_Obj1E_ExistProb;//障碍物1出现的概率值
  int Test_Obj1E_ID;//障碍物ID
  int Test_Obj1A_Pt1X;//障碍物的点1的X坐标
  int Test_Obj1A_Pt1Y;//障碍物的点1的Y坐标
  int Test_Obj1A_Pt2X;//障碍物的点2的X坐标
  int Test_Obj1A_Pt2Y;//障碍物的点2的Y坐标
} gType_obstacle_st;

typedef struct
{
  gType_obstacle_st USS_obstacle_DATA[12];
} gType_obstacleDATA_st;

extern void prinum();
extern void m_DATA_inti();
//extern Boolean g_FV_adiGetUss_ObstacleData_bl(gType_obstacle_st *f_ObstacleData_st);