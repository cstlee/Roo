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

    /// CPU time running Roo with no work to do in cycles.
    uint64_t idle_cycles;

    /// Number of application message bytes sent.
    uint64_t tx_message_bytes;

    /// Number of application message bytes received.
    uint64_t rx_message_bytes;

    /// Number of bytes sent by the transport.
    uint64_t transport_tx_bytes;

    /// Number of bytes received by the transport.
    uint64_t transport_rx_bytes;

    /// Number of data packets sent.
    uint64_t tx_data_pkts;

    /// Number of data packets received.
    uint64_t rx_data_pkts;

    /// Number of grant packets sent.
    uint64_t tx_grant_pkts;

    /// Number of grant packets received.
    uint64_t rx_grant_pkts;

    /// Number of done packets sent.
    uint64_t tx_done_pkts;

    /// Number of done packets received.
    uint64_t rx_done_pkts;

    /// Number of resend packets sent.
    uint64_t tx_resend_pkts;

    /// Number of resend packets received.
    uint64_t rx_resend_pkts;

    /// Number of busy packets sent.
    uint64_t tx_busy_pkts;

    /// Number of busy packets received.
    uint64_t rx_busy_pkts;

    /// Number of ping packets sent.
    uint64_t tx_ping_pkts;

    /// Number of ping packets received.
    uint64_t rx_ping_pkts;

    /// Number of unknown packets sent.
    uint64_t tx_unknown_pkts;

    /// Number of unknown packets received.
    uint64_t rx_unknown_pkts;

    /// Number of error packets sent.
    uint64_t tx_error_pkts;

    /// Number of error packets received.
    uint64_t rx_error_pkts;
};

/**
 * Fill the provided stats structure with the current performance statistics.
 */
void getStats(Stats* stats);

}  // namespace Perf
}  // namespace Roo

#endif  // ROO_INCLUDE_ROO_PERF_H
