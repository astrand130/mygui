﻿/*!
	@file
	@author		Generate utility by Albert Semenov
	@date		01/2009
	@module
*/

#include "../ExportDefine.h"
#include "../ExportMarshaling.h"
#include "MyGUI.Export_MarshalingWidget.h"
#include "../ExportMarshalingType.h"
#include <MyGUI.h>

namespace Export
{

	//InsertPoint















   	namespace ScopeDDContainerMethod_SetProperty
	{
		MYGUIEXPORT void MYGUICALL ExportDDContainer_SetProperty_key_value( MyGUI::Widget* _native,
			Convert<const std::string &>::Type _key ,
			Convert<const std::string &>::Type _value )
		{
			static_cast< MyGUI::DDContainer * >(_native)->setProperty(
				Convert<const std::string &>::From( _key ) ,
				Convert<const std::string &>::From( _value ) );
		}
	}



   	namespace ScopeDDContainerProperty_NeedDragDrop
	{
		MYGUIEXPORT Convert<bool>::Type MYGUICALL ExportDDContainer_GetNeedDragDrop( MyGUI::Widget* _native )
		{
			return Convert<bool>::To( static_cast< MyGUI::DDContainer * >(_native)->getNeedDragDrop( ) );
		}
		MYGUIEXPORT void MYGUICALL ExportDDContainer_SetNeedDragDrop( MyGUI::Widget* _native , Convert<bool>::Type _value )
		{
			static_cast< MyGUI::DDContainer * >(_native)->setNeedDragDrop( Convert<bool>::From( _value ) );
		}
	}



   


   


   


}
