//--------------------------------------------------------------------------------
// This file is a portion of the Hieroglyph 3 Rendering Engine.  It is distributed
// under the MIT License, available in the root of this distribution and 
// at the following URL:
//
// http://www.opensource.org/licenses/mit-license.php
//
// Copyright (c) 2003-2010 Jason Zink 
//--------------------------------------------------------------------------------

//--------------------------------------------------------------------------------
// InputAssemblerStageDX11
//
//--------------------------------------------------------------------------------
#ifndef InputAssemblerStageDX11_h
#define InputAssemblerStageDX11_h
//--------------------------------------------------------------------------------
#include "PCH.h"
#include "InputAssemblerStateDX11.h"
//--------------------------------------------------------------------------------
namespace Glyph3
{
	class InputAssemblerStageDX11
	{
	public:
		InputAssemblerStageDX11();
		virtual ~InputAssemblerStageDX11();

		void SetFeautureLevel( D3D_FEATURE_LEVEL level );

		// This method allows setting the complete input assember state with a
		// single call by the user.  This means the user can configure their
		// state ahead of time and then simply set it all at once.
		void SetDesiredState( InputAssemblerStateDX11& state );
		void ClearDesiredState( );

		// This method applies the desired state to the API.
		void ApplyDesiredState( ID3D11DeviceContext* pContext );

	protected:

		D3D_FEATURE_LEVEL				m_FeatureLevel;

		InputAssemblerStateDX11			m_DesiredState;
		InputAssemblerStateDX11			m_CurrentState;
	};
};
//--------------------------------------------------------------------------------
#endif // InputAssemblerStageDX11_h
//--------------------------------------------------------------------------------

