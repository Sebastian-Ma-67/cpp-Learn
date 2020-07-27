#include <iostream>

using namespace std;
// namespace std;

// 普通实现
/*

class Java

{
private:
    
public:
    Java();
    ~Java();
    void header();
    void footer();
    void lefter();
    void righter();
};

Java ::Java()
{
}

Java ::~Java()
{
}

void Java::header()
{
    cout << "header..." << endl;
}

void Java::footer()
{
    cout << "footer..." << endl;
}

void Java::lefter()
{
    cout << "lefter..." << endl;
}

void Java::righter()
{
    cout << "righter..." << endl;
}


class Python

{
private:
public:
    Python();
    ~Python();
    void header();
    void footer();
    void lefter();
    void righter();
};

Python ::Python()
{
}

Python ::~Python()
{
}

*/

// 继承实现
class BasePage

{
private:
    /* data */
public:
    BasePage(/* args */);
    ~BasePage();

    void header();
    void footer();
    void lefter();
    void righter();
};

BasePage ::BasePage(/* args */)
{
}

BasePage ::~BasePage()
{
}

void BasePage::header()
{
    cout << "header..." << endl;
}

void BasePage::footer()
{
    cout << "footer..." << endl;
}

void BasePage::lefter()
{
    cout << "lefter..." << endl;
}

void BasePage::righter()
{
    cout << "righter..." << endl;
}

class Java : public BasePage
{
private:
    /* data */
public:
    Java(/* args */);
    ~Java();
};

Java ::Java(/* args */)
{
}

Java ::~Java()
{
}
class Python : public BasePage
{
private:
    /* data */
public:
    Python(/* args */);
    ~Python();
};

Python ::Python(/* args */)
{
}

Python ::~Python()
{
}

void test01()
{
    Java ja;
    ja.header();
    ja.footer();
    ja.lefter();
    ja.righter();
}

void test02()
{
    Python py;
    py.header();
    py.footer();
    py.lefter();
    py.righter();
}

int main()
{
    test01();
    test02();
    return 0;
}