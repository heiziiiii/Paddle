/* Copyright (c) 2021 PaddlePaddle Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#include <iostream>

#include "gtest/gtest.h"
#include "paddle/pten/core/compat/op_utils.h"
#include "paddle/pten/ops/compat/signatures.h"

namespace pten {
namespace tests {

TEST(OpUtilsMap, ArgMappingFnExists) {
  std::cout << "enter ArgMappingFnExists";
  auto scale_arg_mapping_fn =
      pten::OpUtilsMap::Instance().GetArgumentMappingFn("scale");
  EXPECT_NE(scale_arg_mapping_fn, nullptr);
}

}  // namespace tests
}  // namespace pten
