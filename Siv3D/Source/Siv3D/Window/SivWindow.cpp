﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (C) 2008-2017 Ryo Suzuki
//	Copyright (C) 2016-2017 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# include "../Siv3DEngine.hpp"
# include "IWindow.hpp"

namespace s3d
{
	namespace Window
	{
		void SetTitle(const String& title)
		{
			Siv3DEngine::GetWindow()->setTitle(title);
		}
		
		const WindowState& GetState()
		{
			return Siv3DEngine::GetWindow()->getState();
		}

		void SetPos(const Point& pos)
		{
			Siv3DEngine::GetWindow()->setPos(pos);
		}
	}
}
