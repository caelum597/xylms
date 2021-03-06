// =====================================================================================
// 
//       Filename:  xylms.h
//
//    Description:  项目主头文件
//
//        Version:  1.0
//        Created:  2013年03月21日 14时16分21秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef XYLMS_H_
#define XYLMS_H_

#include <QString>

// 数据表项目位置的枚举定义
enum {
	stu_num 	= 0,
	stu_id          = 1,
	stu_name        = 2,
	stu_sex         = 3,
	stu_class       = 4,
	stu_birthday    = 5,
	stu_qq          = 6,
	stu_phone1      = 7,
	stu_phone2      = 8,
	stu_mail        = 9,
	stu_blog        = 10,
	stu_where_to_go = 11,
	stu_other_info  = 12,
	stu_level_1     = 13,
	stu_level_2     = 14,
	stu_level_3     = 15,
	stu_level_4     = 16,
	stu_level_5     = 17,
	stu_level_6     = 18,
	stu_level_7     = 19,
	stu_level_8     = 20,
	stu_level_9     = 21,
	stu_score       = 22,
	stu_is_pass     = 23,
	stu_curr_level  = 24,
	stu_remark      = 25
};

// 主窗口列表控件的枚举定义
enum {
	widget_new_join = 0,
	widget_grade    = 1,
	widget_manage   = 2,
	widget_set      = 3
};

// 系统设置的结构
struct SettingInfo
{
	QString userViewYears;		// 默认显示年份
	int 	userPower;		// 是否允许普通用户操作
	QString rootPasswd;		// 管理员密码
	QString rootWelcomeInfo;	// 管理员欢迎信息
};

// 全局的系统配置声明
extern SettingInfo settingInfo;

// 从数据库获取系统设置信息
bool getSystemSetInfo();

// 延时函数
void Sleep(unsigned int msec);

//  连接数据库
bool createConnect();

#endif // XYLMS_H_
