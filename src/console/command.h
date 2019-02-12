#pragma once

#include "console/input.h"
#include "console/console.h"
#include "console/commandList.h"
#include "workspace/workspace.h"

#include <vector>
#include <string>
#include <memory>

namespace LGen {
	class Command {
	public:
		class Exit;
		class Help;
		class System;

		Command(const std::vector<std::string> triggers);
		Command(const std::vector<std::string> triggers, const std::string help);
		Command(const std::vector<std::string> triggers, const std::vector<Command*> commands);
		bool apply(const Input &input, const Console &console, Workspace &workspace);
		const std::string &getTrigger() const;
		std::vector<std::string> getAliases() const;

	protected:
		virtual void application(
			const std::vector<std::string> arguments,
			const Console &console,
			Workspace &workspace);

	private:
		static const std::string MSG_HELP_LIST;
		static const std::string MSG_NEED_MORE_ARGUMENTS;

		const bool hasHelp;
		const std::vector<std::string> triggers;
		const std::string help;
		std::unique_ptr<CommandList> commandList;

		void showHelp(const Console &console) const;
	};
};