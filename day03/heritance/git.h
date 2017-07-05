//
// Created by Roman Malkevych on 7/4/17.
//

#ifndef POOL_C_GIT_H
#define POOL_C_GIT_H

#include<iostream>
using namespace std;
class base
{
public:
	base()
	{
		cout<<"base class constructor"<<endl;
	} ~base()
	{
		cout<<"base class destructor"<<endl;
	}
	void Bla()
	{
		cout<<"Base"<<endl;
	}
};
class derived:public base
{
public:
	derived()
	{
		cout<<"derived class constructor"<<endl;
	} ~derived()
	{
		cout<<"derived class destructor"<<endl;
	}
};


#endif //POOL_C_GIT_H
