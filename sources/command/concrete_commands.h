#ifndef _HEAD_FIRST_DESIGN_PATTERNS_COMMAND_CONCRETE_COMMNAND_H
#define _HEAD_FIRST_DESIGN_PATTERNS_COMMAND_CONCRETE_COMMNAND_H

#include "command_interface.h"
#include "local_systems.h"

namespace hfdp
{
	namespace command
	{
		class empty_command : public command_interface
		{
		public:
			virtual ~empty_command();
			//
			virtual void execute( );
			virtual void undo( );
		};
		class garage_lights_on : public command_interface
		{
			garage_lights_ptr lights_;

		public:
			explicit garage_lights_on( const garage_lights_ptr lights );
			virtual ~garage_lights_on();
			//
			virtual void execute( );
			virtual void undo( );
		};
		//
		class garage_lights_off : public command_interface
		{
			garage_lights_ptr lights_;

		public:
			explicit garage_lights_off( const garage_lights_ptr lights );
			virtual ~garage_lights_off( );
			//
			virtual void execute( );
			virtual void undo( );
		};
		//
		class garage_door_up : public command_interface
		{
			garage_door_ptr door_;

		public:
			explicit garage_door_up( const garage_door_ptr door );
			virtual ~garage_door_up( );
			//
			virtual void execute( );
			virtual void undo( );
		};
		class garage_door_down : public command_interface
		{
			garage_door_ptr door_;

		public:
			explicit garage_door_down( const garage_door_ptr door );
			virtual ~garage_door_down( );
			//
			virtual void execute( );
			virtual void undo( );
		};
		class audio_system_volume_up : public command_interface
		{
			audio_system_ptr audio_;

		public:
			explicit audio_system_volume_up( const audio_system_ptr audio );
			virtual ~audio_system_volume_up( );
			//
			virtual void execute( );
			virtual void undo( );
		};
		class ceiling_fan_high_command : public command_interface
		{
			ceiling_fan::speed prev_speed_ = ceiling_fan::OFF;
			ceiling_fan_ptr ceiling_fan_;

		public:
			explicit ceiling_fan_high_command( const ceiling_fan_ptr fan );
			virtual ~ceiling_fan_high_command();
			//
			virtual void execute();
			virtual void undo();
		};
	}
}

#endif // _HEAD_FIRST_DESIGN_PATTERNS_COMMAND_CONCRETE_COMMNAND_H

