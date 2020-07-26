#include "battery.h"

Battery::Battery(IBatteryCell &cellOne, IBatteryCell &cellTwo)
    : m_cellOne(cellOne), m_cellTwo(cellTwo) {}

double Battery::chargePercent() const {
  return (m_cellOne.chargePercent() + m_cellTwo.chargePercent()) / 2.0;
}

void Battery::changePercent(int charge) {}