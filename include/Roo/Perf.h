/* Copyright (c) 2020, Stanford University
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef ROO_INCLUDE_ROO_PERF_H
#define ROO_INCLUDE_ROO_PERF_H

#include <atomic>
#include <cstdint>

namespace Roo {
namespace Perf {

/**
 * Performance statistics
 */
struct Stats {
    /// Relative time when these statistics were gathered in cycles.
    uint64_t timestamp;

    /// Conversion factor from cycles to seconds.
    double cycles_per_second;

    /// CPU time actively processing RooPC and ServerTask messages in cycles.
    uint64_t active_cycles;

    /// Number of bytes sent by the transport.
    uint64_t transport_tx_bytes;

    /// Number of bytes received by the transport.
    uint64_t transport_rx_bytes;
};

/**
 * Fill the provided stats structure with the current performance statistics.
 */
void getStats(Stats* stats);

}  // namespace Perf
}  // namespace Roo

#endif  // ROO_INCLUDE_ROO_PERF_H
