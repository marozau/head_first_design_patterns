#include "remote_control.h"

#include "concrete_commands.h"

namespace hfdp
{
	namespace command
	{
		command_pair::command_pair()
		{
			on_command_.reset( new empty_command );
			off_command_.reset( new empty_command );
		}
		command_pair::command_pair( const command_ptr on_command, const command_ptr off_command )
			: on_command_( on_command )
			, off_command_( off_command )
		{
		}
		//
		const command_ptr& command_pair::on_command() const
		{
			return on_command_;
		}
		const command_ptr& command_pair::off_command() const
		{
			return off_command_;
		}
		//
		remote_control::remote_control( const size_t command_amount )
			: command_storage_( command_amount )
		{
			last_command_.reset( new empty_command() );
		}
		remote_control::~remote_control()
		{
		}
		//
		void remote_control::set_commnand( const size_t number, const command_ptr on_command, const command_ptr off_command )
		{
			command_storage_.at( number ) = command_pair( on_command, off_command );
		}
		void remote_control::on( const size_t number )
		{
			const command_ptr& command = command_storage_.at( number ).on_command();
			command->execute( );
			last_command_ = command;
		}
		void remote_control::off( const size_t number )
		{
			const command_ptr& command = command_storage_.at( number ).off_command( );
			command->execute( );
			last_command_ = command;
		}
		void remote_control::undo()
		{
			last_command_->undo();
		}
	}
}
