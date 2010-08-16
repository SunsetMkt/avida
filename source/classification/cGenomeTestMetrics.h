/*
 *  cGenomeTestMetrics.h
 *  Avida
 *
 *  Created by David Bryson on 8/13/10.
 *  Copyright 2010 Michigan State University. All rights reserved.
 *
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; version 2
 *  of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 */

#ifndef cGenomeTestMetrics_h
#define cGenomeTestMetrics

#ifndef cBioGroupData_h
#include "cBioGroupData.h"
#endif

#include <cassert>

class cBioGroup;

class cGenomeTestMetrics : public cBioGroupData
{
private:
  cGenomeTestMetrics(); // @not_implemented
  
  
public:
  cGenomeTestMetrics(cAvidaContext& ctx)
  
};

#endif
