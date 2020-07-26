#pragma once
#include <QObject>

class IBattery : public QObject {
public:
  virtual double chargePercent() const = 0;
};
