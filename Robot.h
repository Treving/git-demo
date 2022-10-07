#include<string>
#include<iostream>
#include<time.h>
#ifndef ROBOT_H
#define ROBOT_H


class Buildings
{
public:
	Buildings(std::string kind, int HP);
	bool Survive();
	std::string _kind, building_name;
	int _Health;
};

class Robot
{
public:
	Robot(std::string kind, int HP, int power, double rate);
	void HitBuildings(Buildings & building_name);
	void HitRobot(Robot & robot_name);
	std::string _kind;
	int  _power, _Health;
	double _rate;
};
#endif