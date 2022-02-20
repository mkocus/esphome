#pragma once

#include "esphome/core/component.h"
#include "esphome/components/sensor/sensor.h"

namespace esphome {
namespace battery {

class BatterySensor : public sensor::Sensor, public PollingComponent {
 public:
  void set_template(std::function<optional<float>()> &&f);

  void update() override;

  void dump_config() override;

  float get_setup_priority() const override;

 protected:
  optional<std::function<optional<float>()>> f_;
};

}  // namespace battery
}  // namespace esphome
