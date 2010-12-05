/* 
	Copyright 2010 cumulus.dev@gmail.com
 
	This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License received along this program for more
	details (or else see http://www.gnu.org/licenses/).

	This file is a part of Cumulus.
*/

#pragma once

#include "Cumulus.h"
#include "Flow.h"

namespace Cumulus {

class FlowStream : public Flow {
public:
	FlowStream(Poco::UInt8 id);
	virtual ~FlowStream();

private:
	int requestHandler(Poco::UInt8 stage,PacketReader& request,PacketWriter& response);
};

inline int FlowStream::requestHandler(Poco::UInt8 stage,PacketReader& request,PacketWriter& response) {
	return 0;
}

} // namespace Cumulus