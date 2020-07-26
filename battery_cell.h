#pragma once
#include <QObject>

class IBatteryCell {
public:
  virtual double chargePercent() const = 0;
};

class BatteryCell : public IBatteryCell {
public:
  BatteryCell() {}
  virtual double chargePercent() const;
};