// SPDX-License-Identifier: LGPL-3.0
/**
 * @file    test_string_trans.cpp
 * @author  向阳 (hinata.hoshino@foxmail.com)
 * @brief   各个变换操作
 * @version 1.0
 * @date    2023-06-21
 *
 * @copyright Copyright (c) 向阳, all rights reserved.
 *
 */
#include "helper.h"
#include "main.h"
#include "mm_heap.h"
#include "mm_string.h"
#include "unity.h"
#include <stdio.h>

extern "C" void string_trans_clear(void)
{
}

extern "C" void string_trans_reverse(void)
{
}

extern "C" void string_trans_reverse_unicode(void)
{
    // 偶数长度
    MString src1;
    EVAL(mstr_create(&src1, "1234567890"));
    ASSERT_EQUAL_STRING(&src1, "1234567890");
    EVAL(mstr_reverse_self(&src1));
    ASSERT_EQUAL_STRING(&src1, "0987654321");
    mstr_free(&src1);
    // 奇数长度
    MString src2;
    EVAL(mstr_create(&src2, "123456789"));
    ASSERT_EQUAL_STRING(&src2, "123456789");
    EVAL(mstr_reverse_self(&src2));
    ASSERT_EQUAL_STRING(&src2, "987654321");
    mstr_free(&src2);
}
