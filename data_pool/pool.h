#ifndef _POOL_H_
#define _POOL_H_

#include <iostream>
#include <string>
#include <vector>
#include <semaphore.h>

class pool
{
public:
	pool(int);
	//从数据池中取出数据
	int get_data(std::string& out);
	//向数据池中放数据
	int put_data(const std::string& in);
	~pool();
private:
	pool(const pool&);
private:
	sem_t c_sem;//消费者
	sem_t p_sem;//生产者
	std::vector<std::string> data_pool;
	int c_step;
	int p_step;
	int cap;//环形队列容量
};

#endif
