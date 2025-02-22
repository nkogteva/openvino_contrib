// Copyright (C) 2018-2022 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//
#include <stdexcept>
#include <string>

#include "set_device_name.hpp"

namespace ov {
namespace test {
void set_device_suffix(const std::string &suffix) {
  if (!suffix.empty()) {
    throw std::runtime_error("The suffix can't be used for ARM CPU device!");
  }
}
} // namespace test
} // namespace ov