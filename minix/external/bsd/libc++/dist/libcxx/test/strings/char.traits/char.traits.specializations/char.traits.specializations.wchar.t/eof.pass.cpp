//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <string>

// template<> struct char_traits<wchar_t>

// static constexpr int_type eof();

#include <string>
#include <cassert>

int main()
{
    assert(std::char_traits<wchar_t>::eof() == WEOF);
}
