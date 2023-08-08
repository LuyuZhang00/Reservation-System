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

//��ʦ�˵�
void TeacherMenu(Identity*& teacher);

//ѧ���˵�
void studentMenu(Identity*& student);

//����Ա�˵�
void managerMenu(Identity*& manager);

//��¼����
void LoginIn(string fileName, int type);