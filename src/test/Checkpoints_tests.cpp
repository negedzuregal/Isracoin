//
// Unit tests for block-chain checkpoints
//

#include "checkpoints.h"

#include "uint256.h"

#include <boost/test/unit_test.hpp>

using namespace std;

BOOST_AUTO_TEST_SUITE(Checkpoints_tests)

BOOST_AUTO_TEST_CASE(sanity)
{
    uint256 p6001 = uint256("0x8a96caacf3b7ca39d3a0cd5f05bb92b517b2b1c97cf8836bedf300c18538116c");
    uint256 p6001Wrong = uint256("0x8a96caacf3b7ca39d3a0cd5f05bb92b517b2b1c97cf8836bedf300c18538116d");
    BOOST_CHECK(Checkpoints::CheckBlock(6001, p6001));

    // Wrong hashes at checkpoints should fail:
    BOOST_CHECK(!Checkpoints::CheckBlock(6001, p6001Wrong));

    BOOST_CHECK(Checkpoints::GetTotalBlocksEstimate() >= 6001);
}    

BOOST_AUTO_TEST_SUITE_END()
