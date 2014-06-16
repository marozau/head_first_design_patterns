#include "local_systems.h"

#include <iostream>

namespace hfdp
{
	namespace command
	{
		void garage_lights::on()
		{
			std::cout << "garage lights: ON" << std::endl;
		}
		void garage_lights::off()
		{
			std::cout << "garage lights: OFF" << std::endl;
		}
		//
		void garage_door::up()
		{
			std::cout << "garage door: UP" << std::endl;
		}
		void garage_door::down()
		{
			std::cout << "garage door: DOWN" << std::endl;
		}
		//
		void audio_system::on()
		{
			std::cout << "audio system: ON" << std::endl;
		}
		void audio_system::off()
		{
			std::cout << "audio system: OFF" << std::endl;
		}
		void audio_system::volume_up()
		{
			std::cout << "audio system: VOLUME UP" << std::endl;
		}
		void audio_system::volume_down()
		{
			std::cout << "audio system: VOLUME DOWN" << std::endl;
		}
		//
		void ceiling_fan::high()
		{
			speed_ = HIGH;
		}
		void ceiling_fan::medium()
		{
			speed_ = MEDIUM;
		}
		void ceiling_fan::low()
		{
			speed_ = LOW;
		}
		void ceiling_fan::off()
		{
			speed_ = OFF;
		}
		const ceiling_fan::speed ceiling_fan::get_speed( ) const
		{
			return speed_;
		}
	}
}