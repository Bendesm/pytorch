#pragma once

// This file contains autogenerated LazyTensor IR nodes
${lazy_ir_sysinc}

${lazy_ir_inc}

${external_backend_headers}

namespace torch_lazy_tensors {
namespace ir {
namespace ops {
using Shape = torch::lazy::Shape;
// kNullValue is used to contribute a static hash value any time
// a node has an Optional<Value> input that is nullopt.  It is important
// to differentiate between HASH(nullopt, something) and HASH(something, nullopt),
// and using kNullValue in the hash function in the order of arguments
// serves this purpose.
static const torch::lazy::Value kNullValue = torch::lazy::Value();

${ir_declarations}

} // namespace ops
} // namespace ir
} // namespace torch_lazy_tensors