#include "test_battery.h"

TEST_F(BatteryTest, ChargePercentCallChargePercentOnCellOne) {
  EXPECT_CALL(mBatteryCellOne, chargePercent()).Times(1);
  m_battery.chargePercent();
}

TEST_F(BatteryTest, ChargePercentCallChargePercentOnCellTwo) {
  EXPECT_CALL(mBatteryCellTwo, chargePercent()).Times(1);
  m_battery.chargePercent();
}

TEST_F(BatteryTest, ChargePercentReturnsAverageOfBothCells) {
  ON_CALL(mBatteryCellOne, chargePercent())
      .WillByDefault(::testing::Return(0.75));
  ON_CALL(mBatteryCellTwo, chargePercent())
      .WillByDefault(::testing::Return(0.25));
  ASSERT_DOUBLE_EQ(0.5, m_battery.chargePercent());
}

TEST_F(BatteryTest, ChargePercentReturnsAverageOfBothCellsWithAnotherValues) {
  ON_CALL(mBatteryCellOne, chargePercent())
      .WillByDefault(::testing::Return(0.5));
  ON_CALL(mBatteryCellTwo, chargePercent())
      .WillByDefault(::testing::Return(1.0));
  ASSERT_DOUBLE_EQ(0.75, m_battery.chargePercent());
}
