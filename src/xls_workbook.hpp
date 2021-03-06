/**
 * @file xls_workbook.hpp
 *
 * csv2xls - convert csv files into one or more Excel(TM) files
 * Copyright (C) 2012  Marcel Schneider
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU GENERAL PUBLIC LICENSE
 * as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU GENERAL PUBLIC LICENSE for more details.
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the
 *
 * Free Software Foundation Inc.
 * 51 Franklin Street
 * Fifth Floor
 * Boston
 * MA  02110-1301  USA *
 */

#include "workbook.hpp"
namespace xlslib_core
{
class workbook;
class worksheet;
}

namespace csv2xls
{

class xls_workbook: public workbook
{
public:
	xls_workbook();
	virtual ~xls_workbook();

	virtual void clear_sheet(const std::string& sheetname);
	virtual int write_to_file(const std::string &file_name);
	virtual void label(	unsigned int row,
						unsigned int col,
						const std::string& strlabel);
private:
	xlslib_core::workbook *wbook;
	xlslib_core::worksheet *wsheet;

};
}
