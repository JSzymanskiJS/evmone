// evmone: Fast Ethereum Virtual Machine implementation
// Copyright 2022 The evmone Authors.
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include <evmc/evmc.hpp>
#include <optional>

namespace evmone::state
{
struct ExecutionResult
{
    evmc_status_code status_code;
    size_t output_size;
};

std::optional<evmc::result> call_precompile(evmc_revision rev, const evmc_message& msg) noexcept;
}  // namespace evmone::state
