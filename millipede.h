#ifndef __MILLIPEDE_H__
#define __MILLIPEDE_H__

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

class		Millipede
{
  int		size;
  std::string	ear;

 public:
  Millipede();
  Millipede(int);
  Millipede(int, char *);
  ~Millipede();
  
  int		get_Size();
  int		get_Zizi();
  void		make_Head();
  void		make_Body();
  void		make_Zook();
};

#endif //__MILLIPEDE_H__
