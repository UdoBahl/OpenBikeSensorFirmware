/*
  Copyright (C) 2019 Zweirat
  Contact: https://openbikesensor.org

  This file is part of the OpenBikeSensor project.

  The OpenBikeSensor sensor firmware is free software: you can redistribute
  it and/or modify it under the terms of the GNU General Public License as
  published by the Free Software Foundation, either version 3 of the License,
  or (at your option) any later version.

  The OpenBikeSensor sensor firmware is distributed in the hope that it will
  be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General
  Public License for more details.

  You should have received a copy of the GNU General Public License along with
  the OpenBikeSensor sensor firmware.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef OPENBIKESENSORFIRMWARE_ALPDATA_H
#define OPENBIKESENSORFIRMWARE_ALPDATA_H


static const char *const LAST_MODIFIED_HEADER_FILE_NAME = "/current_14d.hdr";

static const char *const ALP_DATA_FILE_NAME = "/current_14d.alp";

static const char *const ALP_DOWNLOAD_URL = "http://alp.u-blox.com/current_14d.alp";

class AlpData {
  public:
    static void update();
    static bool available();
    static uint16_t fill(uint8_t *data, uint16_t ofs, uint16_t dataSize);

  private:
    static void saveLastModified(String header);
    static String loadLastModified();

};


#endif //OPENBIKESENSORFIRMWARE_ALPDATA_H
