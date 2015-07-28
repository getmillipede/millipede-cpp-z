#include "millipede.h"

static int	pod[] = {11, 10,  9, 10, 11, 12, 13, 12};

Millipede::Millipede()
{ //Ctor
  size = 42;
}

Millipede::Millipede(int _size)
{ //Ctor param
  size = _size;
}

Millipede::Millipede(int _size, char *_str)
{ //Ctor param 2
  size = _size;
  ear.append(_str);
}

Millipede::~Millipede()
{ //Dtor
}

int	Millipede::get_Size()
{ //Size
  return (size);
}
  
int	Millipede::get_Zizi()
{ //Zizi
  return (ear.length());
}

void	Millipede::make_Head()
{ //Head
  std::cout << "    ╚⊙ ⊙╝" << std::endl; 
}

void	Millipede::make_Body()
{ //Body
  int	zook;
  int	love;
  std::string hipz = "Z_(###)_Z";
  
  for (zook = 0, love = 0; zook < size; zook++, love++)
    {
      if (this->get_Zizi() != 0 && love < this->get_Zizi())
	hipz.replace(4,1,1, ear[love]);
      else
	hipz.replace(4,1,1, '#');
      std::cout << std::setfill (' ') << std::setw (pod[zook % 8]) << hipz << std::endl;
    }
}

void	Millipede::make_Zook()
{ //Zook
  this->make_Head();
  this->make_Body();
}

int		main(int ac, char **av)
{
  if (ac == 3)
    {
      Millipede millipede(abs(atoi(av[1])), av[2]);
      if (millipede.get_Zizi() <= millipede.get_Size())
	millipede.make_Zook();
    }
  else  if (ac == 2)
    {
      Millipede millipede(abs(atoi(av[1])));
      millipede.make_Zook();
    }
  else
    {
      Millipede millipede;
      millipede.make_Zook();
    }
  return (0);
}
