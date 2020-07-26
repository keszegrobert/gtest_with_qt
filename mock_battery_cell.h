#include "battery_cell.h"

#include <gmock/gmock.h>

class MockBatteryCell : public IBatteryCell {
public:
  MOCK_CONST_METHOD0(chargePercent, double());
};