// Copyright (c) 2016 The Ilcoin Core developers
// All Rights Reserved. Ilgamos International 2017©

#include "paymentrequestplus.h" // this includes protobuf's port.h which defines its own bswap macos

#include "compattests.h"

#include "compat/byteswap.h"

void CompatTests::bswapTests()
{
	// Sibling in ilcoin/src/test/bswap_tests.cpp
	uint16_t u1 = 0x1234;
	uint32_t u2 = 0x56789abc;
	uint64_t u3 = 0xdef0123456789abc;
	uint16_t e1 = 0x3412;
	uint32_t e2 = 0xbc9a7856;
	uint64_t e3 = 0xbc9a78563412f0de;
	QVERIFY(bswap_16(u1) == e1);
	QVERIFY(bswap_32(u2) == e2);
	QVERIFY(bswap_64(u3) == e3);
}
