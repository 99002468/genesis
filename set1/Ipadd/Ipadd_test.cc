#include "Ipadd.h"
#include<iostream>
#include <gtest/gtest.h>
TEST(IPAddress,getIP)
{
    IPAddress I1;

    EXPECT_EQ("Class A",I1.getIPClass(000));



}
