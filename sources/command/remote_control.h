#ifndef _HEAD_FIRST_DESIGN_PATTERNS_COMMAND_REMOTE_CONTROL_H_
#define _HEAD_FIRST_DESIGN_PATTERNS_COMMAND_REMOTE_CONTROL_H_

#include <vector>
#include <memory>

#include "command_interface.h"

namespace hfdp
{
	namespace command
	{
		class command_pair
		{
			command_ptr on_command_;
			command_ptr off_command_;

		public:
			explicit command_pair();
			explicit command_pair( const command_ptr on_command, const command_ptr off_command );			
			//
			const command_ptr& on_command() const;
			const command_ptr& off_command() const;
		};
		class remote_control
		{
			typedef std::vector< command_pair > command_storage;

			command_storage command_storage_;

			command_ptr last_command_;

		public:
			explicit remote_control( const size_t command_amount );
			~remote_control();
			//
			void set_commnand( const size_t number, const command_ptr on_command, const command_ptr off_command );
			void on( const size_t number );
			void off( const size_t number );
			void undo();

		};
	}
}

#endif // _HEAD_FIRST_DESIGN_PATTERNS_COMMAND_REMOTE_CONTROL_H_
