#pragma once
#include "Stat.h"
class Intelligence : public Stat
{
public:
    virtual void Enhance() override;
    virtual ~Intelligence();
};

