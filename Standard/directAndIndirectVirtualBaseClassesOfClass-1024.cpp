#include <iostream>

static int ctr = 0;
class BaseL1L2L3L4L5L6L7L8L9
{
public: 
	BaseL1L2L3L4L5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5L6L7L8R9
{
public: 
	BaseL1L2L3L4L5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5L6L7L8 : public  virtual BaseL1L2L3L4L5L6L7L8L9, public virtual BaseL1L2L3L4L5L6L7L8R9
{
public: 
	BaseL1L2L3L4L5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5L6L7R8L9
{
public: 
	BaseL1L2L3L4L5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5L6L7R8R9
{
public: 
	BaseL1L2L3L4L5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5L6L7R8 : public  virtual BaseL1L2L3L4L5L6L7R8L9, public virtual BaseL1L2L3L4L5L6L7R8R9
{
public: 
	BaseL1L2L3L4L5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5L6L7 : public  virtual BaseL1L2L3L4L5L6L7L8, public virtual BaseL1L2L3L4L5L6L7R8
{
public: 
	BaseL1L2L3L4L5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5L6R7L8L9
{
public: 
	BaseL1L2L3L4L5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5L6R7L8R9
{
public: 
	BaseL1L2L3L4L5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5L6R7L8 : public  virtual BaseL1L2L3L4L5L6R7L8L9, public virtual BaseL1L2L3L4L5L6R7L8R9
{
public: 
	BaseL1L2L3L4L5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5L6R7R8L9
{
public: 
	BaseL1L2L3L4L5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5L6R7R8R9
{
public: 
	BaseL1L2L3L4L5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5L6R7R8 : public  virtual BaseL1L2L3L4L5L6R7R8L9, public virtual BaseL1L2L3L4L5L6R7R8R9
{
public: 
	BaseL1L2L3L4L5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5L6R7 : public  virtual BaseL1L2L3L4L5L6R7L8, public virtual BaseL1L2L3L4L5L6R7R8
{
public: 
	BaseL1L2L3L4L5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5L6 : public  virtual BaseL1L2L3L4L5L6L7, public virtual BaseL1L2L3L4L5L6R7
{
public: 
	BaseL1L2L3L4L5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5R6L7L8L9
{
public: 
	BaseL1L2L3L4L5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5R6L7L8R9
{
public: 
	BaseL1L2L3L4L5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5R6L7L8 : public  virtual BaseL1L2L3L4L5R6L7L8L9, public virtual BaseL1L2L3L4L5R6L7L8R9
{
public: 
	BaseL1L2L3L4L5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5R6L7R8L9
{
public: 
	BaseL1L2L3L4L5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5R6L7R8R9
{
public: 
	BaseL1L2L3L4L5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5R6L7R8 : public  virtual BaseL1L2L3L4L5R6L7R8L9, public virtual BaseL1L2L3L4L5R6L7R8R9
{
public: 
	BaseL1L2L3L4L5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5R6L7 : public  virtual BaseL1L2L3L4L5R6L7L8, public virtual BaseL1L2L3L4L5R6L7R8
{
public: 
	BaseL1L2L3L4L5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5R6R7L8L9
{
public: 
	BaseL1L2L3L4L5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5R6R7L8R9
{
public: 
	BaseL1L2L3L4L5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5R6R7L8 : public  virtual BaseL1L2L3L4L5R6R7L8L9, public virtual BaseL1L2L3L4L5R6R7L8R9
{
public: 
	BaseL1L2L3L4L5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5R6R7R8L9
{
public: 
	BaseL1L2L3L4L5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5R6R7R8R9
{
public: 
	BaseL1L2L3L4L5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5R6R7R8 : public  virtual BaseL1L2L3L4L5R6R7R8L9, public virtual BaseL1L2L3L4L5R6R7R8R9
{
public: 
	BaseL1L2L3L4L5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5R6R7 : public  virtual BaseL1L2L3L4L5R6R7L8, public virtual BaseL1L2L3L4L5R6R7R8
{
public: 
	BaseL1L2L3L4L5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5R6 : public  virtual BaseL1L2L3L4L5R6L7, public virtual BaseL1L2L3L4L5R6R7
{
public: 
	BaseL1L2L3L4L5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4L5 : public  virtual BaseL1L2L3L4L5L6, public virtual BaseL1L2L3L4L5R6
{
public: 
	BaseL1L2L3L4L5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5L6L7L8L9
{
public: 
	BaseL1L2L3L4R5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5L6L7L8R9
{
public: 
	BaseL1L2L3L4R5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5L6L7L8 : public  virtual BaseL1L2L3L4R5L6L7L8L9, public virtual BaseL1L2L3L4R5L6L7L8R9
{
public: 
	BaseL1L2L3L4R5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5L6L7R8L9
{
public: 
	BaseL1L2L3L4R5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5L6L7R8R9
{
public: 
	BaseL1L2L3L4R5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5L6L7R8 : public  virtual BaseL1L2L3L4R5L6L7R8L9, public virtual BaseL1L2L3L4R5L6L7R8R9
{
public: 
	BaseL1L2L3L4R5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5L6L7 : public  virtual BaseL1L2L3L4R5L6L7L8, public virtual BaseL1L2L3L4R5L6L7R8
{
public: 
	BaseL1L2L3L4R5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5L6R7L8L9
{
public: 
	BaseL1L2L3L4R5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5L6R7L8R9
{
public: 
	BaseL1L2L3L4R5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5L6R7L8 : public  virtual BaseL1L2L3L4R5L6R7L8L9, public virtual BaseL1L2L3L4R5L6R7L8R9
{
public: 
	BaseL1L2L3L4R5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5L6R7R8L9
{
public: 
	BaseL1L2L3L4R5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5L6R7R8R9
{
public: 
	BaseL1L2L3L4R5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5L6R7R8 : public  virtual BaseL1L2L3L4R5L6R7R8L9, public virtual BaseL1L2L3L4R5L6R7R8R9
{
public: 
	BaseL1L2L3L4R5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5L6R7 : public  virtual BaseL1L2L3L4R5L6R7L8, public virtual BaseL1L2L3L4R5L6R7R8
{
public: 
	BaseL1L2L3L4R5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5L6 : public  virtual BaseL1L2L3L4R5L6L7, public virtual BaseL1L2L3L4R5L6R7
{
public: 
	BaseL1L2L3L4R5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5R6L7L8L9
{
public: 
	BaseL1L2L3L4R5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5R6L7L8R9
{
public: 
	BaseL1L2L3L4R5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5R6L7L8 : public  virtual BaseL1L2L3L4R5R6L7L8L9, public virtual BaseL1L2L3L4R5R6L7L8R9
{
public: 
	BaseL1L2L3L4R5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5R6L7R8L9
{
public: 
	BaseL1L2L3L4R5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5R6L7R8R9
{
public: 
	BaseL1L2L3L4R5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5R6L7R8 : public  virtual BaseL1L2L3L4R5R6L7R8L9, public virtual BaseL1L2L3L4R5R6L7R8R9
{
public: 
	BaseL1L2L3L4R5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5R6L7 : public  virtual BaseL1L2L3L4R5R6L7L8, public virtual BaseL1L2L3L4R5R6L7R8
{
public: 
	BaseL1L2L3L4R5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5R6R7L8L9
{
public: 
	BaseL1L2L3L4R5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5R6R7L8R9
{
public: 
	BaseL1L2L3L4R5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5R6R7L8 : public  virtual BaseL1L2L3L4R5R6R7L8L9, public virtual BaseL1L2L3L4R5R6R7L8R9
{
public: 
	BaseL1L2L3L4R5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5R6R7R8L9
{
public: 
	BaseL1L2L3L4R5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5R6R7R8R9
{
public: 
	BaseL1L2L3L4R5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5R6R7R8 : public  virtual BaseL1L2L3L4R5R6R7R8L9, public virtual BaseL1L2L3L4R5R6R7R8R9
{
public: 
	BaseL1L2L3L4R5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5R6R7 : public  virtual BaseL1L2L3L4R5R6R7L8, public virtual BaseL1L2L3L4R5R6R7R8
{
public: 
	BaseL1L2L3L4R5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5R6 : public  virtual BaseL1L2L3L4R5R6L7, public virtual BaseL1L2L3L4R5R6R7
{
public: 
	BaseL1L2L3L4R5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4R5 : public  virtual BaseL1L2L3L4R5L6, public virtual BaseL1L2L3L4R5R6
{
public: 
	BaseL1L2L3L4R5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3L4 : public  virtual BaseL1L2L3L4L5, public virtual BaseL1L2L3L4R5
{
public: 
	BaseL1L2L3L4() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5L6L7L8L9
{
public: 
	BaseL1L2L3R4L5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5L6L7L8R9
{
public: 
	BaseL1L2L3R4L5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5L6L7L8 : public  virtual BaseL1L2L3R4L5L6L7L8L9, public virtual BaseL1L2L3R4L5L6L7L8R9
{
public: 
	BaseL1L2L3R4L5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5L6L7R8L9
{
public: 
	BaseL1L2L3R4L5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5L6L7R8R9
{
public: 
	BaseL1L2L3R4L5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5L6L7R8 : public  virtual BaseL1L2L3R4L5L6L7R8L9, public virtual BaseL1L2L3R4L5L6L7R8R9
{
public: 
	BaseL1L2L3R4L5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5L6L7 : public  virtual BaseL1L2L3R4L5L6L7L8, public virtual BaseL1L2L3R4L5L6L7R8
{
public: 
	BaseL1L2L3R4L5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5L6R7L8L9
{
public: 
	BaseL1L2L3R4L5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5L6R7L8R9
{
public: 
	BaseL1L2L3R4L5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5L6R7L8 : public  virtual BaseL1L2L3R4L5L6R7L8L9, public virtual BaseL1L2L3R4L5L6R7L8R9
{
public: 
	BaseL1L2L3R4L5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5L6R7R8L9
{
public: 
	BaseL1L2L3R4L5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5L6R7R8R9
{
public: 
	BaseL1L2L3R4L5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5L6R7R8 : public  virtual BaseL1L2L3R4L5L6R7R8L9, public virtual BaseL1L2L3R4L5L6R7R8R9
{
public: 
	BaseL1L2L3R4L5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5L6R7 : public  virtual BaseL1L2L3R4L5L6R7L8, public virtual BaseL1L2L3R4L5L6R7R8
{
public: 
	BaseL1L2L3R4L5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5L6 : public  virtual BaseL1L2L3R4L5L6L7, public virtual BaseL1L2L3R4L5L6R7
{
public: 
	BaseL1L2L3R4L5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5R6L7L8L9
{
public: 
	BaseL1L2L3R4L5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5R6L7L8R9
{
public: 
	BaseL1L2L3R4L5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5R6L7L8 : public  virtual BaseL1L2L3R4L5R6L7L8L9, public virtual BaseL1L2L3R4L5R6L7L8R9
{
public: 
	BaseL1L2L3R4L5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5R6L7R8L9
{
public: 
	BaseL1L2L3R4L5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5R6L7R8R9
{
public: 
	BaseL1L2L3R4L5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5R6L7R8 : public  virtual BaseL1L2L3R4L5R6L7R8L9, public virtual BaseL1L2L3R4L5R6L7R8R9
{
public: 
	BaseL1L2L3R4L5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5R6L7 : public  virtual BaseL1L2L3R4L5R6L7L8, public virtual BaseL1L2L3R4L5R6L7R8
{
public: 
	BaseL1L2L3R4L5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5R6R7L8L9
{
public: 
	BaseL1L2L3R4L5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5R6R7L8R9
{
public: 
	BaseL1L2L3R4L5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5R6R7L8 : public  virtual BaseL1L2L3R4L5R6R7L8L9, public virtual BaseL1L2L3R4L5R6R7L8R9
{
public: 
	BaseL1L2L3R4L5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5R6R7R8L9
{
public: 
	BaseL1L2L3R4L5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5R6R7R8R9
{
public: 
	BaseL1L2L3R4L5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5R6R7R8 : public  virtual BaseL1L2L3R4L5R6R7R8L9, public virtual BaseL1L2L3R4L5R6R7R8R9
{
public: 
	BaseL1L2L3R4L5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5R6R7 : public  virtual BaseL1L2L3R4L5R6R7L8, public virtual BaseL1L2L3R4L5R6R7R8
{
public: 
	BaseL1L2L3R4L5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5R6 : public  virtual BaseL1L2L3R4L5R6L7, public virtual BaseL1L2L3R4L5R6R7
{
public: 
	BaseL1L2L3R4L5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4L5 : public  virtual BaseL1L2L3R4L5L6, public virtual BaseL1L2L3R4L5R6
{
public: 
	BaseL1L2L3R4L5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5L6L7L8L9
{
public: 
	BaseL1L2L3R4R5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5L6L7L8R9
{
public: 
	BaseL1L2L3R4R5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5L6L7L8 : public  virtual BaseL1L2L3R4R5L6L7L8L9, public virtual BaseL1L2L3R4R5L6L7L8R9
{
public: 
	BaseL1L2L3R4R5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5L6L7R8L9
{
public: 
	BaseL1L2L3R4R5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5L6L7R8R9
{
public: 
	BaseL1L2L3R4R5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5L6L7R8 : public  virtual BaseL1L2L3R4R5L6L7R8L9, public virtual BaseL1L2L3R4R5L6L7R8R9
{
public: 
	BaseL1L2L3R4R5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5L6L7 : public  virtual BaseL1L2L3R4R5L6L7L8, public virtual BaseL1L2L3R4R5L6L7R8
{
public: 
	BaseL1L2L3R4R5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5L6R7L8L9
{
public: 
	BaseL1L2L3R4R5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5L6R7L8R9
{
public: 
	BaseL1L2L3R4R5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5L6R7L8 : public  virtual BaseL1L2L3R4R5L6R7L8L9, public virtual BaseL1L2L3R4R5L6R7L8R9
{
public: 
	BaseL1L2L3R4R5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5L6R7R8L9
{
public: 
	BaseL1L2L3R4R5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5L6R7R8R9
{
public: 
	BaseL1L2L3R4R5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5L6R7R8 : public  virtual BaseL1L2L3R4R5L6R7R8L9, public virtual BaseL1L2L3R4R5L6R7R8R9
{
public: 
	BaseL1L2L3R4R5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5L6R7 : public  virtual BaseL1L2L3R4R5L6R7L8, public virtual BaseL1L2L3R4R5L6R7R8
{
public: 
	BaseL1L2L3R4R5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5L6 : public  virtual BaseL1L2L3R4R5L6L7, public virtual BaseL1L2L3R4R5L6R7
{
public: 
	BaseL1L2L3R4R5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5R6L7L8L9
{
public: 
	BaseL1L2L3R4R5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5R6L7L8R9
{
public: 
	BaseL1L2L3R4R5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5R6L7L8 : public  virtual BaseL1L2L3R4R5R6L7L8L9, public virtual BaseL1L2L3R4R5R6L7L8R9
{
public: 
	BaseL1L2L3R4R5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5R6L7R8L9
{
public: 
	BaseL1L2L3R4R5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5R6L7R8R9
{
public: 
	BaseL1L2L3R4R5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5R6L7R8 : public  virtual BaseL1L2L3R4R5R6L7R8L9, public virtual BaseL1L2L3R4R5R6L7R8R9
{
public: 
	BaseL1L2L3R4R5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5R6L7 : public  virtual BaseL1L2L3R4R5R6L7L8, public virtual BaseL1L2L3R4R5R6L7R8
{
public: 
	BaseL1L2L3R4R5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5R6R7L8L9
{
public: 
	BaseL1L2L3R4R5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5R6R7L8R9
{
public: 
	BaseL1L2L3R4R5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5R6R7L8 : public  virtual BaseL1L2L3R4R5R6R7L8L9, public virtual BaseL1L2L3R4R5R6R7L8R9
{
public: 
	BaseL1L2L3R4R5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5R6R7R8L9
{
public: 
	BaseL1L2L3R4R5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5R6R7R8R9
{
public: 
	BaseL1L2L3R4R5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5R6R7R8 : public  virtual BaseL1L2L3R4R5R6R7R8L9, public virtual BaseL1L2L3R4R5R6R7R8R9
{
public: 
	BaseL1L2L3R4R5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5R6R7 : public  virtual BaseL1L2L3R4R5R6R7L8, public virtual BaseL1L2L3R4R5R6R7R8
{
public: 
	BaseL1L2L3R4R5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5R6 : public  virtual BaseL1L2L3R4R5R6L7, public virtual BaseL1L2L3R4R5R6R7
{
public: 
	BaseL1L2L3R4R5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4R5 : public  virtual BaseL1L2L3R4R5L6, public virtual BaseL1L2L3R4R5R6
{
public: 
	BaseL1L2L3R4R5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3R4 : public  virtual BaseL1L2L3R4L5, public virtual BaseL1L2L3R4R5
{
public: 
	BaseL1L2L3R4() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2L3 : public  virtual BaseL1L2L3L4, public virtual BaseL1L2L3R4
{
public: 
	BaseL1L2L3() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5L6L7L8L9
{
public: 
	BaseL1L2R3L4L5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5L6L7L8R9
{
public: 
	BaseL1L2R3L4L5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5L6L7L8 : public  virtual BaseL1L2R3L4L5L6L7L8L9, public virtual BaseL1L2R3L4L5L6L7L8R9
{
public: 
	BaseL1L2R3L4L5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5L6L7R8L9
{
public: 
	BaseL1L2R3L4L5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5L6L7R8R9
{
public: 
	BaseL1L2R3L4L5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5L6L7R8 : public  virtual BaseL1L2R3L4L5L6L7R8L9, public virtual BaseL1L2R3L4L5L6L7R8R9
{
public: 
	BaseL1L2R3L4L5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5L6L7 : public  virtual BaseL1L2R3L4L5L6L7L8, public virtual BaseL1L2R3L4L5L6L7R8
{
public: 
	BaseL1L2R3L4L5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5L6R7L8L9
{
public: 
	BaseL1L2R3L4L5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5L6R7L8R9
{
public: 
	BaseL1L2R3L4L5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5L6R7L8 : public  virtual BaseL1L2R3L4L5L6R7L8L9, public virtual BaseL1L2R3L4L5L6R7L8R9
{
public: 
	BaseL1L2R3L4L5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5L6R7R8L9
{
public: 
	BaseL1L2R3L4L5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5L6R7R8R9
{
public: 
	BaseL1L2R3L4L5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5L6R7R8 : public  virtual BaseL1L2R3L4L5L6R7R8L9, public virtual BaseL1L2R3L4L5L6R7R8R9
{
public: 
	BaseL1L2R3L4L5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5L6R7 : public  virtual BaseL1L2R3L4L5L6R7L8, public virtual BaseL1L2R3L4L5L6R7R8
{
public: 
	BaseL1L2R3L4L5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5L6 : public  virtual BaseL1L2R3L4L5L6L7, public virtual BaseL1L2R3L4L5L6R7
{
public: 
	BaseL1L2R3L4L5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5R6L7L8L9
{
public: 
	BaseL1L2R3L4L5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5R6L7L8R9
{
public: 
	BaseL1L2R3L4L5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5R6L7L8 : public  virtual BaseL1L2R3L4L5R6L7L8L9, public virtual BaseL1L2R3L4L5R6L7L8R9
{
public: 
	BaseL1L2R3L4L5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5R6L7R8L9
{
public: 
	BaseL1L2R3L4L5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5R6L7R8R9
{
public: 
	BaseL1L2R3L4L5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5R6L7R8 : public  virtual BaseL1L2R3L4L5R6L7R8L9, public virtual BaseL1L2R3L4L5R6L7R8R9
{
public: 
	BaseL1L2R3L4L5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5R6L7 : public  virtual BaseL1L2R3L4L5R6L7L8, public virtual BaseL1L2R3L4L5R6L7R8
{
public: 
	BaseL1L2R3L4L5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5R6R7L8L9
{
public: 
	BaseL1L2R3L4L5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5R6R7L8R9
{
public: 
	BaseL1L2R3L4L5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5R6R7L8 : public  virtual BaseL1L2R3L4L5R6R7L8L9, public virtual BaseL1L2R3L4L5R6R7L8R9
{
public: 
	BaseL1L2R3L4L5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5R6R7R8L9
{
public: 
	BaseL1L2R3L4L5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5R6R7R8R9
{
public: 
	BaseL1L2R3L4L5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5R6R7R8 : public  virtual BaseL1L2R3L4L5R6R7R8L9, public virtual BaseL1L2R3L4L5R6R7R8R9
{
public: 
	BaseL1L2R3L4L5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5R6R7 : public  virtual BaseL1L2R3L4L5R6R7L8, public virtual BaseL1L2R3L4L5R6R7R8
{
public: 
	BaseL1L2R3L4L5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5R6 : public  virtual BaseL1L2R3L4L5R6L7, public virtual BaseL1L2R3L4L5R6R7
{
public: 
	BaseL1L2R3L4L5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4L5 : public  virtual BaseL1L2R3L4L5L6, public virtual BaseL1L2R3L4L5R6
{
public: 
	BaseL1L2R3L4L5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5L6L7L8L9
{
public: 
	BaseL1L2R3L4R5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5L6L7L8R9
{
public: 
	BaseL1L2R3L4R5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5L6L7L8 : public  virtual BaseL1L2R3L4R5L6L7L8L9, public virtual BaseL1L2R3L4R5L6L7L8R9
{
public: 
	BaseL1L2R3L4R5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5L6L7R8L9
{
public: 
	BaseL1L2R3L4R5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5L6L7R8R9
{
public: 
	BaseL1L2R3L4R5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5L6L7R8 : public  virtual BaseL1L2R3L4R5L6L7R8L9, public virtual BaseL1L2R3L4R5L6L7R8R9
{
public: 
	BaseL1L2R3L4R5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5L6L7 : public  virtual BaseL1L2R3L4R5L6L7L8, public virtual BaseL1L2R3L4R5L6L7R8
{
public: 
	BaseL1L2R3L4R5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5L6R7L8L9
{
public: 
	BaseL1L2R3L4R5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5L6R7L8R9
{
public: 
	BaseL1L2R3L4R5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5L6R7L8 : public  virtual BaseL1L2R3L4R5L6R7L8L9, public virtual BaseL1L2R3L4R5L6R7L8R9
{
public: 
	BaseL1L2R3L4R5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5L6R7R8L9
{
public: 
	BaseL1L2R3L4R5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5L6R7R8R9
{
public: 
	BaseL1L2R3L4R5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5L6R7R8 : public  virtual BaseL1L2R3L4R5L6R7R8L9, public virtual BaseL1L2R3L4R5L6R7R8R9
{
public: 
	BaseL1L2R3L4R5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5L6R7 : public  virtual BaseL1L2R3L4R5L6R7L8, public virtual BaseL1L2R3L4R5L6R7R8
{
public: 
	BaseL1L2R3L4R5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5L6 : public  virtual BaseL1L2R3L4R5L6L7, public virtual BaseL1L2R3L4R5L6R7
{
public: 
	BaseL1L2R3L4R5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5R6L7L8L9
{
public: 
	BaseL1L2R3L4R5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5R6L7L8R9
{
public: 
	BaseL1L2R3L4R5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5R6L7L8 : public  virtual BaseL1L2R3L4R5R6L7L8L9, public virtual BaseL1L2R3L4R5R6L7L8R9
{
public: 
	BaseL1L2R3L4R5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5R6L7R8L9
{
public: 
	BaseL1L2R3L4R5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5R6L7R8R9
{
public: 
	BaseL1L2R3L4R5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5R6L7R8 : public  virtual BaseL1L2R3L4R5R6L7R8L9, public virtual BaseL1L2R3L4R5R6L7R8R9
{
public: 
	BaseL1L2R3L4R5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5R6L7 : public  virtual BaseL1L2R3L4R5R6L7L8, public virtual BaseL1L2R3L4R5R6L7R8
{
public: 
	BaseL1L2R3L4R5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5R6R7L8L9
{
public: 
	BaseL1L2R3L4R5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5R6R7L8R9
{
public: 
	BaseL1L2R3L4R5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5R6R7L8 : public  virtual BaseL1L2R3L4R5R6R7L8L9, public virtual BaseL1L2R3L4R5R6R7L8R9
{
public: 
	BaseL1L2R3L4R5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5R6R7R8L9
{
public: 
	BaseL1L2R3L4R5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5R6R7R8R9
{
public: 
	BaseL1L2R3L4R5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5R6R7R8 : public  virtual BaseL1L2R3L4R5R6R7R8L9, public virtual BaseL1L2R3L4R5R6R7R8R9
{
public: 
	BaseL1L2R3L4R5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5R6R7 : public  virtual BaseL1L2R3L4R5R6R7L8, public virtual BaseL1L2R3L4R5R6R7R8
{
public: 
	BaseL1L2R3L4R5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5R6 : public  virtual BaseL1L2R3L4R5R6L7, public virtual BaseL1L2R3L4R5R6R7
{
public: 
	BaseL1L2R3L4R5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4R5 : public  virtual BaseL1L2R3L4R5L6, public virtual BaseL1L2R3L4R5R6
{
public: 
	BaseL1L2R3L4R5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3L4 : public  virtual BaseL1L2R3L4L5, public virtual BaseL1L2R3L4R5
{
public: 
	BaseL1L2R3L4() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5L6L7L8L9
{
public: 
	BaseL1L2R3R4L5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5L6L7L8R9
{
public: 
	BaseL1L2R3R4L5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5L6L7L8 : public  virtual BaseL1L2R3R4L5L6L7L8L9, public virtual BaseL1L2R3R4L5L6L7L8R9
{
public: 
	BaseL1L2R3R4L5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5L6L7R8L9
{
public: 
	BaseL1L2R3R4L5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5L6L7R8R9
{
public: 
	BaseL1L2R3R4L5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5L6L7R8 : public  virtual BaseL1L2R3R4L5L6L7R8L9, public virtual BaseL1L2R3R4L5L6L7R8R9
{
public: 
	BaseL1L2R3R4L5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5L6L7 : public  virtual BaseL1L2R3R4L5L6L7L8, public virtual BaseL1L2R3R4L5L6L7R8
{
public: 
	BaseL1L2R3R4L5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5L6R7L8L9
{
public: 
	BaseL1L2R3R4L5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5L6R7L8R9
{
public: 
	BaseL1L2R3R4L5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5L6R7L8 : public  virtual BaseL1L2R3R4L5L6R7L8L9, public virtual BaseL1L2R3R4L5L6R7L8R9
{
public: 
	BaseL1L2R3R4L5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5L6R7R8L9
{
public: 
	BaseL1L2R3R4L5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5L6R7R8R9
{
public: 
	BaseL1L2R3R4L5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5L6R7R8 : public  virtual BaseL1L2R3R4L5L6R7R8L9, public virtual BaseL1L2R3R4L5L6R7R8R9
{
public: 
	BaseL1L2R3R4L5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5L6R7 : public  virtual BaseL1L2R3R4L5L6R7L8, public virtual BaseL1L2R3R4L5L6R7R8
{
public: 
	BaseL1L2R3R4L5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5L6 : public  virtual BaseL1L2R3R4L5L6L7, public virtual BaseL1L2R3R4L5L6R7
{
public: 
	BaseL1L2R3R4L5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5R6L7L8L9
{
public: 
	BaseL1L2R3R4L5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5R6L7L8R9
{
public: 
	BaseL1L2R3R4L5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5R6L7L8 : public  virtual BaseL1L2R3R4L5R6L7L8L9, public virtual BaseL1L2R3R4L5R6L7L8R9
{
public: 
	BaseL1L2R3R4L5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5R6L7R8L9
{
public: 
	BaseL1L2R3R4L5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5R6L7R8R9
{
public: 
	BaseL1L2R3R4L5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5R6L7R8 : public  virtual BaseL1L2R3R4L5R6L7R8L9, public virtual BaseL1L2R3R4L5R6L7R8R9
{
public: 
	BaseL1L2R3R4L5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5R6L7 : public  virtual BaseL1L2R3R4L5R6L7L8, public virtual BaseL1L2R3R4L5R6L7R8
{
public: 
	BaseL1L2R3R4L5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5R6R7L8L9
{
public: 
	BaseL1L2R3R4L5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5R6R7L8R9
{
public: 
	BaseL1L2R3R4L5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5R6R7L8 : public  virtual BaseL1L2R3R4L5R6R7L8L9, public virtual BaseL1L2R3R4L5R6R7L8R9
{
public: 
	BaseL1L2R3R4L5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5R6R7R8L9
{
public: 
	BaseL1L2R3R4L5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5R6R7R8R9
{
public: 
	BaseL1L2R3R4L5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5R6R7R8 : public  virtual BaseL1L2R3R4L5R6R7R8L9, public virtual BaseL1L2R3R4L5R6R7R8R9
{
public: 
	BaseL1L2R3R4L5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5R6R7 : public  virtual BaseL1L2R3R4L5R6R7L8, public virtual BaseL1L2R3R4L5R6R7R8
{
public: 
	BaseL1L2R3R4L5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5R6 : public  virtual BaseL1L2R3R4L5R6L7, public virtual BaseL1L2R3R4L5R6R7
{
public: 
	BaseL1L2R3R4L5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4L5 : public  virtual BaseL1L2R3R4L5L6, public virtual BaseL1L2R3R4L5R6
{
public: 
	BaseL1L2R3R4L5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5L6L7L8L9
{
public: 
	BaseL1L2R3R4R5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5L6L7L8R9
{
public: 
	BaseL1L2R3R4R5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5L6L7L8 : public  virtual BaseL1L2R3R4R5L6L7L8L9, public virtual BaseL1L2R3R4R5L6L7L8R9
{
public: 
	BaseL1L2R3R4R5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5L6L7R8L9
{
public: 
	BaseL1L2R3R4R5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5L6L7R8R9
{
public: 
	BaseL1L2R3R4R5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5L6L7R8 : public  virtual BaseL1L2R3R4R5L6L7R8L9, public virtual BaseL1L2R3R4R5L6L7R8R9
{
public: 
	BaseL1L2R3R4R5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5L6L7 : public  virtual BaseL1L2R3R4R5L6L7L8, public virtual BaseL1L2R3R4R5L6L7R8
{
public: 
	BaseL1L2R3R4R5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5L6R7L8L9
{
public: 
	BaseL1L2R3R4R5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5L6R7L8R9
{
public: 
	BaseL1L2R3R4R5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5L6R7L8 : public  virtual BaseL1L2R3R4R5L6R7L8L9, public virtual BaseL1L2R3R4R5L6R7L8R9
{
public: 
	BaseL1L2R3R4R5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5L6R7R8L9
{
public: 
	BaseL1L2R3R4R5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5L6R7R8R9
{
public: 
	BaseL1L2R3R4R5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5L6R7R8 : public  virtual BaseL1L2R3R4R5L6R7R8L9, public virtual BaseL1L2R3R4R5L6R7R8R9
{
public: 
	BaseL1L2R3R4R5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5L6R7 : public  virtual BaseL1L2R3R4R5L6R7L8, public virtual BaseL1L2R3R4R5L6R7R8
{
public: 
	BaseL1L2R3R4R5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5L6 : public  virtual BaseL1L2R3R4R5L6L7, public virtual BaseL1L2R3R4R5L6R7
{
public: 
	BaseL1L2R3R4R5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5R6L7L8L9
{
public: 
	BaseL1L2R3R4R5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5R6L7L8R9
{
public: 
	BaseL1L2R3R4R5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5R6L7L8 : public  virtual BaseL1L2R3R4R5R6L7L8L9, public virtual BaseL1L2R3R4R5R6L7L8R9
{
public: 
	BaseL1L2R3R4R5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5R6L7R8L9
{
public: 
	BaseL1L2R3R4R5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5R6L7R8R9
{
public: 
	BaseL1L2R3R4R5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5R6L7R8 : public  virtual BaseL1L2R3R4R5R6L7R8L9, public virtual BaseL1L2R3R4R5R6L7R8R9
{
public: 
	BaseL1L2R3R4R5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5R6L7 : public  virtual BaseL1L2R3R4R5R6L7L8, public virtual BaseL1L2R3R4R5R6L7R8
{
public: 
	BaseL1L2R3R4R5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5R6R7L8L9
{
public: 
	BaseL1L2R3R4R5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5R6R7L8R9
{
public: 
	BaseL1L2R3R4R5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5R6R7L8 : public  virtual BaseL1L2R3R4R5R6R7L8L9, public virtual BaseL1L2R3R4R5R6R7L8R9
{
public: 
	BaseL1L2R3R4R5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5R6R7R8L9
{
public: 
	BaseL1L2R3R4R5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5R6R7R8R9
{
public: 
	BaseL1L2R3R4R5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5R6R7R8 : public  virtual BaseL1L2R3R4R5R6R7R8L9, public virtual BaseL1L2R3R4R5R6R7R8R9
{
public: 
	BaseL1L2R3R4R5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5R6R7 : public  virtual BaseL1L2R3R4R5R6R7L8, public virtual BaseL1L2R3R4R5R6R7R8
{
public: 
	BaseL1L2R3R4R5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5R6 : public  virtual BaseL1L2R3R4R5R6L7, public virtual BaseL1L2R3R4R5R6R7
{
public: 
	BaseL1L2R3R4R5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4R5 : public  virtual BaseL1L2R3R4R5L6, public virtual BaseL1L2R3R4R5R6
{
public: 
	BaseL1L2R3R4R5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3R4 : public  virtual BaseL1L2R3R4L5, public virtual BaseL1L2R3R4R5
{
public: 
	BaseL1L2R3R4() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2R3 : public  virtual BaseL1L2R3L4, public virtual BaseL1L2R3R4
{
public: 
	BaseL1L2R3() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1L2 : public  virtual BaseL1L2L3, public virtual BaseL1L2R3
{
public: 
	BaseL1L2() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5L6L7L8L9
{
public: 
	BaseL1R2L3L4L5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5L6L7L8R9
{
public: 
	BaseL1R2L3L4L5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5L6L7L8 : public  virtual BaseL1R2L3L4L5L6L7L8L9, public virtual BaseL1R2L3L4L5L6L7L8R9
{
public: 
	BaseL1R2L3L4L5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5L6L7R8L9
{
public: 
	BaseL1R2L3L4L5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5L6L7R8R9
{
public: 
	BaseL1R2L3L4L5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5L6L7R8 : public  virtual BaseL1R2L3L4L5L6L7R8L9, public virtual BaseL1R2L3L4L5L6L7R8R9
{
public: 
	BaseL1R2L3L4L5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5L6L7 : public  virtual BaseL1R2L3L4L5L6L7L8, public virtual BaseL1R2L3L4L5L6L7R8
{
public: 
	BaseL1R2L3L4L5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5L6R7L8L9
{
public: 
	BaseL1R2L3L4L5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5L6R7L8R9
{
public: 
	BaseL1R2L3L4L5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5L6R7L8 : public  virtual BaseL1R2L3L4L5L6R7L8L9, public virtual BaseL1R2L3L4L5L6R7L8R9
{
public: 
	BaseL1R2L3L4L5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5L6R7R8L9
{
public: 
	BaseL1R2L3L4L5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5L6R7R8R9
{
public: 
	BaseL1R2L3L4L5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5L6R7R8 : public  virtual BaseL1R2L3L4L5L6R7R8L9, public virtual BaseL1R2L3L4L5L6R7R8R9
{
public: 
	BaseL1R2L3L4L5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5L6R7 : public  virtual BaseL1R2L3L4L5L6R7L8, public virtual BaseL1R2L3L4L5L6R7R8
{
public: 
	BaseL1R2L3L4L5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5L6 : public  virtual BaseL1R2L3L4L5L6L7, public virtual BaseL1R2L3L4L5L6R7
{
public: 
	BaseL1R2L3L4L5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5R6L7L8L9
{
public: 
	BaseL1R2L3L4L5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5R6L7L8R9
{
public: 
	BaseL1R2L3L4L5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5R6L7L8 : public  virtual BaseL1R2L3L4L5R6L7L8L9, public virtual BaseL1R2L3L4L5R6L7L8R9
{
public: 
	BaseL1R2L3L4L5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5R6L7R8L9
{
public: 
	BaseL1R2L3L4L5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5R6L7R8R9
{
public: 
	BaseL1R2L3L4L5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5R6L7R8 : public  virtual BaseL1R2L3L4L5R6L7R8L9, public virtual BaseL1R2L3L4L5R6L7R8R9
{
public: 
	BaseL1R2L3L4L5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5R6L7 : public  virtual BaseL1R2L3L4L5R6L7L8, public virtual BaseL1R2L3L4L5R6L7R8
{
public: 
	BaseL1R2L3L4L5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5R6R7L8L9
{
public: 
	BaseL1R2L3L4L5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5R6R7L8R9
{
public: 
	BaseL1R2L3L4L5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5R6R7L8 : public  virtual BaseL1R2L3L4L5R6R7L8L9, public virtual BaseL1R2L3L4L5R6R7L8R9
{
public: 
	BaseL1R2L3L4L5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5R6R7R8L9
{
public: 
	BaseL1R2L3L4L5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5R6R7R8R9
{
public: 
	BaseL1R2L3L4L5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5R6R7R8 : public  virtual BaseL1R2L3L4L5R6R7R8L9, public virtual BaseL1R2L3L4L5R6R7R8R9
{
public: 
	BaseL1R2L3L4L5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5R6R7 : public  virtual BaseL1R2L3L4L5R6R7L8, public virtual BaseL1R2L3L4L5R6R7R8
{
public: 
	BaseL1R2L3L4L5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5R6 : public  virtual BaseL1R2L3L4L5R6L7, public virtual BaseL1R2L3L4L5R6R7
{
public: 
	BaseL1R2L3L4L5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4L5 : public  virtual BaseL1R2L3L4L5L6, public virtual BaseL1R2L3L4L5R6
{
public: 
	BaseL1R2L3L4L5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5L6L7L8L9
{
public: 
	BaseL1R2L3L4R5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5L6L7L8R9
{
public: 
	BaseL1R2L3L4R5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5L6L7L8 : public  virtual BaseL1R2L3L4R5L6L7L8L9, public virtual BaseL1R2L3L4R5L6L7L8R9
{
public: 
	BaseL1R2L3L4R5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5L6L7R8L9
{
public: 
	BaseL1R2L3L4R5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5L6L7R8R9
{
public: 
	BaseL1R2L3L4R5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5L6L7R8 : public  virtual BaseL1R2L3L4R5L6L7R8L9, public virtual BaseL1R2L3L4R5L6L7R8R9
{
public: 
	BaseL1R2L3L4R5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5L6L7 : public  virtual BaseL1R2L3L4R5L6L7L8, public virtual BaseL1R2L3L4R5L6L7R8
{
public: 
	BaseL1R2L3L4R5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5L6R7L8L9
{
public: 
	BaseL1R2L3L4R5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5L6R7L8R9
{
public: 
	BaseL1R2L3L4R5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5L6R7L8 : public  virtual BaseL1R2L3L4R5L6R7L8L9, public virtual BaseL1R2L3L4R5L6R7L8R9
{
public: 
	BaseL1R2L3L4R5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5L6R7R8L9
{
public: 
	BaseL1R2L3L4R5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5L6R7R8R9
{
public: 
	BaseL1R2L3L4R5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5L6R7R8 : public  virtual BaseL1R2L3L4R5L6R7R8L9, public virtual BaseL1R2L3L4R5L6R7R8R9
{
public: 
	BaseL1R2L3L4R5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5L6R7 : public  virtual BaseL1R2L3L4R5L6R7L8, public virtual BaseL1R2L3L4R5L6R7R8
{
public: 
	BaseL1R2L3L4R5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5L6 : public  virtual BaseL1R2L3L4R5L6L7, public virtual BaseL1R2L3L4R5L6R7
{
public: 
	BaseL1R2L3L4R5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5R6L7L8L9
{
public: 
	BaseL1R2L3L4R5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5R6L7L8R9
{
public: 
	BaseL1R2L3L4R5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5R6L7L8 : public  virtual BaseL1R2L3L4R5R6L7L8L9, public virtual BaseL1R2L3L4R5R6L7L8R9
{
public: 
	BaseL1R2L3L4R5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5R6L7R8L9
{
public: 
	BaseL1R2L3L4R5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5R6L7R8R9
{
public: 
	BaseL1R2L3L4R5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5R6L7R8 : public  virtual BaseL1R2L3L4R5R6L7R8L9, public virtual BaseL1R2L3L4R5R6L7R8R9
{
public: 
	BaseL1R2L3L4R5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5R6L7 : public  virtual BaseL1R2L3L4R5R6L7L8, public virtual BaseL1R2L3L4R5R6L7R8
{
public: 
	BaseL1R2L3L4R5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5R6R7L8L9
{
public: 
	BaseL1R2L3L4R5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5R6R7L8R9
{
public: 
	BaseL1R2L3L4R5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5R6R7L8 : public  virtual BaseL1R2L3L4R5R6R7L8L9, public virtual BaseL1R2L3L4R5R6R7L8R9
{
public: 
	BaseL1R2L3L4R5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5R6R7R8L9
{
public: 
	BaseL1R2L3L4R5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5R6R7R8R9
{
public: 
	BaseL1R2L3L4R5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5R6R7R8 : public  virtual BaseL1R2L3L4R5R6R7R8L9, public virtual BaseL1R2L3L4R5R6R7R8R9
{
public: 
	BaseL1R2L3L4R5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5R6R7 : public  virtual BaseL1R2L3L4R5R6R7L8, public virtual BaseL1R2L3L4R5R6R7R8
{
public: 
	BaseL1R2L3L4R5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5R6 : public  virtual BaseL1R2L3L4R5R6L7, public virtual BaseL1R2L3L4R5R6R7
{
public: 
	BaseL1R2L3L4R5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4R5 : public  virtual BaseL1R2L3L4R5L6, public virtual BaseL1R2L3L4R5R6
{
public: 
	BaseL1R2L3L4R5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3L4 : public  virtual BaseL1R2L3L4L5, public virtual BaseL1R2L3L4R5
{
public: 
	BaseL1R2L3L4() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5L6L7L8L9
{
public: 
	BaseL1R2L3R4L5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5L6L7L8R9
{
public: 
	BaseL1R2L3R4L5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5L6L7L8 : public  virtual BaseL1R2L3R4L5L6L7L8L9, public virtual BaseL1R2L3R4L5L6L7L8R9
{
public: 
	BaseL1R2L3R4L5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5L6L7R8L9
{
public: 
	BaseL1R2L3R4L5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5L6L7R8R9
{
public: 
	BaseL1R2L3R4L5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5L6L7R8 : public  virtual BaseL1R2L3R4L5L6L7R8L9, public virtual BaseL1R2L3R4L5L6L7R8R9
{
public: 
	BaseL1R2L3R4L5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5L6L7 : public  virtual BaseL1R2L3R4L5L6L7L8, public virtual BaseL1R2L3R4L5L6L7R8
{
public: 
	BaseL1R2L3R4L5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5L6R7L8L9
{
public: 
	BaseL1R2L3R4L5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5L6R7L8R9
{
public: 
	BaseL1R2L3R4L5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5L6R7L8 : public  virtual BaseL1R2L3R4L5L6R7L8L9, public virtual BaseL1R2L3R4L5L6R7L8R9
{
public: 
	BaseL1R2L3R4L5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5L6R7R8L9
{
public: 
	BaseL1R2L3R4L5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5L6R7R8R9
{
public: 
	BaseL1R2L3R4L5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5L6R7R8 : public  virtual BaseL1R2L3R4L5L6R7R8L9, public virtual BaseL1R2L3R4L5L6R7R8R9
{
public: 
	BaseL1R2L3R4L5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5L6R7 : public  virtual BaseL1R2L3R4L5L6R7L8, public virtual BaseL1R2L3R4L5L6R7R8
{
public: 
	BaseL1R2L3R4L5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5L6 : public  virtual BaseL1R2L3R4L5L6L7, public virtual BaseL1R2L3R4L5L6R7
{
public: 
	BaseL1R2L3R4L5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5R6L7L8L9
{
public: 
	BaseL1R2L3R4L5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5R6L7L8R9
{
public: 
	BaseL1R2L3R4L5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5R6L7L8 : public  virtual BaseL1R2L3R4L5R6L7L8L9, public virtual BaseL1R2L3R4L5R6L7L8R9
{
public: 
	BaseL1R2L3R4L5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5R6L7R8L9
{
public: 
	BaseL1R2L3R4L5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5R6L7R8R9
{
public: 
	BaseL1R2L3R4L5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5R6L7R8 : public  virtual BaseL1R2L3R4L5R6L7R8L9, public virtual BaseL1R2L3R4L5R6L7R8R9
{
public: 
	BaseL1R2L3R4L5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5R6L7 : public  virtual BaseL1R2L3R4L5R6L7L8, public virtual BaseL1R2L3R4L5R6L7R8
{
public: 
	BaseL1R2L3R4L5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5R6R7L8L9
{
public: 
	BaseL1R2L3R4L5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5R6R7L8R9
{
public: 
	BaseL1R2L3R4L5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5R6R7L8 : public  virtual BaseL1R2L3R4L5R6R7L8L9, public virtual BaseL1R2L3R4L5R6R7L8R9
{
public: 
	BaseL1R2L3R4L5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5R6R7R8L9
{
public: 
	BaseL1R2L3R4L5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5R6R7R8R9
{
public: 
	BaseL1R2L3R4L5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5R6R7R8 : public  virtual BaseL1R2L3R4L5R6R7R8L9, public virtual BaseL1R2L3R4L5R6R7R8R9
{
public: 
	BaseL1R2L3R4L5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5R6R7 : public  virtual BaseL1R2L3R4L5R6R7L8, public virtual BaseL1R2L3R4L5R6R7R8
{
public: 
	BaseL1R2L3R4L5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5R6 : public  virtual BaseL1R2L3R4L5R6L7, public virtual BaseL1R2L3R4L5R6R7
{
public: 
	BaseL1R2L3R4L5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4L5 : public  virtual BaseL1R2L3R4L5L6, public virtual BaseL1R2L3R4L5R6
{
public: 
	BaseL1R2L3R4L5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5L6L7L8L9
{
public: 
	BaseL1R2L3R4R5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5L6L7L8R9
{
public: 
	BaseL1R2L3R4R5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5L6L7L8 : public  virtual BaseL1R2L3R4R5L6L7L8L9, public virtual BaseL1R2L3R4R5L6L7L8R9
{
public: 
	BaseL1R2L3R4R5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5L6L7R8L9
{
public: 
	BaseL1R2L3R4R5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5L6L7R8R9
{
public: 
	BaseL1R2L3R4R5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5L6L7R8 : public  virtual BaseL1R2L3R4R5L6L7R8L9, public virtual BaseL1R2L3R4R5L6L7R8R9
{
public: 
	BaseL1R2L3R4R5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5L6L7 : public  virtual BaseL1R2L3R4R5L6L7L8, public virtual BaseL1R2L3R4R5L6L7R8
{
public: 
	BaseL1R2L3R4R5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5L6R7L8L9
{
public: 
	BaseL1R2L3R4R5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5L6R7L8R9
{
public: 
	BaseL1R2L3R4R5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5L6R7L8 : public  virtual BaseL1R2L3R4R5L6R7L8L9, public virtual BaseL1R2L3R4R5L6R7L8R9
{
public: 
	BaseL1R2L3R4R5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5L6R7R8L9
{
public: 
	BaseL1R2L3R4R5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5L6R7R8R9
{
public: 
	BaseL1R2L3R4R5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5L6R7R8 : public  virtual BaseL1R2L3R4R5L6R7R8L9, public virtual BaseL1R2L3R4R5L6R7R8R9
{
public: 
	BaseL1R2L3R4R5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5L6R7 : public  virtual BaseL1R2L3R4R5L6R7L8, public virtual BaseL1R2L3R4R5L6R7R8
{
public: 
	BaseL1R2L3R4R5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5L6 : public  virtual BaseL1R2L3R4R5L6L7, public virtual BaseL1R2L3R4R5L6R7
{
public: 
	BaseL1R2L3R4R5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5R6L7L8L9
{
public: 
	BaseL1R2L3R4R5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5R6L7L8R9
{
public: 
	BaseL1R2L3R4R5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5R6L7L8 : public  virtual BaseL1R2L3R4R5R6L7L8L9, public virtual BaseL1R2L3R4R5R6L7L8R9
{
public: 
	BaseL1R2L3R4R5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5R6L7R8L9
{
public: 
	BaseL1R2L3R4R5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5R6L7R8R9
{
public: 
	BaseL1R2L3R4R5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5R6L7R8 : public  virtual BaseL1R2L3R4R5R6L7R8L9, public virtual BaseL1R2L3R4R5R6L7R8R9
{
public: 
	BaseL1R2L3R4R5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5R6L7 : public  virtual BaseL1R2L3R4R5R6L7L8, public virtual BaseL1R2L3R4R5R6L7R8
{
public: 
	BaseL1R2L3R4R5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5R6R7L8L9
{
public: 
	BaseL1R2L3R4R5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5R6R7L8R9
{
public: 
	BaseL1R2L3R4R5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5R6R7L8 : public  virtual BaseL1R2L3R4R5R6R7L8L9, public virtual BaseL1R2L3R4R5R6R7L8R9
{
public: 
	BaseL1R2L3R4R5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5R6R7R8L9
{
public: 
	BaseL1R2L3R4R5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5R6R7R8R9
{
public: 
	BaseL1R2L3R4R5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5R6R7R8 : public  virtual BaseL1R2L3R4R5R6R7R8L9, public virtual BaseL1R2L3R4R5R6R7R8R9
{
public: 
	BaseL1R2L3R4R5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5R6R7 : public  virtual BaseL1R2L3R4R5R6R7L8, public virtual BaseL1R2L3R4R5R6R7R8
{
public: 
	BaseL1R2L3R4R5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5R6 : public  virtual BaseL1R2L3R4R5R6L7, public virtual BaseL1R2L3R4R5R6R7
{
public: 
	BaseL1R2L3R4R5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4R5 : public  virtual BaseL1R2L3R4R5L6, public virtual BaseL1R2L3R4R5R6
{
public: 
	BaseL1R2L3R4R5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3R4 : public  virtual BaseL1R2L3R4L5, public virtual BaseL1R2L3R4R5
{
public: 
	BaseL1R2L3R4() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2L3 : public  virtual BaseL1R2L3L4, public virtual BaseL1R2L3R4
{
public: 
	BaseL1R2L3() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5L6L7L8L9
{
public: 
	BaseL1R2R3L4L5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5L6L7L8R9
{
public: 
	BaseL1R2R3L4L5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5L6L7L8 : public  virtual BaseL1R2R3L4L5L6L7L8L9, public virtual BaseL1R2R3L4L5L6L7L8R9
{
public: 
	BaseL1R2R3L4L5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5L6L7R8L9
{
public: 
	BaseL1R2R3L4L5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5L6L7R8R9
{
public: 
	BaseL1R2R3L4L5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5L6L7R8 : public  virtual BaseL1R2R3L4L5L6L7R8L9, public virtual BaseL1R2R3L4L5L6L7R8R9
{
public: 
	BaseL1R2R3L4L5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5L6L7 : public  virtual BaseL1R2R3L4L5L6L7L8, public virtual BaseL1R2R3L4L5L6L7R8
{
public: 
	BaseL1R2R3L4L5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5L6R7L8L9
{
public: 
	BaseL1R2R3L4L5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5L6R7L8R9
{
public: 
	BaseL1R2R3L4L5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5L6R7L8 : public  virtual BaseL1R2R3L4L5L6R7L8L9, public virtual BaseL1R2R3L4L5L6R7L8R9
{
public: 
	BaseL1R2R3L4L5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5L6R7R8L9
{
public: 
	BaseL1R2R3L4L5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5L6R7R8R9
{
public: 
	BaseL1R2R3L4L5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5L6R7R8 : public  virtual BaseL1R2R3L4L5L6R7R8L9, public virtual BaseL1R2R3L4L5L6R7R8R9
{
public: 
	BaseL1R2R3L4L5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5L6R7 : public  virtual BaseL1R2R3L4L5L6R7L8, public virtual BaseL1R2R3L4L5L6R7R8
{
public: 
	BaseL1R2R3L4L5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5L6 : public  virtual BaseL1R2R3L4L5L6L7, public virtual BaseL1R2R3L4L5L6R7
{
public: 
	BaseL1R2R3L4L5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5R6L7L8L9
{
public: 
	BaseL1R2R3L4L5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5R6L7L8R9
{
public: 
	BaseL1R2R3L4L5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5R6L7L8 : public  virtual BaseL1R2R3L4L5R6L7L8L9, public virtual BaseL1R2R3L4L5R6L7L8R9
{
public: 
	BaseL1R2R3L4L5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5R6L7R8L9
{
public: 
	BaseL1R2R3L4L5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5R6L7R8R9
{
public: 
	BaseL1R2R3L4L5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5R6L7R8 : public  virtual BaseL1R2R3L4L5R6L7R8L9, public virtual BaseL1R2R3L4L5R6L7R8R9
{
public: 
	BaseL1R2R3L4L5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5R6L7 : public  virtual BaseL1R2R3L4L5R6L7L8, public virtual BaseL1R2R3L4L5R6L7R8
{
public: 
	BaseL1R2R3L4L5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5R6R7L8L9
{
public: 
	BaseL1R2R3L4L5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5R6R7L8R9
{
public: 
	BaseL1R2R3L4L5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5R6R7L8 : public  virtual BaseL1R2R3L4L5R6R7L8L9, public virtual BaseL1R2R3L4L5R6R7L8R9
{
public: 
	BaseL1R2R3L4L5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5R6R7R8L9
{
public: 
	BaseL1R2R3L4L5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5R6R7R8R9
{
public: 
	BaseL1R2R3L4L5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5R6R7R8 : public  virtual BaseL1R2R3L4L5R6R7R8L9, public virtual BaseL1R2R3L4L5R6R7R8R9
{
public: 
	BaseL1R2R3L4L5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5R6R7 : public  virtual BaseL1R2R3L4L5R6R7L8, public virtual BaseL1R2R3L4L5R6R7R8
{
public: 
	BaseL1R2R3L4L5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5R6 : public  virtual BaseL1R2R3L4L5R6L7, public virtual BaseL1R2R3L4L5R6R7
{
public: 
	BaseL1R2R3L4L5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4L5 : public  virtual BaseL1R2R3L4L5L6, public virtual BaseL1R2R3L4L5R6
{
public: 
	BaseL1R2R3L4L5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5L6L7L8L9
{
public: 
	BaseL1R2R3L4R5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5L6L7L8R9
{
public: 
	BaseL1R2R3L4R5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5L6L7L8 : public  virtual BaseL1R2R3L4R5L6L7L8L9, public virtual BaseL1R2R3L4R5L6L7L8R9
{
public: 
	BaseL1R2R3L4R5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5L6L7R8L9
{
public: 
	BaseL1R2R3L4R5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5L6L7R8R9
{
public: 
	BaseL1R2R3L4R5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5L6L7R8 : public  virtual BaseL1R2R3L4R5L6L7R8L9, public virtual BaseL1R2R3L4R5L6L7R8R9
{
public: 
	BaseL1R2R3L4R5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5L6L7 : public  virtual BaseL1R2R3L4R5L6L7L8, public virtual BaseL1R2R3L4R5L6L7R8
{
public: 
	BaseL1R2R3L4R5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5L6R7L8L9
{
public: 
	BaseL1R2R3L4R5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5L6R7L8R9
{
public: 
	BaseL1R2R3L4R5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5L6R7L8 : public  virtual BaseL1R2R3L4R5L6R7L8L9, public virtual BaseL1R2R3L4R5L6R7L8R9
{
public: 
	BaseL1R2R3L4R5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5L6R7R8L9
{
public: 
	BaseL1R2R3L4R5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5L6R7R8R9
{
public: 
	BaseL1R2R3L4R5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5L6R7R8 : public  virtual BaseL1R2R3L4R5L6R7R8L9, public virtual BaseL1R2R3L4R5L6R7R8R9
{
public: 
	BaseL1R2R3L4R5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5L6R7 : public  virtual BaseL1R2R3L4R5L6R7L8, public virtual BaseL1R2R3L4R5L6R7R8
{
public: 
	BaseL1R2R3L4R5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5L6 : public  virtual BaseL1R2R3L4R5L6L7, public virtual BaseL1R2R3L4R5L6R7
{
public: 
	BaseL1R2R3L4R5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5R6L7L8L9
{
public: 
	BaseL1R2R3L4R5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5R6L7L8R9
{
public: 
	BaseL1R2R3L4R5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5R6L7L8 : public  virtual BaseL1R2R3L4R5R6L7L8L9, public virtual BaseL1R2R3L4R5R6L7L8R9
{
public: 
	BaseL1R2R3L4R5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5R6L7R8L9
{
public: 
	BaseL1R2R3L4R5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5R6L7R8R9
{
public: 
	BaseL1R2R3L4R5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5R6L7R8 : public  virtual BaseL1R2R3L4R5R6L7R8L9, public virtual BaseL1R2R3L4R5R6L7R8R9
{
public: 
	BaseL1R2R3L4R5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5R6L7 : public  virtual BaseL1R2R3L4R5R6L7L8, public virtual BaseL1R2R3L4R5R6L7R8
{
public: 
	BaseL1R2R3L4R5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5R6R7L8L9
{
public: 
	BaseL1R2R3L4R5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5R6R7L8R9
{
public: 
	BaseL1R2R3L4R5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5R6R7L8 : public  virtual BaseL1R2R3L4R5R6R7L8L9, public virtual BaseL1R2R3L4R5R6R7L8R9
{
public: 
	BaseL1R2R3L4R5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5R6R7R8L9
{
public: 
	BaseL1R2R3L4R5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5R6R7R8R9
{
public: 
	BaseL1R2R3L4R5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5R6R7R8 : public  virtual BaseL1R2R3L4R5R6R7R8L9, public virtual BaseL1R2R3L4R5R6R7R8R9
{
public: 
	BaseL1R2R3L4R5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5R6R7 : public  virtual BaseL1R2R3L4R5R6R7L8, public virtual BaseL1R2R3L4R5R6R7R8
{
public: 
	BaseL1R2R3L4R5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5R6 : public  virtual BaseL1R2R3L4R5R6L7, public virtual BaseL1R2R3L4R5R6R7
{
public: 
	BaseL1R2R3L4R5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4R5 : public  virtual BaseL1R2R3L4R5L6, public virtual BaseL1R2R3L4R5R6
{
public: 
	BaseL1R2R3L4R5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3L4 : public  virtual BaseL1R2R3L4L5, public virtual BaseL1R2R3L4R5
{
public: 
	BaseL1R2R3L4() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5L6L7L8L9
{
public: 
	BaseL1R2R3R4L5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5L6L7L8R9
{
public: 
	BaseL1R2R3R4L5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5L6L7L8 : public  virtual BaseL1R2R3R4L5L6L7L8L9, public virtual BaseL1R2R3R4L5L6L7L8R9
{
public: 
	BaseL1R2R3R4L5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5L6L7R8L9
{
public: 
	BaseL1R2R3R4L5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5L6L7R8R9
{
public: 
	BaseL1R2R3R4L5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5L6L7R8 : public  virtual BaseL1R2R3R4L5L6L7R8L9, public virtual BaseL1R2R3R4L5L6L7R8R9
{
public: 
	BaseL1R2R3R4L5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5L6L7 : public  virtual BaseL1R2R3R4L5L6L7L8, public virtual BaseL1R2R3R4L5L6L7R8
{
public: 
	BaseL1R2R3R4L5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5L6R7L8L9
{
public: 
	BaseL1R2R3R4L5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5L6R7L8R9
{
public: 
	BaseL1R2R3R4L5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5L6R7L8 : public  virtual BaseL1R2R3R4L5L6R7L8L9, public virtual BaseL1R2R3R4L5L6R7L8R9
{
public: 
	BaseL1R2R3R4L5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5L6R7R8L9
{
public: 
	BaseL1R2R3R4L5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5L6R7R8R9
{
public: 
	BaseL1R2R3R4L5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5L6R7R8 : public  virtual BaseL1R2R3R4L5L6R7R8L9, public virtual BaseL1R2R3R4L5L6R7R8R9
{
public: 
	BaseL1R2R3R4L5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5L6R7 : public  virtual BaseL1R2R3R4L5L6R7L8, public virtual BaseL1R2R3R4L5L6R7R8
{
public: 
	BaseL1R2R3R4L5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5L6 : public  virtual BaseL1R2R3R4L5L6L7, public virtual BaseL1R2R3R4L5L6R7
{
public: 
	BaseL1R2R3R4L5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5R6L7L8L9
{
public: 
	BaseL1R2R3R4L5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5R6L7L8R9
{
public: 
	BaseL1R2R3R4L5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5R6L7L8 : public  virtual BaseL1R2R3R4L5R6L7L8L9, public virtual BaseL1R2R3R4L5R6L7L8R9
{
public: 
	BaseL1R2R3R4L5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5R6L7R8L9
{
public: 
	BaseL1R2R3R4L5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5R6L7R8R9
{
public: 
	BaseL1R2R3R4L5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5R6L7R8 : public  virtual BaseL1R2R3R4L5R6L7R8L9, public virtual BaseL1R2R3R4L5R6L7R8R9
{
public: 
	BaseL1R2R3R4L5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5R6L7 : public  virtual BaseL1R2R3R4L5R6L7L8, public virtual BaseL1R2R3R4L5R6L7R8
{
public: 
	BaseL1R2R3R4L5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5R6R7L8L9
{
public: 
	BaseL1R2R3R4L5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5R6R7L8R9
{
public: 
	BaseL1R2R3R4L5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5R6R7L8 : public  virtual BaseL1R2R3R4L5R6R7L8L9, public virtual BaseL1R2R3R4L5R6R7L8R9
{
public: 
	BaseL1R2R3R4L5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5R6R7R8L9
{
public: 
	BaseL1R2R3R4L5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5R6R7R8R9
{
public: 
	BaseL1R2R3R4L5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5R6R7R8 : public  virtual BaseL1R2R3R4L5R6R7R8L9, public virtual BaseL1R2R3R4L5R6R7R8R9
{
public: 
	BaseL1R2R3R4L5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5R6R7 : public  virtual BaseL1R2R3R4L5R6R7L8, public virtual BaseL1R2R3R4L5R6R7R8
{
public: 
	BaseL1R2R3R4L5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5R6 : public  virtual BaseL1R2R3R4L5R6L7, public virtual BaseL1R2R3R4L5R6R7
{
public: 
	BaseL1R2R3R4L5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4L5 : public  virtual BaseL1R2R3R4L5L6, public virtual BaseL1R2R3R4L5R6
{
public: 
	BaseL1R2R3R4L5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5L6L7L8L9
{
public: 
	BaseL1R2R3R4R5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5L6L7L8R9
{
public: 
	BaseL1R2R3R4R5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5L6L7L8 : public  virtual BaseL1R2R3R4R5L6L7L8L9, public virtual BaseL1R2R3R4R5L6L7L8R9
{
public: 
	BaseL1R2R3R4R5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5L6L7R8L9
{
public: 
	BaseL1R2R3R4R5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5L6L7R8R9
{
public: 
	BaseL1R2R3R4R5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5L6L7R8 : public  virtual BaseL1R2R3R4R5L6L7R8L9, public virtual BaseL1R2R3R4R5L6L7R8R9
{
public: 
	BaseL1R2R3R4R5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5L6L7 : public  virtual BaseL1R2R3R4R5L6L7L8, public virtual BaseL1R2R3R4R5L6L7R8
{
public: 
	BaseL1R2R3R4R5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5L6R7L8L9
{
public: 
	BaseL1R2R3R4R5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5L6R7L8R9
{
public: 
	BaseL1R2R3R4R5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5L6R7L8 : public  virtual BaseL1R2R3R4R5L6R7L8L9, public virtual BaseL1R2R3R4R5L6R7L8R9
{
public: 
	BaseL1R2R3R4R5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5L6R7R8L9
{
public: 
	BaseL1R2R3R4R5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5L6R7R8R9
{
public: 
	BaseL1R2R3R4R5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5L6R7R8 : public  virtual BaseL1R2R3R4R5L6R7R8L9, public virtual BaseL1R2R3R4R5L6R7R8R9
{
public: 
	BaseL1R2R3R4R5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5L6R7 : public  virtual BaseL1R2R3R4R5L6R7L8, public virtual BaseL1R2R3R4R5L6R7R8
{
public: 
	BaseL1R2R3R4R5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5L6 : public  virtual BaseL1R2R3R4R5L6L7, public virtual BaseL1R2R3R4R5L6R7
{
public: 
	BaseL1R2R3R4R5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5R6L7L8L9
{
public: 
	BaseL1R2R3R4R5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5R6L7L8R9
{
public: 
	BaseL1R2R3R4R5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5R6L7L8 : public  virtual BaseL1R2R3R4R5R6L7L8L9, public virtual BaseL1R2R3R4R5R6L7L8R9
{
public: 
	BaseL1R2R3R4R5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5R6L7R8L9
{
public: 
	BaseL1R2R3R4R5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5R6L7R8R9
{
public: 
	BaseL1R2R3R4R5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5R6L7R8 : public  virtual BaseL1R2R3R4R5R6L7R8L9, public virtual BaseL1R2R3R4R5R6L7R8R9
{
public: 
	BaseL1R2R3R4R5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5R6L7 : public  virtual BaseL1R2R3R4R5R6L7L8, public virtual BaseL1R2R3R4R5R6L7R8
{
public: 
	BaseL1R2R3R4R5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5R6R7L8L9
{
public: 
	BaseL1R2R3R4R5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5R6R7L8R9
{
public: 
	BaseL1R2R3R4R5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5R6R7L8 : public  virtual BaseL1R2R3R4R5R6R7L8L9, public virtual BaseL1R2R3R4R5R6R7L8R9
{
public: 
	BaseL1R2R3R4R5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5R6R7R8L9
{
public: 
	BaseL1R2R3R4R5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5R6R7R8R9
{
public: 
	BaseL1R2R3R4R5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5R6R7R8 : public  virtual BaseL1R2R3R4R5R6R7R8L9, public virtual BaseL1R2R3R4R5R6R7R8R9
{
public: 
	BaseL1R2R3R4R5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5R6R7 : public  virtual BaseL1R2R3R4R5R6R7L8, public virtual BaseL1R2R3R4R5R6R7R8
{
public: 
	BaseL1R2R3R4R5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5R6 : public  virtual BaseL1R2R3R4R5R6L7, public virtual BaseL1R2R3R4R5R6R7
{
public: 
	BaseL1R2R3R4R5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4R5 : public  virtual BaseL1R2R3R4R5L6, public virtual BaseL1R2R3R4R5R6
{
public: 
	BaseL1R2R3R4R5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3R4 : public  virtual BaseL1R2R3R4L5, public virtual BaseL1R2R3R4R5
{
public: 
	BaseL1R2R3R4() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2R3 : public  virtual BaseL1R2R3L4, public virtual BaseL1R2R3R4
{
public: 
	BaseL1R2R3() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1R2 : public  virtual BaseL1R2L3, public virtual BaseL1R2R3
{
public: 
	BaseL1R2() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseL1 : public  virtual BaseL1L2, public virtual BaseL1R2
{
public: 
	BaseL1() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5L6L7L8L9
{
public: 
	BaseR1L2L3L4L5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5L6L7L8R9
{
public: 
	BaseR1L2L3L4L5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5L6L7L8 : public  virtual BaseR1L2L3L4L5L6L7L8L9, public virtual BaseR1L2L3L4L5L6L7L8R9
{
public: 
	BaseR1L2L3L4L5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5L6L7R8L9
{
public: 
	BaseR1L2L3L4L5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5L6L7R8R9
{
public: 
	BaseR1L2L3L4L5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5L6L7R8 : public  virtual BaseR1L2L3L4L5L6L7R8L9, public virtual BaseR1L2L3L4L5L6L7R8R9
{
public: 
	BaseR1L2L3L4L5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5L6L7 : public  virtual BaseR1L2L3L4L5L6L7L8, public virtual BaseR1L2L3L4L5L6L7R8
{
public: 
	BaseR1L2L3L4L5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5L6R7L8L9
{
public: 
	BaseR1L2L3L4L5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5L6R7L8R9
{
public: 
	BaseR1L2L3L4L5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5L6R7L8 : public  virtual BaseR1L2L3L4L5L6R7L8L9, public virtual BaseR1L2L3L4L5L6R7L8R9
{
public: 
	BaseR1L2L3L4L5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5L6R7R8L9
{
public: 
	BaseR1L2L3L4L5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5L6R7R8R9
{
public: 
	BaseR1L2L3L4L5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5L6R7R8 : public  virtual BaseR1L2L3L4L5L6R7R8L9, public virtual BaseR1L2L3L4L5L6R7R8R9
{
public: 
	BaseR1L2L3L4L5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5L6R7 : public  virtual BaseR1L2L3L4L5L6R7L8, public virtual BaseR1L2L3L4L5L6R7R8
{
public: 
	BaseR1L2L3L4L5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5L6 : public  virtual BaseR1L2L3L4L5L6L7, public virtual BaseR1L2L3L4L5L6R7
{
public: 
	BaseR1L2L3L4L5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5R6L7L8L9
{
public: 
	BaseR1L2L3L4L5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5R6L7L8R9
{
public: 
	BaseR1L2L3L4L5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5R6L7L8 : public  virtual BaseR1L2L3L4L5R6L7L8L9, public virtual BaseR1L2L3L4L5R6L7L8R9
{
public: 
	BaseR1L2L3L4L5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5R6L7R8L9
{
public: 
	BaseR1L2L3L4L5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5R6L7R8R9
{
public: 
	BaseR1L2L3L4L5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5R6L7R8 : public  virtual BaseR1L2L3L4L5R6L7R8L9, public virtual BaseR1L2L3L4L5R6L7R8R9
{
public: 
	BaseR1L2L3L4L5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5R6L7 : public  virtual BaseR1L2L3L4L5R6L7L8, public virtual BaseR1L2L3L4L5R6L7R8
{
public: 
	BaseR1L2L3L4L5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5R6R7L8L9
{
public: 
	BaseR1L2L3L4L5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5R6R7L8R9
{
public: 
	BaseR1L2L3L4L5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5R6R7L8 : public  virtual BaseR1L2L3L4L5R6R7L8L9, public virtual BaseR1L2L3L4L5R6R7L8R9
{
public: 
	BaseR1L2L3L4L5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5R6R7R8L9
{
public: 
	BaseR1L2L3L4L5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5R6R7R8R9
{
public: 
	BaseR1L2L3L4L5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5R6R7R8 : public  virtual BaseR1L2L3L4L5R6R7R8L9, public virtual BaseR1L2L3L4L5R6R7R8R9
{
public: 
	BaseR1L2L3L4L5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5R6R7 : public  virtual BaseR1L2L3L4L5R6R7L8, public virtual BaseR1L2L3L4L5R6R7R8
{
public: 
	BaseR1L2L3L4L5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5R6 : public  virtual BaseR1L2L3L4L5R6L7, public virtual BaseR1L2L3L4L5R6R7
{
public: 
	BaseR1L2L3L4L5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4L5 : public  virtual BaseR1L2L3L4L5L6, public virtual BaseR1L2L3L4L5R6
{
public: 
	BaseR1L2L3L4L5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5L6L7L8L9
{
public: 
	BaseR1L2L3L4R5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5L6L7L8R9
{
public: 
	BaseR1L2L3L4R5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5L6L7L8 : public  virtual BaseR1L2L3L4R5L6L7L8L9, public virtual BaseR1L2L3L4R5L6L7L8R9
{
public: 
	BaseR1L2L3L4R5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5L6L7R8L9
{
public: 
	BaseR1L2L3L4R5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5L6L7R8R9
{
public: 
	BaseR1L2L3L4R5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5L6L7R8 : public  virtual BaseR1L2L3L4R5L6L7R8L9, public virtual BaseR1L2L3L4R5L6L7R8R9
{
public: 
	BaseR1L2L3L4R5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5L6L7 : public  virtual BaseR1L2L3L4R5L6L7L8, public virtual BaseR1L2L3L4R5L6L7R8
{
public: 
	BaseR1L2L3L4R5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5L6R7L8L9
{
public: 
	BaseR1L2L3L4R5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5L6R7L8R9
{
public: 
	BaseR1L2L3L4R5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5L6R7L8 : public  virtual BaseR1L2L3L4R5L6R7L8L9, public virtual BaseR1L2L3L4R5L6R7L8R9
{
public: 
	BaseR1L2L3L4R5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5L6R7R8L9
{
public: 
	BaseR1L2L3L4R5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5L6R7R8R9
{
public: 
	BaseR1L2L3L4R5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5L6R7R8 : public  virtual BaseR1L2L3L4R5L6R7R8L9, public virtual BaseR1L2L3L4R5L6R7R8R9
{
public: 
	BaseR1L2L3L4R5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5L6R7 : public  virtual BaseR1L2L3L4R5L6R7L8, public virtual BaseR1L2L3L4R5L6R7R8
{
public: 
	BaseR1L2L3L4R5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5L6 : public  virtual BaseR1L2L3L4R5L6L7, public virtual BaseR1L2L3L4R5L6R7
{
public: 
	BaseR1L2L3L4R5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5R6L7L8L9
{
public: 
	BaseR1L2L3L4R5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5R6L7L8R9
{
public: 
	BaseR1L2L3L4R5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5R6L7L8 : public  virtual BaseR1L2L3L4R5R6L7L8L9, public virtual BaseR1L2L3L4R5R6L7L8R9
{
public: 
	BaseR1L2L3L4R5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5R6L7R8L9
{
public: 
	BaseR1L2L3L4R5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5R6L7R8R9
{
public: 
	BaseR1L2L3L4R5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5R6L7R8 : public  virtual BaseR1L2L3L4R5R6L7R8L9, public virtual BaseR1L2L3L4R5R6L7R8R9
{
public: 
	BaseR1L2L3L4R5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5R6L7 : public  virtual BaseR1L2L3L4R5R6L7L8, public virtual BaseR1L2L3L4R5R6L7R8
{
public: 
	BaseR1L2L3L4R5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5R6R7L8L9
{
public: 
	BaseR1L2L3L4R5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5R6R7L8R9
{
public: 
	BaseR1L2L3L4R5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5R6R7L8 : public  virtual BaseR1L2L3L4R5R6R7L8L9, public virtual BaseR1L2L3L4R5R6R7L8R9
{
public: 
	BaseR1L2L3L4R5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5R6R7R8L9
{
public: 
	BaseR1L2L3L4R5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5R6R7R8R9
{
public: 
	BaseR1L2L3L4R5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5R6R7R8 : public  virtual BaseR1L2L3L4R5R6R7R8L9, public virtual BaseR1L2L3L4R5R6R7R8R9
{
public: 
	BaseR1L2L3L4R5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5R6R7 : public  virtual BaseR1L2L3L4R5R6R7L8, public virtual BaseR1L2L3L4R5R6R7R8
{
public: 
	BaseR1L2L3L4R5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5R6 : public  virtual BaseR1L2L3L4R5R6L7, public virtual BaseR1L2L3L4R5R6R7
{
public: 
	BaseR1L2L3L4R5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4R5 : public  virtual BaseR1L2L3L4R5L6, public virtual BaseR1L2L3L4R5R6
{
public: 
	BaseR1L2L3L4R5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3L4 : public  virtual BaseR1L2L3L4L5, public virtual BaseR1L2L3L4R5
{
public: 
	BaseR1L2L3L4() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5L6L7L8L9
{
public: 
	BaseR1L2L3R4L5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5L6L7L8R9
{
public: 
	BaseR1L2L3R4L5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5L6L7L8 : public  virtual BaseR1L2L3R4L5L6L7L8L9, public virtual BaseR1L2L3R4L5L6L7L8R9
{
public: 
	BaseR1L2L3R4L5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5L6L7R8L9
{
public: 
	BaseR1L2L3R4L5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5L6L7R8R9
{
public: 
	BaseR1L2L3R4L5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5L6L7R8 : public  virtual BaseR1L2L3R4L5L6L7R8L9, public virtual BaseR1L2L3R4L5L6L7R8R9
{
public: 
	BaseR1L2L3R4L5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5L6L7 : public  virtual BaseR1L2L3R4L5L6L7L8, public virtual BaseR1L2L3R4L5L6L7R8
{
public: 
	BaseR1L2L3R4L5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5L6R7L8L9
{
public: 
	BaseR1L2L3R4L5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5L6R7L8R9
{
public: 
	BaseR1L2L3R4L5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5L6R7L8 : public  virtual BaseR1L2L3R4L5L6R7L8L9, public virtual BaseR1L2L3R4L5L6R7L8R9
{
public: 
	BaseR1L2L3R4L5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5L6R7R8L9
{
public: 
	BaseR1L2L3R4L5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5L6R7R8R9
{
public: 
	BaseR1L2L3R4L5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5L6R7R8 : public  virtual BaseR1L2L3R4L5L6R7R8L9, public virtual BaseR1L2L3R4L5L6R7R8R9
{
public: 
	BaseR1L2L3R4L5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5L6R7 : public  virtual BaseR1L2L3R4L5L6R7L8, public virtual BaseR1L2L3R4L5L6R7R8
{
public: 
	BaseR1L2L3R4L5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5L6 : public  virtual BaseR1L2L3R4L5L6L7, public virtual BaseR1L2L3R4L5L6R7
{
public: 
	BaseR1L2L3R4L5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5R6L7L8L9
{
public: 
	BaseR1L2L3R4L5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5R6L7L8R9
{
public: 
	BaseR1L2L3R4L5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5R6L7L8 : public  virtual BaseR1L2L3R4L5R6L7L8L9, public virtual BaseR1L2L3R4L5R6L7L8R9
{
public: 
	BaseR1L2L3R4L5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5R6L7R8L9
{
public: 
	BaseR1L2L3R4L5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5R6L7R8R9
{
public: 
	BaseR1L2L3R4L5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5R6L7R8 : public  virtual BaseR1L2L3R4L5R6L7R8L9, public virtual BaseR1L2L3R4L5R6L7R8R9
{
public: 
	BaseR1L2L3R4L5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5R6L7 : public  virtual BaseR1L2L3R4L5R6L7L8, public virtual BaseR1L2L3R4L5R6L7R8
{
public: 
	BaseR1L2L3R4L5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5R6R7L8L9
{
public: 
	BaseR1L2L3R4L5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5R6R7L8R9
{
public: 
	BaseR1L2L3R4L5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5R6R7L8 : public  virtual BaseR1L2L3R4L5R6R7L8L9, public virtual BaseR1L2L3R4L5R6R7L8R9
{
public: 
	BaseR1L2L3R4L5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5R6R7R8L9
{
public: 
	BaseR1L2L3R4L5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5R6R7R8R9
{
public: 
	BaseR1L2L3R4L5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5R6R7R8 : public  virtual BaseR1L2L3R4L5R6R7R8L9, public virtual BaseR1L2L3R4L5R6R7R8R9
{
public: 
	BaseR1L2L3R4L5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5R6R7 : public  virtual BaseR1L2L3R4L5R6R7L8, public virtual BaseR1L2L3R4L5R6R7R8
{
public: 
	BaseR1L2L3R4L5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5R6 : public  virtual BaseR1L2L3R4L5R6L7, public virtual BaseR1L2L3R4L5R6R7
{
public: 
	BaseR1L2L3R4L5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4L5 : public  virtual BaseR1L2L3R4L5L6, public virtual BaseR1L2L3R4L5R6
{
public: 
	BaseR1L2L3R4L5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5L6L7L8L9
{
public: 
	BaseR1L2L3R4R5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5L6L7L8R9
{
public: 
	BaseR1L2L3R4R5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5L6L7L8 : public  virtual BaseR1L2L3R4R5L6L7L8L9, public virtual BaseR1L2L3R4R5L6L7L8R9
{
public: 
	BaseR1L2L3R4R5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5L6L7R8L9
{
public: 
	BaseR1L2L3R4R5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5L6L7R8R9
{
public: 
	BaseR1L2L3R4R5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5L6L7R8 : public  virtual BaseR1L2L3R4R5L6L7R8L9, public virtual BaseR1L2L3R4R5L6L7R8R9
{
public: 
	BaseR1L2L3R4R5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5L6L7 : public  virtual BaseR1L2L3R4R5L6L7L8, public virtual BaseR1L2L3R4R5L6L7R8
{
public: 
	BaseR1L2L3R4R5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5L6R7L8L9
{
public: 
	BaseR1L2L3R4R5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5L6R7L8R9
{
public: 
	BaseR1L2L3R4R5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5L6R7L8 : public  virtual BaseR1L2L3R4R5L6R7L8L9, public virtual BaseR1L2L3R4R5L6R7L8R9
{
public: 
	BaseR1L2L3R4R5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5L6R7R8L9
{
public: 
	BaseR1L2L3R4R5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5L6R7R8R9
{
public: 
	BaseR1L2L3R4R5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5L6R7R8 : public  virtual BaseR1L2L3R4R5L6R7R8L9, public virtual BaseR1L2L3R4R5L6R7R8R9
{
public: 
	BaseR1L2L3R4R5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5L6R7 : public  virtual BaseR1L2L3R4R5L6R7L8, public virtual BaseR1L2L3R4R5L6R7R8
{
public: 
	BaseR1L2L3R4R5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5L6 : public  virtual BaseR1L2L3R4R5L6L7, public virtual BaseR1L2L3R4R5L6R7
{
public: 
	BaseR1L2L3R4R5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5R6L7L8L9
{
public: 
	BaseR1L2L3R4R5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5R6L7L8R9
{
public: 
	BaseR1L2L3R4R5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5R6L7L8 : public  virtual BaseR1L2L3R4R5R6L7L8L9, public virtual BaseR1L2L3R4R5R6L7L8R9
{
public: 
	BaseR1L2L3R4R5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5R6L7R8L9
{
public: 
	BaseR1L2L3R4R5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5R6L7R8R9
{
public: 
	BaseR1L2L3R4R5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5R6L7R8 : public  virtual BaseR1L2L3R4R5R6L7R8L9, public virtual BaseR1L2L3R4R5R6L7R8R9
{
public: 
	BaseR1L2L3R4R5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5R6L7 : public  virtual BaseR1L2L3R4R5R6L7L8, public virtual BaseR1L2L3R4R5R6L7R8
{
public: 
	BaseR1L2L3R4R5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5R6R7L8L9
{
public: 
	BaseR1L2L3R4R5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5R6R7L8R9
{
public: 
	BaseR1L2L3R4R5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5R6R7L8 : public  virtual BaseR1L2L3R4R5R6R7L8L9, public virtual BaseR1L2L3R4R5R6R7L8R9
{
public: 
	BaseR1L2L3R4R5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5R6R7R8L9
{
public: 
	BaseR1L2L3R4R5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5R6R7R8R9
{
public: 
	BaseR1L2L3R4R5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5R6R7R8 : public  virtual BaseR1L2L3R4R5R6R7R8L9, public virtual BaseR1L2L3R4R5R6R7R8R9
{
public: 
	BaseR1L2L3R4R5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5R6R7 : public  virtual BaseR1L2L3R4R5R6R7L8, public virtual BaseR1L2L3R4R5R6R7R8
{
public: 
	BaseR1L2L3R4R5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5R6 : public  virtual BaseR1L2L3R4R5R6L7, public virtual BaseR1L2L3R4R5R6R7
{
public: 
	BaseR1L2L3R4R5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4R5 : public  virtual BaseR1L2L3R4R5L6, public virtual BaseR1L2L3R4R5R6
{
public: 
	BaseR1L2L3R4R5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3R4 : public  virtual BaseR1L2L3R4L5, public virtual BaseR1L2L3R4R5
{
public: 
	BaseR1L2L3R4() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2L3 : public  virtual BaseR1L2L3L4, public virtual BaseR1L2L3R4
{
public: 
	BaseR1L2L3() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5L6L7L8L9
{
public: 
	BaseR1L2R3L4L5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5L6L7L8R9
{
public: 
	BaseR1L2R3L4L5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5L6L7L8 : public  virtual BaseR1L2R3L4L5L6L7L8L9, public virtual BaseR1L2R3L4L5L6L7L8R9
{
public: 
	BaseR1L2R3L4L5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5L6L7R8L9
{
public: 
	BaseR1L2R3L4L5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5L6L7R8R9
{
public: 
	BaseR1L2R3L4L5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5L6L7R8 : public  virtual BaseR1L2R3L4L5L6L7R8L9, public virtual BaseR1L2R3L4L5L6L7R8R9
{
public: 
	BaseR1L2R3L4L5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5L6L7 : public  virtual BaseR1L2R3L4L5L6L7L8, public virtual BaseR1L2R3L4L5L6L7R8
{
public: 
	BaseR1L2R3L4L5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5L6R7L8L9
{
public: 
	BaseR1L2R3L4L5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5L6R7L8R9
{
public: 
	BaseR1L2R3L4L5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5L6R7L8 : public  virtual BaseR1L2R3L4L5L6R7L8L9, public virtual BaseR1L2R3L4L5L6R7L8R9
{
public: 
	BaseR1L2R3L4L5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5L6R7R8L9
{
public: 
	BaseR1L2R3L4L5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5L6R7R8R9
{
public: 
	BaseR1L2R3L4L5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5L6R7R8 : public  virtual BaseR1L2R3L4L5L6R7R8L9, public virtual BaseR1L2R3L4L5L6R7R8R9
{
public: 
	BaseR1L2R3L4L5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5L6R7 : public  virtual BaseR1L2R3L4L5L6R7L8, public virtual BaseR1L2R3L4L5L6R7R8
{
public: 
	BaseR1L2R3L4L5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5L6 : public  virtual BaseR1L2R3L4L5L6L7, public virtual BaseR1L2R3L4L5L6R7
{
public: 
	BaseR1L2R3L4L5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5R6L7L8L9
{
public: 
	BaseR1L2R3L4L5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5R6L7L8R9
{
public: 
	BaseR1L2R3L4L5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5R6L7L8 : public  virtual BaseR1L2R3L4L5R6L7L8L9, public virtual BaseR1L2R3L4L5R6L7L8R9
{
public: 
	BaseR1L2R3L4L5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5R6L7R8L9
{
public: 
	BaseR1L2R3L4L5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5R6L7R8R9
{
public: 
	BaseR1L2R3L4L5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5R6L7R8 : public  virtual BaseR1L2R3L4L5R6L7R8L9, public virtual BaseR1L2R3L4L5R6L7R8R9
{
public: 
	BaseR1L2R3L4L5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5R6L7 : public  virtual BaseR1L2R3L4L5R6L7L8, public virtual BaseR1L2R3L4L5R6L7R8
{
public: 
	BaseR1L2R3L4L5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5R6R7L8L9
{
public: 
	BaseR1L2R3L4L5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5R6R7L8R9
{
public: 
	BaseR1L2R3L4L5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5R6R7L8 : public  virtual BaseR1L2R3L4L5R6R7L8L9, public virtual BaseR1L2R3L4L5R6R7L8R9
{
public: 
	BaseR1L2R3L4L5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5R6R7R8L9
{
public: 
	BaseR1L2R3L4L5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5R6R7R8R9
{
public: 
	BaseR1L2R3L4L5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5R6R7R8 : public  virtual BaseR1L2R3L4L5R6R7R8L9, public virtual BaseR1L2R3L4L5R6R7R8R9
{
public: 
	BaseR1L2R3L4L5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5R6R7 : public  virtual BaseR1L2R3L4L5R6R7L8, public virtual BaseR1L2R3L4L5R6R7R8
{
public: 
	BaseR1L2R3L4L5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5R6 : public  virtual BaseR1L2R3L4L5R6L7, public virtual BaseR1L2R3L4L5R6R7
{
public: 
	BaseR1L2R3L4L5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4L5 : public  virtual BaseR1L2R3L4L5L6, public virtual BaseR1L2R3L4L5R6
{
public: 
	BaseR1L2R3L4L5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5L6L7L8L9
{
public: 
	BaseR1L2R3L4R5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5L6L7L8R9
{
public: 
	BaseR1L2R3L4R5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5L6L7L8 : public  virtual BaseR1L2R3L4R5L6L7L8L9, public virtual BaseR1L2R3L4R5L6L7L8R9
{
public: 
	BaseR1L2R3L4R5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5L6L7R8L9
{
public: 
	BaseR1L2R3L4R5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5L6L7R8R9
{
public: 
	BaseR1L2R3L4R5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5L6L7R8 : public  virtual BaseR1L2R3L4R5L6L7R8L9, public virtual BaseR1L2R3L4R5L6L7R8R9
{
public: 
	BaseR1L2R3L4R5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5L6L7 : public  virtual BaseR1L2R3L4R5L6L7L8, public virtual BaseR1L2R3L4R5L6L7R8
{
public: 
	BaseR1L2R3L4R5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5L6R7L8L9
{
public: 
	BaseR1L2R3L4R5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5L6R7L8R9
{
public: 
	BaseR1L2R3L4R5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5L6R7L8 : public  virtual BaseR1L2R3L4R5L6R7L8L9, public virtual BaseR1L2R3L4R5L6R7L8R9
{
public: 
	BaseR1L2R3L4R5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5L6R7R8L9
{
public: 
	BaseR1L2R3L4R5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5L6R7R8R9
{
public: 
	BaseR1L2R3L4R5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5L6R7R8 : public  virtual BaseR1L2R3L4R5L6R7R8L9, public virtual BaseR1L2R3L4R5L6R7R8R9
{
public: 
	BaseR1L2R3L4R5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5L6R7 : public  virtual BaseR1L2R3L4R5L6R7L8, public virtual BaseR1L2R3L4R5L6R7R8
{
public: 
	BaseR1L2R3L4R5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5L6 : public  virtual BaseR1L2R3L4R5L6L7, public virtual BaseR1L2R3L4R5L6R7
{
public: 
	BaseR1L2R3L4R5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5R6L7L8L9
{
public: 
	BaseR1L2R3L4R5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5R6L7L8R9
{
public: 
	BaseR1L2R3L4R5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5R6L7L8 : public  virtual BaseR1L2R3L4R5R6L7L8L9, public virtual BaseR1L2R3L4R5R6L7L8R9
{
public: 
	BaseR1L2R3L4R5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5R6L7R8L9
{
public: 
	BaseR1L2R3L4R5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5R6L7R8R9
{
public: 
	BaseR1L2R3L4R5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5R6L7R8 : public  virtual BaseR1L2R3L4R5R6L7R8L9, public virtual BaseR1L2R3L4R5R6L7R8R9
{
public: 
	BaseR1L2R3L4R5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5R6L7 : public  virtual BaseR1L2R3L4R5R6L7L8, public virtual BaseR1L2R3L4R5R6L7R8
{
public: 
	BaseR1L2R3L4R5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5R6R7L8L9
{
public: 
	BaseR1L2R3L4R5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5R6R7L8R9
{
public: 
	BaseR1L2R3L4R5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5R6R7L8 : public  virtual BaseR1L2R3L4R5R6R7L8L9, public virtual BaseR1L2R3L4R5R6R7L8R9
{
public: 
	BaseR1L2R3L4R5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5R6R7R8L9
{
public: 
	BaseR1L2R3L4R5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5R6R7R8R9
{
public: 
	BaseR1L2R3L4R5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5R6R7R8 : public  virtual BaseR1L2R3L4R5R6R7R8L9, public virtual BaseR1L2R3L4R5R6R7R8R9
{
public: 
	BaseR1L2R3L4R5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5R6R7 : public  virtual BaseR1L2R3L4R5R6R7L8, public virtual BaseR1L2R3L4R5R6R7R8
{
public: 
	BaseR1L2R3L4R5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5R6 : public  virtual BaseR1L2R3L4R5R6L7, public virtual BaseR1L2R3L4R5R6R7
{
public: 
	BaseR1L2R3L4R5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4R5 : public  virtual BaseR1L2R3L4R5L6, public virtual BaseR1L2R3L4R5R6
{
public: 
	BaseR1L2R3L4R5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3L4 : public  virtual BaseR1L2R3L4L5, public virtual BaseR1L2R3L4R5
{
public: 
	BaseR1L2R3L4() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5L6L7L8L9
{
public: 
	BaseR1L2R3R4L5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5L6L7L8R9
{
public: 
	BaseR1L2R3R4L5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5L6L7L8 : public  virtual BaseR1L2R3R4L5L6L7L8L9, public virtual BaseR1L2R3R4L5L6L7L8R9
{
public: 
	BaseR1L2R3R4L5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5L6L7R8L9
{
public: 
	BaseR1L2R3R4L5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5L6L7R8R9
{
public: 
	BaseR1L2R3R4L5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5L6L7R8 : public  virtual BaseR1L2R3R4L5L6L7R8L9, public virtual BaseR1L2R3R4L5L6L7R8R9
{
public: 
	BaseR1L2R3R4L5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5L6L7 : public  virtual BaseR1L2R3R4L5L6L7L8, public virtual BaseR1L2R3R4L5L6L7R8
{
public: 
	BaseR1L2R3R4L5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5L6R7L8L9
{
public: 
	BaseR1L2R3R4L5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5L6R7L8R9
{
public: 
	BaseR1L2R3R4L5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5L6R7L8 : public  virtual BaseR1L2R3R4L5L6R7L8L9, public virtual BaseR1L2R3R4L5L6R7L8R9
{
public: 
	BaseR1L2R3R4L5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5L6R7R8L9
{
public: 
	BaseR1L2R3R4L5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5L6R7R8R9
{
public: 
	BaseR1L2R3R4L5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5L6R7R8 : public  virtual BaseR1L2R3R4L5L6R7R8L9, public virtual BaseR1L2R3R4L5L6R7R8R9
{
public: 
	BaseR1L2R3R4L5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5L6R7 : public  virtual BaseR1L2R3R4L5L6R7L8, public virtual BaseR1L2R3R4L5L6R7R8
{
public: 
	BaseR1L2R3R4L5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5L6 : public  virtual BaseR1L2R3R4L5L6L7, public virtual BaseR1L2R3R4L5L6R7
{
public: 
	BaseR1L2R3R4L5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5R6L7L8L9
{
public: 
	BaseR1L2R3R4L5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5R6L7L8R9
{
public: 
	BaseR1L2R3R4L5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5R6L7L8 : public  virtual BaseR1L2R3R4L5R6L7L8L9, public virtual BaseR1L2R3R4L5R6L7L8R9
{
public: 
	BaseR1L2R3R4L5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5R6L7R8L9
{
public: 
	BaseR1L2R3R4L5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5R6L7R8R9
{
public: 
	BaseR1L2R3R4L5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5R6L7R8 : public  virtual BaseR1L2R3R4L5R6L7R8L9, public virtual BaseR1L2R3R4L5R6L7R8R9
{
public: 
	BaseR1L2R3R4L5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5R6L7 : public  virtual BaseR1L2R3R4L5R6L7L8, public virtual BaseR1L2R3R4L5R6L7R8
{
public: 
	BaseR1L2R3R4L5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5R6R7L8L9
{
public: 
	BaseR1L2R3R4L5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5R6R7L8R9
{
public: 
	BaseR1L2R3R4L5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5R6R7L8 : public  virtual BaseR1L2R3R4L5R6R7L8L9, public virtual BaseR1L2R3R4L5R6R7L8R9
{
public: 
	BaseR1L2R3R4L5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5R6R7R8L9
{
public: 
	BaseR1L2R3R4L5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5R6R7R8R9
{
public: 
	BaseR1L2R3R4L5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5R6R7R8 : public  virtual BaseR1L2R3R4L5R6R7R8L9, public virtual BaseR1L2R3R4L5R6R7R8R9
{
public: 
	BaseR1L2R3R4L5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5R6R7 : public  virtual BaseR1L2R3R4L5R6R7L8, public virtual BaseR1L2R3R4L5R6R7R8
{
public: 
	BaseR1L2R3R4L5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5R6 : public  virtual BaseR1L2R3R4L5R6L7, public virtual BaseR1L2R3R4L5R6R7
{
public: 
	BaseR1L2R3R4L5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4L5 : public  virtual BaseR1L2R3R4L5L6, public virtual BaseR1L2R3R4L5R6
{
public: 
	BaseR1L2R3R4L5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5L6L7L8L9
{
public: 
	BaseR1L2R3R4R5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5L6L7L8R9
{
public: 
	BaseR1L2R3R4R5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5L6L7L8 : public  virtual BaseR1L2R3R4R5L6L7L8L9, public virtual BaseR1L2R3R4R5L6L7L8R9
{
public: 
	BaseR1L2R3R4R5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5L6L7R8L9
{
public: 
	BaseR1L2R3R4R5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5L6L7R8R9
{
public: 
	BaseR1L2R3R4R5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5L6L7R8 : public  virtual BaseR1L2R3R4R5L6L7R8L9, public virtual BaseR1L2R3R4R5L6L7R8R9
{
public: 
	BaseR1L2R3R4R5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5L6L7 : public  virtual BaseR1L2R3R4R5L6L7L8, public virtual BaseR1L2R3R4R5L6L7R8
{
public: 
	BaseR1L2R3R4R5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5L6R7L8L9
{
public: 
	BaseR1L2R3R4R5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5L6R7L8R9
{
public: 
	BaseR1L2R3R4R5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5L6R7L8 : public  virtual BaseR1L2R3R4R5L6R7L8L9, public virtual BaseR1L2R3R4R5L6R7L8R9
{
public: 
	BaseR1L2R3R4R5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5L6R7R8L9
{
public: 
	BaseR1L2R3R4R5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5L6R7R8R9
{
public: 
	BaseR1L2R3R4R5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5L6R7R8 : public  virtual BaseR1L2R3R4R5L6R7R8L9, public virtual BaseR1L2R3R4R5L6R7R8R9
{
public: 
	BaseR1L2R3R4R5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5L6R7 : public  virtual BaseR1L2R3R4R5L6R7L8, public virtual BaseR1L2R3R4R5L6R7R8
{
public: 
	BaseR1L2R3R4R5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5L6 : public  virtual BaseR1L2R3R4R5L6L7, public virtual BaseR1L2R3R4R5L6R7
{
public: 
	BaseR1L2R3R4R5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5R6L7L8L9
{
public: 
	BaseR1L2R3R4R5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5R6L7L8R9
{
public: 
	BaseR1L2R3R4R5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5R6L7L8 : public  virtual BaseR1L2R3R4R5R6L7L8L9, public virtual BaseR1L2R3R4R5R6L7L8R9
{
public: 
	BaseR1L2R3R4R5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5R6L7R8L9
{
public: 
	BaseR1L2R3R4R5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5R6L7R8R9
{
public: 
	BaseR1L2R3R4R5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5R6L7R8 : public  virtual BaseR1L2R3R4R5R6L7R8L9, public virtual BaseR1L2R3R4R5R6L7R8R9
{
public: 
	BaseR1L2R3R4R5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5R6L7 : public  virtual BaseR1L2R3R4R5R6L7L8, public virtual BaseR1L2R3R4R5R6L7R8
{
public: 
	BaseR1L2R3R4R5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5R6R7L8L9
{
public: 
	BaseR1L2R3R4R5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5R6R7L8R9
{
public: 
	BaseR1L2R3R4R5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5R6R7L8 : public  virtual BaseR1L2R3R4R5R6R7L8L9, public virtual BaseR1L2R3R4R5R6R7L8R9
{
public: 
	BaseR1L2R3R4R5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5R6R7R8L9
{
public: 
	BaseR1L2R3R4R5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5R6R7R8R9
{
public: 
	BaseR1L2R3R4R5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5R6R7R8 : public  virtual BaseR1L2R3R4R5R6R7R8L9, public virtual BaseR1L2R3R4R5R6R7R8R9
{
public: 
	BaseR1L2R3R4R5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5R6R7 : public  virtual BaseR1L2R3R4R5R6R7L8, public virtual BaseR1L2R3R4R5R6R7R8
{
public: 
	BaseR1L2R3R4R5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5R6 : public  virtual BaseR1L2R3R4R5R6L7, public virtual BaseR1L2R3R4R5R6R7
{
public: 
	BaseR1L2R3R4R5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4R5 : public  virtual BaseR1L2R3R4R5L6, public virtual BaseR1L2R3R4R5R6
{
public: 
	BaseR1L2R3R4R5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3R4 : public  virtual BaseR1L2R3R4L5, public virtual BaseR1L2R3R4R5
{
public: 
	BaseR1L2R3R4() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2R3 : public  virtual BaseR1L2R3L4, public virtual BaseR1L2R3R4
{
public: 
	BaseR1L2R3() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1L2 : public  virtual BaseR1L2L3, public virtual BaseR1L2R3
{
public: 
	BaseR1L2() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5L6L7L8L9
{
public: 
	BaseR1R2L3L4L5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5L6L7L8R9
{
public: 
	BaseR1R2L3L4L5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5L6L7L8 : public  virtual BaseR1R2L3L4L5L6L7L8L9, public virtual BaseR1R2L3L4L5L6L7L8R9
{
public: 
	BaseR1R2L3L4L5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5L6L7R8L9
{
public: 
	BaseR1R2L3L4L5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5L6L7R8R9
{
public: 
	BaseR1R2L3L4L5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5L6L7R8 : public  virtual BaseR1R2L3L4L5L6L7R8L9, public virtual BaseR1R2L3L4L5L6L7R8R9
{
public: 
	BaseR1R2L3L4L5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5L6L7 : public  virtual BaseR1R2L3L4L5L6L7L8, public virtual BaseR1R2L3L4L5L6L7R8
{
public: 
	BaseR1R2L3L4L5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5L6R7L8L9
{
public: 
	BaseR1R2L3L4L5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5L6R7L8R9
{
public: 
	BaseR1R2L3L4L5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5L6R7L8 : public  virtual BaseR1R2L3L4L5L6R7L8L9, public virtual BaseR1R2L3L4L5L6R7L8R9
{
public: 
	BaseR1R2L3L4L5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5L6R7R8L9
{
public: 
	BaseR1R2L3L4L5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5L6R7R8R9
{
public: 
	BaseR1R2L3L4L5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5L6R7R8 : public  virtual BaseR1R2L3L4L5L6R7R8L9, public virtual BaseR1R2L3L4L5L6R7R8R9
{
public: 
	BaseR1R2L3L4L5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5L6R7 : public  virtual BaseR1R2L3L4L5L6R7L8, public virtual BaseR1R2L3L4L5L6R7R8
{
public: 
	BaseR1R2L3L4L5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5L6 : public  virtual BaseR1R2L3L4L5L6L7, public virtual BaseR1R2L3L4L5L6R7
{
public: 
	BaseR1R2L3L4L5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5R6L7L8L9
{
public: 
	BaseR1R2L3L4L5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5R6L7L8R9
{
public: 
	BaseR1R2L3L4L5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5R6L7L8 : public  virtual BaseR1R2L3L4L5R6L7L8L9, public virtual BaseR1R2L3L4L5R6L7L8R9
{
public: 
	BaseR1R2L3L4L5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5R6L7R8L9
{
public: 
	BaseR1R2L3L4L5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5R6L7R8R9
{
public: 
	BaseR1R2L3L4L5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5R6L7R8 : public  virtual BaseR1R2L3L4L5R6L7R8L9, public virtual BaseR1R2L3L4L5R6L7R8R9
{
public: 
	BaseR1R2L3L4L5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5R6L7 : public  virtual BaseR1R2L3L4L5R6L7L8, public virtual BaseR1R2L3L4L5R6L7R8
{
public: 
	BaseR1R2L3L4L5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5R6R7L8L9
{
public: 
	BaseR1R2L3L4L5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5R6R7L8R9
{
public: 
	BaseR1R2L3L4L5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5R6R7L8 : public  virtual BaseR1R2L3L4L5R6R7L8L9, public virtual BaseR1R2L3L4L5R6R7L8R9
{
public: 
	BaseR1R2L3L4L5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5R6R7R8L9
{
public: 
	BaseR1R2L3L4L5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5R6R7R8R9
{
public: 
	BaseR1R2L3L4L5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5R6R7R8 : public  virtual BaseR1R2L3L4L5R6R7R8L9, public virtual BaseR1R2L3L4L5R6R7R8R9
{
public: 
	BaseR1R2L3L4L5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5R6R7 : public  virtual BaseR1R2L3L4L5R6R7L8, public virtual BaseR1R2L3L4L5R6R7R8
{
public: 
	BaseR1R2L3L4L5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5R6 : public  virtual BaseR1R2L3L4L5R6L7, public virtual BaseR1R2L3L4L5R6R7
{
public: 
	BaseR1R2L3L4L5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4L5 : public  virtual BaseR1R2L3L4L5L6, public virtual BaseR1R2L3L4L5R6
{
public: 
	BaseR1R2L3L4L5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5L6L7L8L9
{
public: 
	BaseR1R2L3L4R5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5L6L7L8R9
{
public: 
	BaseR1R2L3L4R5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5L6L7L8 : public  virtual BaseR1R2L3L4R5L6L7L8L9, public virtual BaseR1R2L3L4R5L6L7L8R9
{
public: 
	BaseR1R2L3L4R5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5L6L7R8L9
{
public: 
	BaseR1R2L3L4R5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5L6L7R8R9
{
public: 
	BaseR1R2L3L4R5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5L6L7R8 : public  virtual BaseR1R2L3L4R5L6L7R8L9, public virtual BaseR1R2L3L4R5L6L7R8R9
{
public: 
	BaseR1R2L3L4R5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5L6L7 : public  virtual BaseR1R2L3L4R5L6L7L8, public virtual BaseR1R2L3L4R5L6L7R8
{
public: 
	BaseR1R2L3L4R5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5L6R7L8L9
{
public: 
	BaseR1R2L3L4R5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5L6R7L8R9
{
public: 
	BaseR1R2L3L4R5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5L6R7L8 : public  virtual BaseR1R2L3L4R5L6R7L8L9, public virtual BaseR1R2L3L4R5L6R7L8R9
{
public: 
	BaseR1R2L3L4R5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5L6R7R8L9
{
public: 
	BaseR1R2L3L4R5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5L6R7R8R9
{
public: 
	BaseR1R2L3L4R5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5L6R7R8 : public  virtual BaseR1R2L3L4R5L6R7R8L9, public virtual BaseR1R2L3L4R5L6R7R8R9
{
public: 
	BaseR1R2L3L4R5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5L6R7 : public  virtual BaseR1R2L3L4R5L6R7L8, public virtual BaseR1R2L3L4R5L6R7R8
{
public: 
	BaseR1R2L3L4R5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5L6 : public  virtual BaseR1R2L3L4R5L6L7, public virtual BaseR1R2L3L4R5L6R7
{
public: 
	BaseR1R2L3L4R5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5R6L7L8L9
{
public: 
	BaseR1R2L3L4R5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5R6L7L8R9
{
public: 
	BaseR1R2L3L4R5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5R6L7L8 : public  virtual BaseR1R2L3L4R5R6L7L8L9, public virtual BaseR1R2L3L4R5R6L7L8R9
{
public: 
	BaseR1R2L3L4R5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5R6L7R8L9
{
public: 
	BaseR1R2L3L4R5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5R6L7R8R9
{
public: 
	BaseR1R2L3L4R5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5R6L7R8 : public  virtual BaseR1R2L3L4R5R6L7R8L9, public virtual BaseR1R2L3L4R5R6L7R8R9
{
public: 
	BaseR1R2L3L4R5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5R6L7 : public  virtual BaseR1R2L3L4R5R6L7L8, public virtual BaseR1R2L3L4R5R6L7R8
{
public: 
	BaseR1R2L3L4R5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5R6R7L8L9
{
public: 
	BaseR1R2L3L4R5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5R6R7L8R9
{
public: 
	BaseR1R2L3L4R5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5R6R7L8 : public  virtual BaseR1R2L3L4R5R6R7L8L9, public virtual BaseR1R2L3L4R5R6R7L8R9
{
public: 
	BaseR1R2L3L4R5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5R6R7R8L9
{
public: 
	BaseR1R2L3L4R5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5R6R7R8R9
{
public: 
	BaseR1R2L3L4R5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5R6R7R8 : public  virtual BaseR1R2L3L4R5R6R7R8L9, public virtual BaseR1R2L3L4R5R6R7R8R9
{
public: 
	BaseR1R2L3L4R5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5R6R7 : public  virtual BaseR1R2L3L4R5R6R7L8, public virtual BaseR1R2L3L4R5R6R7R8
{
public: 
	BaseR1R2L3L4R5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5R6 : public  virtual BaseR1R2L3L4R5R6L7, public virtual BaseR1R2L3L4R5R6R7
{
public: 
	BaseR1R2L3L4R5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4R5 : public  virtual BaseR1R2L3L4R5L6, public virtual BaseR1R2L3L4R5R6
{
public: 
	BaseR1R2L3L4R5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3L4 : public  virtual BaseR1R2L3L4L5, public virtual BaseR1R2L3L4R5
{
public: 
	BaseR1R2L3L4() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5L6L7L8L9
{
public: 
	BaseR1R2L3R4L5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5L6L7L8R9
{
public: 
	BaseR1R2L3R4L5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5L6L7L8 : public  virtual BaseR1R2L3R4L5L6L7L8L9, public virtual BaseR1R2L3R4L5L6L7L8R9
{
public: 
	BaseR1R2L3R4L5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5L6L7R8L9
{
public: 
	BaseR1R2L3R4L5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5L6L7R8R9
{
public: 
	BaseR1R2L3R4L5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5L6L7R8 : public  virtual BaseR1R2L3R4L5L6L7R8L9, public virtual BaseR1R2L3R4L5L6L7R8R9
{
public: 
	BaseR1R2L3R4L5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5L6L7 : public  virtual BaseR1R2L3R4L5L6L7L8, public virtual BaseR1R2L3R4L5L6L7R8
{
public: 
	BaseR1R2L3R4L5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5L6R7L8L9
{
public: 
	BaseR1R2L3R4L5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5L6R7L8R9
{
public: 
	BaseR1R2L3R4L5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5L6R7L8 : public  virtual BaseR1R2L3R4L5L6R7L8L9, public virtual BaseR1R2L3R4L5L6R7L8R9
{
public: 
	BaseR1R2L3R4L5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5L6R7R8L9
{
public: 
	BaseR1R2L3R4L5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5L6R7R8R9
{
public: 
	BaseR1R2L3R4L5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5L6R7R8 : public  virtual BaseR1R2L3R4L5L6R7R8L9, public virtual BaseR1R2L3R4L5L6R7R8R9
{
public: 
	BaseR1R2L3R4L5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5L6R7 : public  virtual BaseR1R2L3R4L5L6R7L8, public virtual BaseR1R2L3R4L5L6R7R8
{
public: 
	BaseR1R2L3R4L5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5L6 : public  virtual BaseR1R2L3R4L5L6L7, public virtual BaseR1R2L3R4L5L6R7
{
public: 
	BaseR1R2L3R4L5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5R6L7L8L9
{
public: 
	BaseR1R2L3R4L5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5R6L7L8R9
{
public: 
	BaseR1R2L3R4L5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5R6L7L8 : public  virtual BaseR1R2L3R4L5R6L7L8L9, public virtual BaseR1R2L3R4L5R6L7L8R9
{
public: 
	BaseR1R2L3R4L5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5R6L7R8L9
{
public: 
	BaseR1R2L3R4L5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5R6L7R8R9
{
public: 
	BaseR1R2L3R4L5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5R6L7R8 : public  virtual BaseR1R2L3R4L5R6L7R8L9, public virtual BaseR1R2L3R4L5R6L7R8R9
{
public: 
	BaseR1R2L3R4L5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5R6L7 : public  virtual BaseR1R2L3R4L5R6L7L8, public virtual BaseR1R2L3R4L5R6L7R8
{
public: 
	BaseR1R2L3R4L5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5R6R7L8L9
{
public: 
	BaseR1R2L3R4L5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5R6R7L8R9
{
public: 
	BaseR1R2L3R4L5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5R6R7L8 : public  virtual BaseR1R2L3R4L5R6R7L8L9, public virtual BaseR1R2L3R4L5R6R7L8R9
{
public: 
	BaseR1R2L3R4L5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5R6R7R8L9
{
public: 
	BaseR1R2L3R4L5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5R6R7R8R9
{
public: 
	BaseR1R2L3R4L5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5R6R7R8 : public  virtual BaseR1R2L3R4L5R6R7R8L9, public virtual BaseR1R2L3R4L5R6R7R8R9
{
public: 
	BaseR1R2L3R4L5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5R6R7 : public  virtual BaseR1R2L3R4L5R6R7L8, public virtual BaseR1R2L3R4L5R6R7R8
{
public: 
	BaseR1R2L3R4L5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5R6 : public  virtual BaseR1R2L3R4L5R6L7, public virtual BaseR1R2L3R4L5R6R7
{
public: 
	BaseR1R2L3R4L5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4L5 : public  virtual BaseR1R2L3R4L5L6, public virtual BaseR1R2L3R4L5R6
{
public: 
	BaseR1R2L3R4L5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5L6L7L8L9
{
public: 
	BaseR1R2L3R4R5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5L6L7L8R9
{
public: 
	BaseR1R2L3R4R5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5L6L7L8 : public  virtual BaseR1R2L3R4R5L6L7L8L9, public virtual BaseR1R2L3R4R5L6L7L8R9
{
public: 
	BaseR1R2L3R4R5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5L6L7R8L9
{
public: 
	BaseR1R2L3R4R5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5L6L7R8R9
{
public: 
	BaseR1R2L3R4R5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5L6L7R8 : public  virtual BaseR1R2L3R4R5L6L7R8L9, public virtual BaseR1R2L3R4R5L6L7R8R9
{
public: 
	BaseR1R2L3R4R5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5L6L7 : public  virtual BaseR1R2L3R4R5L6L7L8, public virtual BaseR1R2L3R4R5L6L7R8
{
public: 
	BaseR1R2L3R4R5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5L6R7L8L9
{
public: 
	BaseR1R2L3R4R5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5L6R7L8R9
{
public: 
	BaseR1R2L3R4R5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5L6R7L8 : public  virtual BaseR1R2L3R4R5L6R7L8L9, public virtual BaseR1R2L3R4R5L6R7L8R9
{
public: 
	BaseR1R2L3R4R5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5L6R7R8L9
{
public: 
	BaseR1R2L3R4R5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5L6R7R8R9
{
public: 
	BaseR1R2L3R4R5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5L6R7R8 : public  virtual BaseR1R2L3R4R5L6R7R8L9, public virtual BaseR1R2L3R4R5L6R7R8R9
{
public: 
	BaseR1R2L3R4R5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5L6R7 : public  virtual BaseR1R2L3R4R5L6R7L8, public virtual BaseR1R2L3R4R5L6R7R8
{
public: 
	BaseR1R2L3R4R5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5L6 : public  virtual BaseR1R2L3R4R5L6L7, public virtual BaseR1R2L3R4R5L6R7
{
public: 
	BaseR1R2L3R4R5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5R6L7L8L9
{
public: 
	BaseR1R2L3R4R5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5R6L7L8R9
{
public: 
	BaseR1R2L3R4R5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5R6L7L8 : public  virtual BaseR1R2L3R4R5R6L7L8L9, public virtual BaseR1R2L3R4R5R6L7L8R9
{
public: 
	BaseR1R2L3R4R5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5R6L7R8L9
{
public: 
	BaseR1R2L3R4R5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5R6L7R8R9
{
public: 
	BaseR1R2L3R4R5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5R6L7R8 : public  virtual BaseR1R2L3R4R5R6L7R8L9, public virtual BaseR1R2L3R4R5R6L7R8R9
{
public: 
	BaseR1R2L3R4R5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5R6L7 : public  virtual BaseR1R2L3R4R5R6L7L8, public virtual BaseR1R2L3R4R5R6L7R8
{
public: 
	BaseR1R2L3R4R5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5R6R7L8L9
{
public: 
	BaseR1R2L3R4R5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5R6R7L8R9
{
public: 
	BaseR1R2L3R4R5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5R6R7L8 : public  virtual BaseR1R2L3R4R5R6R7L8L9, public virtual BaseR1R2L3R4R5R6R7L8R9
{
public: 
	BaseR1R2L3R4R5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5R6R7R8L9
{
public: 
	BaseR1R2L3R4R5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5R6R7R8R9
{
public: 
	BaseR1R2L3R4R5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5R6R7R8 : public  virtual BaseR1R2L3R4R5R6R7R8L9, public virtual BaseR1R2L3R4R5R6R7R8R9
{
public: 
	BaseR1R2L3R4R5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5R6R7 : public  virtual BaseR1R2L3R4R5R6R7L8, public virtual BaseR1R2L3R4R5R6R7R8
{
public: 
	BaseR1R2L3R4R5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5R6 : public  virtual BaseR1R2L3R4R5R6L7, public virtual BaseR1R2L3R4R5R6R7
{
public: 
	BaseR1R2L3R4R5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4R5 : public  virtual BaseR1R2L3R4R5L6, public virtual BaseR1R2L3R4R5R6
{
public: 
	BaseR1R2L3R4R5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3R4 : public  virtual BaseR1R2L3R4L5, public virtual BaseR1R2L3R4R5
{
public: 
	BaseR1R2L3R4() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2L3 : public  virtual BaseR1R2L3L4, public virtual BaseR1R2L3R4
{
public: 
	BaseR1R2L3() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5L6L7L8L9
{
public: 
	BaseR1R2R3L4L5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5L6L7L8R9
{
public: 
	BaseR1R2R3L4L5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5L6L7L8 : public  virtual BaseR1R2R3L4L5L6L7L8L9, public virtual BaseR1R2R3L4L5L6L7L8R9
{
public: 
	BaseR1R2R3L4L5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5L6L7R8L9
{
public: 
	BaseR1R2R3L4L5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5L6L7R8R9
{
public: 
	BaseR1R2R3L4L5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5L6L7R8 : public  virtual BaseR1R2R3L4L5L6L7R8L9, public virtual BaseR1R2R3L4L5L6L7R8R9
{
public: 
	BaseR1R2R3L4L5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5L6L7 : public  virtual BaseR1R2R3L4L5L6L7L8, public virtual BaseR1R2R3L4L5L6L7R8
{
public: 
	BaseR1R2R3L4L5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5L6R7L8L9
{
public: 
	BaseR1R2R3L4L5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5L6R7L8R9
{
public: 
	BaseR1R2R3L4L5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5L6R7L8 : public  virtual BaseR1R2R3L4L5L6R7L8L9, public virtual BaseR1R2R3L4L5L6R7L8R9
{
public: 
	BaseR1R2R3L4L5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5L6R7R8L9
{
public: 
	BaseR1R2R3L4L5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5L6R7R8R9
{
public: 
	BaseR1R2R3L4L5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5L6R7R8 : public  virtual BaseR1R2R3L4L5L6R7R8L9, public virtual BaseR1R2R3L4L5L6R7R8R9
{
public: 
	BaseR1R2R3L4L5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5L6R7 : public  virtual BaseR1R2R3L4L5L6R7L8, public virtual BaseR1R2R3L4L5L6R7R8
{
public: 
	BaseR1R2R3L4L5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5L6 : public  virtual BaseR1R2R3L4L5L6L7, public virtual BaseR1R2R3L4L5L6R7
{
public: 
	BaseR1R2R3L4L5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5R6L7L8L9
{
public: 
	BaseR1R2R3L4L5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5R6L7L8R9
{
public: 
	BaseR1R2R3L4L5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5R6L7L8 : public  virtual BaseR1R2R3L4L5R6L7L8L9, public virtual BaseR1R2R3L4L5R6L7L8R9
{
public: 
	BaseR1R2R3L4L5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5R6L7R8L9
{
public: 
	BaseR1R2R3L4L5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5R6L7R8R9
{
public: 
	BaseR1R2R3L4L5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5R6L7R8 : public  virtual BaseR1R2R3L4L5R6L7R8L9, public virtual BaseR1R2R3L4L5R6L7R8R9
{
public: 
	BaseR1R2R3L4L5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5R6L7 : public  virtual BaseR1R2R3L4L5R6L7L8, public virtual BaseR1R2R3L4L5R6L7R8
{
public: 
	BaseR1R2R3L4L5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5R6R7L8L9
{
public: 
	BaseR1R2R3L4L5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5R6R7L8R9
{
public: 
	BaseR1R2R3L4L5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5R6R7L8 : public  virtual BaseR1R2R3L4L5R6R7L8L9, public virtual BaseR1R2R3L4L5R6R7L8R9
{
public: 
	BaseR1R2R3L4L5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5R6R7R8L9
{
public: 
	BaseR1R2R3L4L5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5R6R7R8R9
{
public: 
	BaseR1R2R3L4L5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5R6R7R8 : public  virtual BaseR1R2R3L4L5R6R7R8L9, public virtual BaseR1R2R3L4L5R6R7R8R9
{
public: 
	BaseR1R2R3L4L5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5R6R7 : public  virtual BaseR1R2R3L4L5R6R7L8, public virtual BaseR1R2R3L4L5R6R7R8
{
public: 
	BaseR1R2R3L4L5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5R6 : public  virtual BaseR1R2R3L4L5R6L7, public virtual BaseR1R2R3L4L5R6R7
{
public: 
	BaseR1R2R3L4L5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4L5 : public  virtual BaseR1R2R3L4L5L6, public virtual BaseR1R2R3L4L5R6
{
public: 
	BaseR1R2R3L4L5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5L6L7L8L9
{
public: 
	BaseR1R2R3L4R5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5L6L7L8R9
{
public: 
	BaseR1R2R3L4R5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5L6L7L8 : public  virtual BaseR1R2R3L4R5L6L7L8L9, public virtual BaseR1R2R3L4R5L6L7L8R9
{
public: 
	BaseR1R2R3L4R5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5L6L7R8L9
{
public: 
	BaseR1R2R3L4R5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5L6L7R8R9
{
public: 
	BaseR1R2R3L4R5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5L6L7R8 : public  virtual BaseR1R2R3L4R5L6L7R8L9, public virtual BaseR1R2R3L4R5L6L7R8R9
{
public: 
	BaseR1R2R3L4R5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5L6L7 : public  virtual BaseR1R2R3L4R5L6L7L8, public virtual BaseR1R2R3L4R5L6L7R8
{
public: 
	BaseR1R2R3L4R5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5L6R7L8L9
{
public: 
	BaseR1R2R3L4R5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5L6R7L8R9
{
public: 
	BaseR1R2R3L4R5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5L6R7L8 : public  virtual BaseR1R2R3L4R5L6R7L8L9, public virtual BaseR1R2R3L4R5L6R7L8R9
{
public: 
	BaseR1R2R3L4R5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5L6R7R8L9
{
public: 
	BaseR1R2R3L4R5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5L6R7R8R9
{
public: 
	BaseR1R2R3L4R5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5L6R7R8 : public  virtual BaseR1R2R3L4R5L6R7R8L9, public virtual BaseR1R2R3L4R5L6R7R8R9
{
public: 
	BaseR1R2R3L4R5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5L6R7 : public  virtual BaseR1R2R3L4R5L6R7L8, public virtual BaseR1R2R3L4R5L6R7R8
{
public: 
	BaseR1R2R3L4R5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5L6 : public  virtual BaseR1R2R3L4R5L6L7, public virtual BaseR1R2R3L4R5L6R7
{
public: 
	BaseR1R2R3L4R5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5R6L7L8L9
{
public: 
	BaseR1R2R3L4R5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5R6L7L8R9
{
public: 
	BaseR1R2R3L4R5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5R6L7L8 : public  virtual BaseR1R2R3L4R5R6L7L8L9, public virtual BaseR1R2R3L4R5R6L7L8R9
{
public: 
	BaseR1R2R3L4R5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5R6L7R8L9
{
public: 
	BaseR1R2R3L4R5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5R6L7R8R9
{
public: 
	BaseR1R2R3L4R5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5R6L7R8 : public  virtual BaseR1R2R3L4R5R6L7R8L9, public virtual BaseR1R2R3L4R5R6L7R8R9
{
public: 
	BaseR1R2R3L4R5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5R6L7 : public  virtual BaseR1R2R3L4R5R6L7L8, public virtual BaseR1R2R3L4R5R6L7R8
{
public: 
	BaseR1R2R3L4R5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5R6R7L8L9
{
public: 
	BaseR1R2R3L4R5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5R6R7L8R9
{
public: 
	BaseR1R2R3L4R5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5R6R7L8 : public  virtual BaseR1R2R3L4R5R6R7L8L9, public virtual BaseR1R2R3L4R5R6R7L8R9
{
public: 
	BaseR1R2R3L4R5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5R6R7R8L9
{
public: 
	BaseR1R2R3L4R5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5R6R7R8R9
{
public: 
	BaseR1R2R3L4R5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5R6R7R8 : public  virtual BaseR1R2R3L4R5R6R7R8L9, public virtual BaseR1R2R3L4R5R6R7R8R9
{
public: 
	BaseR1R2R3L4R5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5R6R7 : public  virtual BaseR1R2R3L4R5R6R7L8, public virtual BaseR1R2R3L4R5R6R7R8
{
public: 
	BaseR1R2R3L4R5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5R6 : public  virtual BaseR1R2R3L4R5R6L7, public virtual BaseR1R2R3L4R5R6R7
{
public: 
	BaseR1R2R3L4R5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4R5 : public  virtual BaseR1R2R3L4R5L6, public virtual BaseR1R2R3L4R5R6
{
public: 
	BaseR1R2R3L4R5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3L4 : public  virtual BaseR1R2R3L4L5, public virtual BaseR1R2R3L4R5
{
public: 
	BaseR1R2R3L4() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5L6L7L8L9
{
public: 
	BaseR1R2R3R4L5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5L6L7L8R9
{
public: 
	BaseR1R2R3R4L5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5L6L7L8 : public  virtual BaseR1R2R3R4L5L6L7L8L9, public virtual BaseR1R2R3R4L5L6L7L8R9
{
public: 
	BaseR1R2R3R4L5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5L6L7R8L9
{
public: 
	BaseR1R2R3R4L5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5L6L7R8R9
{
public: 
	BaseR1R2R3R4L5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5L6L7R8 : public  virtual BaseR1R2R3R4L5L6L7R8L9, public virtual BaseR1R2R3R4L5L6L7R8R9
{
public: 
	BaseR1R2R3R4L5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5L6L7 : public  virtual BaseR1R2R3R4L5L6L7L8, public virtual BaseR1R2R3R4L5L6L7R8
{
public: 
	BaseR1R2R3R4L5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5L6R7L8L9
{
public: 
	BaseR1R2R3R4L5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5L6R7L8R9
{
public: 
	BaseR1R2R3R4L5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5L6R7L8 : public  virtual BaseR1R2R3R4L5L6R7L8L9, public virtual BaseR1R2R3R4L5L6R7L8R9
{
public: 
	BaseR1R2R3R4L5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5L6R7R8L9
{
public: 
	BaseR1R2R3R4L5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5L6R7R8R9
{
public: 
	BaseR1R2R3R4L5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5L6R7R8 : public  virtual BaseR1R2R3R4L5L6R7R8L9, public virtual BaseR1R2R3R4L5L6R7R8R9
{
public: 
	BaseR1R2R3R4L5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5L6R7 : public  virtual BaseR1R2R3R4L5L6R7L8, public virtual BaseR1R2R3R4L5L6R7R8
{
public: 
	BaseR1R2R3R4L5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5L6 : public  virtual BaseR1R2R3R4L5L6L7, public virtual BaseR1R2R3R4L5L6R7
{
public: 
	BaseR1R2R3R4L5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5R6L7L8L9
{
public: 
	BaseR1R2R3R4L5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5R6L7L8R9
{
public: 
	BaseR1R2R3R4L5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5R6L7L8 : public  virtual BaseR1R2R3R4L5R6L7L8L9, public virtual BaseR1R2R3R4L5R6L7L8R9
{
public: 
	BaseR1R2R3R4L5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5R6L7R8L9
{
public: 
	BaseR1R2R3R4L5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5R6L7R8R9
{
public: 
	BaseR1R2R3R4L5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5R6L7R8 : public  virtual BaseR1R2R3R4L5R6L7R8L9, public virtual BaseR1R2R3R4L5R6L7R8R9
{
public: 
	BaseR1R2R3R4L5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5R6L7 : public  virtual BaseR1R2R3R4L5R6L7L8, public virtual BaseR1R2R3R4L5R6L7R8
{
public: 
	BaseR1R2R3R4L5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5R6R7L8L9
{
public: 
	BaseR1R2R3R4L5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5R6R7L8R9
{
public: 
	BaseR1R2R3R4L5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5R6R7L8 : public  virtual BaseR1R2R3R4L5R6R7L8L9, public virtual BaseR1R2R3R4L5R6R7L8R9
{
public: 
	BaseR1R2R3R4L5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5R6R7R8L9
{
public: 
	BaseR1R2R3R4L5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5R6R7R8R9
{
public: 
	BaseR1R2R3R4L5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5R6R7R8 : public  virtual BaseR1R2R3R4L5R6R7R8L9, public virtual BaseR1R2R3R4L5R6R7R8R9
{
public: 
	BaseR1R2R3R4L5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5R6R7 : public  virtual BaseR1R2R3R4L5R6R7L8, public virtual BaseR1R2R3R4L5R6R7R8
{
public: 
	BaseR1R2R3R4L5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5R6 : public  virtual BaseR1R2R3R4L5R6L7, public virtual BaseR1R2R3R4L5R6R7
{
public: 
	BaseR1R2R3R4L5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4L5 : public  virtual BaseR1R2R3R4L5L6, public virtual BaseR1R2R3R4L5R6
{
public: 
	BaseR1R2R3R4L5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5L6L7L8L9
{
public: 
	BaseR1R2R3R4R5L6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5L6L7L8R9
{
public: 
	BaseR1R2R3R4R5L6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5L6L7L8 : public  virtual BaseR1R2R3R4R5L6L7L8L9, public virtual BaseR1R2R3R4R5L6L7L8R9
{
public: 
	BaseR1R2R3R4R5L6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5L6L7R8L9
{
public: 
	BaseR1R2R3R4R5L6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5L6L7R8R9
{
public: 
	BaseR1R2R3R4R5L6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5L6L7R8 : public  virtual BaseR1R2R3R4R5L6L7R8L9, public virtual BaseR1R2R3R4R5L6L7R8R9
{
public: 
	BaseR1R2R3R4R5L6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5L6L7 : public  virtual BaseR1R2R3R4R5L6L7L8, public virtual BaseR1R2R3R4R5L6L7R8
{
public: 
	BaseR1R2R3R4R5L6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5L6R7L8L9
{
public: 
	BaseR1R2R3R4R5L6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5L6R7L8R9
{
public: 
	BaseR1R2R3R4R5L6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5L6R7L8 : public  virtual BaseR1R2R3R4R5L6R7L8L9, public virtual BaseR1R2R3R4R5L6R7L8R9
{
public: 
	BaseR1R2R3R4R5L6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5L6R7R8L9
{
public: 
	BaseR1R2R3R4R5L6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5L6R7R8R9
{
public: 
	BaseR1R2R3R4R5L6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5L6R7R8 : public  virtual BaseR1R2R3R4R5L6R7R8L9, public virtual BaseR1R2R3R4R5L6R7R8R9
{
public: 
	BaseR1R2R3R4R5L6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5L6R7 : public  virtual BaseR1R2R3R4R5L6R7L8, public virtual BaseR1R2R3R4R5L6R7R8
{
public: 
	BaseR1R2R3R4R5L6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5L6 : public  virtual BaseR1R2R3R4R5L6L7, public virtual BaseR1R2R3R4R5L6R7
{
public: 
	BaseR1R2R3R4R5L6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5R6L7L8L9
{
public: 
	BaseR1R2R3R4R5R6L7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5R6L7L8R9
{
public: 
	BaseR1R2R3R4R5R6L7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5R6L7L8 : public  virtual BaseR1R2R3R4R5R6L7L8L9, public virtual BaseR1R2R3R4R5R6L7L8R9
{
public: 
	BaseR1R2R3R4R5R6L7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5R6L7R8L9
{
public: 
	BaseR1R2R3R4R5R6L7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5R6L7R8R9
{
public: 
	BaseR1R2R3R4R5R6L7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5R6L7R8 : public  virtual BaseR1R2R3R4R5R6L7R8L9, public virtual BaseR1R2R3R4R5R6L7R8R9
{
public: 
	BaseR1R2R3R4R5R6L7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5R6L7 : public  virtual BaseR1R2R3R4R5R6L7L8, public virtual BaseR1R2R3R4R5R6L7R8
{
public: 
	BaseR1R2R3R4R5R6L7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5R6R7L8L9
{
public: 
	BaseR1R2R3R4R5R6R7L8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5R6R7L8R9
{
public: 
	BaseR1R2R3R4R5R6R7L8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5R6R7L8 : public  virtual BaseR1R2R3R4R5R6R7L8L9, public virtual BaseR1R2R3R4R5R6R7L8R9
{
public: 
	BaseR1R2R3R4R5R6R7L8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5R6R7R8L9
{
public: 
	BaseR1R2R3R4R5R6R7R8L9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5R6R7R8R9
{
public: 
	BaseR1R2R3R4R5R6R7R8R9() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5R6R7R8 : public  virtual BaseR1R2R3R4R5R6R7R8L9, public virtual BaseR1R2R3R4R5R6R7R8R9
{
public: 
	BaseR1R2R3R4R5R6R7R8() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5R6R7 : public  virtual BaseR1R2R3R4R5R6R7L8, public virtual BaseR1R2R3R4R5R6R7R8
{
public: 
	BaseR1R2R3R4R5R6R7() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5R6 : public  virtual BaseR1R2R3R4R5R6L7, public virtual BaseR1R2R3R4R5R6R7
{
public: 
	BaseR1R2R3R4R5R6() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4R5 : public  virtual BaseR1R2R3R4R5L6, public virtual BaseR1R2R3R4R5R6
{
public: 
	BaseR1R2R3R4R5() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3R4 : public  virtual BaseR1R2R3R4L5, public virtual BaseR1R2R3R4R5
{
public: 
	BaseR1R2R3R4() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2R3 : public  virtual BaseR1R2R3L4, public virtual BaseR1R2R3R4
{
public: 
	BaseR1R2R3() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1R2 : public  virtual BaseR1R2L3, public virtual BaseR1R2R3
{
public: 
	BaseR1R2() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class BaseR1 : public  virtual BaseR1L2, public virtual BaseR1R2
{
public: 
	BaseR1() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class Base : public  virtual BaseL1, public virtual BaseR1
{
public: 
	Base() : m_i(ctr ++) { std::cout << m_i << std::endl; }
private:
	int m_i;
};

class Base0 {
public:
	Base0() : m_i0(ctr ++) {
		std::cout << m_i0 << std::endl;
	}
	int m_i0;
};

class Derived : virtual public Base, virtual public Base0
{
public:
	Derived() : m_i(ctr) {}
	int m_i;
};

int main() {
	Derived d; std::cout << d.m_i << std::endl;
}
