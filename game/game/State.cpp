#include "Engine.h"

//-----------------------------------------------------------------------------
// The state class constructor.
//-----------------------------------------------------------------------------
State::State( unsigned long id )
{
	m_id = id;
}

//-----------------------------------------------------------------------------
// Allows the state to preform any pre-processing construction.
//-----------------------------------------------------------------------------
void State::Load()
{

}

//-----------------------------------------------------------------------------
// Allows the state to preform any post-processing destruction.
//-----------------------------------------------------------------------------
void State::Close()
{

}

//-----------------------------------------------------------------------------
// Returns the view setup details for the given frame.
//-----------------------------------------------------------------------------
void State::RequestViewer( ViewerSetup *viewer )
{
	viewer->viewClearFlags = 0;
}

//-----------------------------------------------------------------------------
// Updates the state.
//-----------------------------------------------------------------------------
void State::Update( float elapsed )
{

}

//-----------------------------------------------------------------------------
// Renders the state.
//-----------------------------------------------------------------------------
void State::Render()
{

}

//-----------------------------------------------------------------------------
// Returns the state's ID.
//-----------------------------------------------------------------------------
unsigned long State::GetID()
{
	return m_id;
}