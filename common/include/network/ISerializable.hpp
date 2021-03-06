/*
 * =====================================================================================
 *
 *  OpenMiner
 *
 *  Copyright (C) 2018-2020 Unarelith, Quentin Bazin <openminer@unarelith.net>
 *  Copyright (C) 2019-2020 the OpenMiner contributors (see CONTRIBUTORS.md)
 *
 *  This file is part of OpenMiner.
 *
 *  OpenMiner is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  OpenMiner is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with OpenMiner; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA
 *
 * =====================================================================================
 */
#ifndef ISERIALIZABLE_HPP_
#define ISERIALIZABLE_HPP_

namespace sf { class Packet; }

class ISerializable {
	public:
		virtual ~ISerializable() = default;

		virtual void serialize(sf::Packet &packet) const = 0;
		virtual void deserialize(sf::Packet &packet) = 0;
};

sf::Packet &operator<<(sf::Packet &packet, const ISerializable &s);
sf::Packet &operator>>(sf::Packet &packet, ISerializable &s);

#endif // ISERIALIZABLE_HPP_
