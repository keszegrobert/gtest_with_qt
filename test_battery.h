#include "battery.h"
#include "mock_battery_cell.h"
#include <QObject>
#include <gmock/gmock.h>
#include <gtest/gtest.h>

class BatteryTest : public ::testing::Test {

public:
  BatteryTest() : m_battery(mBatteryCellOne, mBatteryCellTwo) {}

protected:
  ::testing::NiceMock<MockBatteryCell> mBatteryCellOne;
  ::testing::NiceMock<MockBatteryCell> mBatteryCellTwo;
  Battery m_battery;

  virtual void SetUp() {}
  virtual void TearDown() {}
};
