#include "concrete_commands.h"

namespace hfdp
{
	namespace command
	{
		garage_lights_on::garage_lights_on( const garage_lights_ptr lights )
			: lights_( lights )
		{
		}
		garage_lights_on::~garage_lights_on()
		{
		}		
		void garage_lights_on::execute()
		{
			lights_->on();
		}
		void garage_lights_on::undo()
		{
			lights_->off();
		}
		//
		garage_lights_off::garage_lights_off( const garage_lights_ptr lights )
			: lights_( lights )
		{
		}
		garage_lights_off::~garage_lights_off( )
		{
		}		
		void garage_lights_off::execute( )
		{
			lights_->off( );
		}
		void garage_lights_off::undo( )
		{
			lights_->on( );
		}
		//
		garage_door_up::garage_door_up( const garage_door_ptr door )
			: door_( door )
		{
		}
		garage_door_up::~garage_door_up( )
		{
		}
		void garage_door_up::execute( )
		{
			door_->up( );
		}
		void garage_door_up::undo( )
		{
			door_->down( );
		}
		//
		garage_door_down::garage_door_down( const garage_door_ptr door )
			: door_( door )
		{
		}
		garage_door_down::~garage_door_down( )
		{
		}
		void garage_door_down::execute( )
		{
			door_->down( );
		}
		void garage_door_down::undo( )
		{
			door_->up( );
		}
		//
		audio_system_volume_up::audio_system_volume_up( const audio_system_ptr audio )
			: audio_( audio )
		{
		}
		audio_system_volume_up::~audio_system_volume_up( )
		{
		}
		void audio_system_volume_up::execute( )
		{
			audio_->volume_up( );
		}
		void audio_system_volume_up::undo( )
		{
			audio_->volume_down( );
		}
	}
}