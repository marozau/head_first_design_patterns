#ifndef _HEAD_FIRST_DESIGN_PATTERNS_COMMAND_COMMAND_INTERFACE_H
#define _HEAD_FIRST_DESIGN_PATTERNS_COMMAND_COMMAND_INTERFACE_H

namespace hfdp
{
	namespace command
	{
		class command_interface
		{
		public:
			virtual ~command_interface() {}
			//
			virtual void execute() = 0;
			virtual void undo() = 0;
		};
	}
}


#endif // _HEAD_FIRST_DESIGN_PATTERNS_COMMAND_COMMAND_INTERFACE_H
