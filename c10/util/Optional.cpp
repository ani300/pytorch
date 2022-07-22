#include <c10/util/Optional.h>

#include <c10/macros/Macros.h>
#include <c10/util/ArrayRef.h>

static_assert(
    C10_IS_TRIVIALLY_COPYABLE(c10::optional<int>),
    "c10::optional<int> should be trivially copyable");
static_assert(
    C10_IS_TRIVIALLY_COPYABLE(c10::optional<bool>),
    "c10::optional<bool> should be trivially copyable");
static_assert(
    C10_IS_TRIVIALLY_COPYABLE(c10::optional<c10::IntArrayRef>),
    "c10::optional<IntArrayRef> should be trivially copyable");
static_assert(
    sizeof(c10::optional<c10::IntArrayRef>) == sizeof(c10::IntArrayRef),
    "c10::optional<IntArrayRef> should be size-optimized");
