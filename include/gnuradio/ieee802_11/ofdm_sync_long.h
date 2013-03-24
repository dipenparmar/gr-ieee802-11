/*
 * Copyright (C) 2013 Bastian Bloessl <bloessl@ccs-labs.org>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef INCLUDED_GR_IEEE802_11_OFDM_SYNC_LONG_H
#define INCLUDED_GR_IEEE802_11_OFDM_SYNC_LONG_H

#include <gnuradio/ieee802_11/api.h>
#include <gnuradio/gr_block.h>

namespace gr {
namespace ieee802_11 {

class GR_IEEE802_11_API ofdm_sync_long : virtual public gr_block
{
public:

	typedef boost::shared_ptr<ofdm_sync_long> sptr;
	static sptr make(unsigned int sync_length, unsigned int freq_est,
			bool debug = false);

};

}  // namespace ieee802_11
}  // namespace gr

#endif /* INCLUDED_GR_IEEE802_11_OFDM_SYNC_LONG_H */
