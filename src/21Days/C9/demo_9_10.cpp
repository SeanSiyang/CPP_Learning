#include <iostream>
#include <string>

// 单例类：禁止复制、赋值及创建多个实例
class President
{
private:
    President() {}
    President(const President&);
    const President& operator=(const President&);

    std::string name;

public:
    static President& GetInstance()
    {
        
    }

};