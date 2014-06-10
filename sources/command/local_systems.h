#ifndef _HEAD_FIRST_DESIGN_PATTERNS_COMMAND_LOCAL_SYSTEMS_H
#define _HEAD_FIRST_DESIGN_PATTERNS_COMMAND_LOCAL_SYSTEMS_H

#include <memory>

namespace hfdp
{
	namespace command
	{
		class garage_lights
		{
		public:
			void on();
			void off();
		};
		typedef std::shared_ptr< garage_lights > garage_lights_ptr;
		//
		class garage_door
		{
		public:
			void up( );
			void down( );
		};
		typedef std::shared_ptr< garage_door > garage_door_ptr;
		//
		class audio_system
		{
		public:
			void on();
			void off();
			void volume_up();
			void volume_down();
		};
		typedef std::shared_ptr< audio_system > audio_system_ptr;
	}
}

#endif // _HEAD_FIRST_DESIGN_PATTERNS_COMMAND_LOCAL_SYSTEMS_H
