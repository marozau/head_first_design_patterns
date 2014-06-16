#ifndef _HEAD_FIRST_DESIGN_PATTERNS_COMMAND_COMBINED_COMMAND_H
#define _HEAD_FIRST_DESIGN_PATTERNS_COMMAND_COMBINED_COMMAND_H

#include <vector>

#include "concrete_commands.h"

namespace hfdp
{
	namespace command
	{
		class combined_command : public command_interface
		{
			typedef std::vector< command_ptr > command_storage;
			command_storage storage_;

		public:
			explicit combined_command( const command_storage& storage );
			virtual ~combined_command();
			//
			virtual void execute();
			virtual void undo();
		};
	}
}

#endif // _HEAD_FIRST_DESIGN_PATTERNS_COMMAND_COMBINED_COMMAND_H

