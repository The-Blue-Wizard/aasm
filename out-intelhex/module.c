/*
**    This file is part of AASM.
**
**    AASM is free software; you can redistribute it and/or modify
**    it under the terms of the GNU General Public License as published by
**    the Free Software Foundation; either version 3 of the License, or
**    (at your option) any later version.
**
**    AASM is distributed in the hope that it will be useful,
**    but WITHOUT ANY WARRANTY; without even the implied warranty of
**    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**    GNU General Public License for more details.
**
**    You should have received a copy of the GNU General Public License
**    along with AASM; if not, write to the Free Software
**    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
**
**    Copyright Alexandre Becoulet, 2002
**    contact : alexandre.becoulet@free.fr
*/

#include "aasm/modules.h"
#include "aasm/arch_id.h"

#ifdef AASM_STATIC
static const struct module_info_s	out_intelhex_module_info =
#else
const struct module_info_s		module_info =
#endif
{
  1,
  "out-intelhex",
  "Alexandre Becoulet 2002",
  "Intel HEX file writer",
  {0, 9, 1},
  ARCH_ID_NONE,
  MODULE_CLASS_OUT,
  0
};

#ifdef AASM_STATIC

#include "intelhex.h"

struct module_s				out_intelhex_module =
{
  &out_intelhex_module_info,
  0,
  0,
  NULL,
  NULL,
  {
    {
      (void*)&out_intelhex_write,
      NULL /*(void*)&out_intelhex_directive*/
    }
  }
};

#endif

