#if 0
    INDI
    Copyright (C) 2003-2006 Elwood C. Downey

                        Updated by Jasem Mutlaq (2003-2010)

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

#endif

/*
 * Moved globals away from indidrivermain.cpp main()
 */
            
#include "indidevapi.h"
#include "indicom.h"
#include "lilxml.h"
#include "indidriver.h"

#define MAXRBUF 2048

ROSC *roCheck;
int nroCheck;			/* # of elements in roCheck */

int verbose;			/* chatty */
char *me;				/* a.out name */
LilXML *clixml;			/* XML parser context */
