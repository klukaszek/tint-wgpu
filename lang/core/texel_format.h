// Copyright 2022 The Dawn & Tint Authors
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this
//    list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its
//    contributors may be used to endorse or promote products derived from
//    this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

////////////////////////////////////////////////////////////////////////////////
// File generated by 'tools/src/cmd/gen' using the template:
//   lang/core/texel_format.h.tmpl
//
// To regenerate run: './tools/run gen'
//
//                       Do not modify this file directly
////////////////////////////////////////////////////////////////////////////////

#ifndef SRC_TINT_LANG_CORE_TEXEL_FORMAT_H_
#define SRC_TINT_LANG_CORE_TEXEL_FORMAT_H_

#include <cstdint>

#include "utils/traits/traits.h"

namespace tint::core {

/// Enumerator of texel formats
enum class TexelFormat : uint8_t {
    kUndefined,
    kBgra8Unorm,
    kR32Float,
    kR32Sint,
    kR32Uint,
    kR8Unorm,
    kRg32Float,
    kRg32Sint,
    kRg32Uint,
    kRgba16Float,
    kRgba16Sint,
    kRgba16Uint,
    kRgba32Float,
    kRgba32Sint,
    kRgba32Uint,
    kRgba8Sint,
    kRgba8Snorm,
    kRgba8Uint,
    kRgba8Unorm,
};

/// @param value the enum value
/// @returns the string for the given enum value
std::string_view ToString(TexelFormat value);

/// @param out the stream to write to
/// @param value the TexelFormat
/// @returns @p out so calls can be chained
template <typename STREAM, typename = traits::EnableIfIsOStream<STREAM>>
auto& operator<<(STREAM& out, TexelFormat value) {
    return out << ToString(value);
}

/// ParseTexelFormat parses a TexelFormat from a string.
/// @param str the string to parse
/// @returns the parsed enum, or TexelFormat::kUndefined if the string could not be parsed.
TexelFormat ParseTexelFormat(std::string_view str);

constexpr std::string_view kTexelFormatStrings[] = {
    "bgra8unorm", "r32float",   "r32sint",     "r32uint",    "r8unorm",    "rg32float",
    "rg32sint",   "rg32uint",   "rgba16float", "rgba16sint", "rgba16uint", "rgba32float",
    "rgba32sint", "rgba32uint", "rgba8sint",   "rgba8snorm", "rgba8uint",  "rgba8unorm",
};

}  // namespace tint::core

#endif  // SRC_TINT_LANG_CORE_TEXEL_FORMAT_H_
