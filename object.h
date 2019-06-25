#ifndef _OBJECT_H_
#define _OBJECT_H_

class Object{
private:
    static int m_objectNum;
public:
    //  コンストラクタ
    Object();
    //  デストラクタ
    static int getObjectNum(){
      return m_objectNum;
    }
    ~Object();
};

#endif // _OBJECT_H_
