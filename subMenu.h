#pragma once
#include <iostream>
#include <fstream>
#include <string>

#include "globalFile.h"
#include "identity.h"
#include "student.h"
#include "teacher.h"
#include "manager.h"	

using namespace std;

//教师菜单
void TeacherMenu(Identity*& teacher);

//学生菜单
void studentMenu(Identity*& student);

//管理员菜单
void managerMenu(Identity*& manager);

//登录功能
void LoginIn(string fileName, int type);