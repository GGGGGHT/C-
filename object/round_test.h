//
// Created by autorun on 2021/11/2.
//

#ifndef C__ROUND_TEST_H
#include "../common/common.h"
#define C__ROUND_TEST_H

#define PI 3.1415926
class Round
{
public:
    int m_r;

private:
    double m_c;

public:
    double calculate()
    {
        return 2 * PI * m_r;
    }

    void setMc(double mc)
    {
        m_c = mc;
    }
    double getMc()
    {
        return m_c;
    }
};

#endif //C__ROUND_TEST_H
