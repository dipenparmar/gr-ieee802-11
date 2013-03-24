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
#ifndef INCLUDED_GR_IEEE802_11_OFDM_PARSE_MAC_IMPL_H
#define INCLUDED_GR_IEEE802_11_OFDM_PARSE_MAC_IMPL_H

struct mac_header {
	uint16_t  frame_control;
	uint16_t  duration;
	uint8_t   addr1[6];
	uint8_t   addr2[6];
	uint8_t   addr3[6];
	uint16_t  seq_control;
}__attribute__((packed));

#endif /* INCLUDED_GR_IEEE802_11_OFDM_PARSE_MAC_IMPL_H */

