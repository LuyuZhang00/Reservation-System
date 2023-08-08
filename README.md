# Reservation-System

## 1. Description
This is a reservation system for a computer lab. It allows users to reserve a computer for a certain time period. It also allows the admin to add and remove computers from the system. The admin can also view all the reservations for a certain computer.

User:

-- **Student:** Applying to use the computer room

-- **Teacher:** Review students' appointment applications

-- **Administrator:** Create accounts for students and teachers

## 2. Show
![1](imgs/1.png)
-----------------
![2](imgs/2.png)
-----------------
![3](imgs/3.png)
-----------------
![4](imgs/4.png)
-----------------

## 3. File Structure
```
Reservation-System
���� src
��  ���� main.cpp             // main function
��  ���� subMenu.cpp          // sub menu function
��  ���� manager.cpp
��  ���� student.cpp
��  ���� teacher.cpp
��  ���� orderFile.cpp
��
����include
|   |�� subMenu.h
��   ���� manager.h
��   ���� student.h
��   ���� teacher.h
��   ���� globalFile.h
��   ���� computerRoom.h
��   ���� Identity.h
��   ���� orderFile.h
��
���� README.md
���� imgs
```