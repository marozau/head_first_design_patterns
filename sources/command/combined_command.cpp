#include "combined_command.h"

#include <algorithm>

namespace hfdp
{
	namespace command
	{
		combined_command::combined_command( const command_storage& storage )
			: storage_( storage )
		{
		}
		combined_command::~combined_command()
		{
		}
		//
		void combined_command::execute()
		{
			std::for_each( storage_.begin(), storage_.end(), []( command_ptr& command ) { command->execute(); } );
		}
		void combined_command::undo()
		{
			std::for_each( storage_.begin(), storage_.end(), []( command_ptr& command ) { command->undo(); } );
		}
	}
}
