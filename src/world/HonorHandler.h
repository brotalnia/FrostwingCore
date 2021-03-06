/*
 * FrostwingCore <https://gitlab.com/cronicx321/AscEmu>
 * Copyright (C) 2014-2015 AscEmu Team <http://www.ascemu.org>
 * Copyright (C) 2008-2012 ArcEmu Team <http://www.ArcEmu.org/>
 * Copyright (C) 2005-2007 Ascent Team
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _HONORHANDLER_H
#define _HONORHANDLER_H

class SERVER_DECL HonorHandler
{
    public:

        static int32 CalculateHonorPointsForKill(uint32 playerLevel, uint32 victimLevel);
        static void RecalculateHonorFields(Player* pPlayer);
        static void AddHonorPointsToPlayer(Player* pPlayer, uint32 uAmount);
        static void OnPlayerKilled(Player* pPlayer, Player* pVictim);
};

#endif // _HONORHANDLER_H
