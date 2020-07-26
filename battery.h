#pragma once

#include "battery_cell.h"
#include "i_battery.h"

class Battery : public IBattery {
  Q_OBJECT
public:
  Battery(IBatteryCell &cellOne, IBatteryCell &cellTwo);
  virtual double chargePercent() const;

public slots:
  virtual void changePercent(int charge);

private:
  IBatteryCell &m_cellOne;
  IBatteryCell &m_cellTwo;
};