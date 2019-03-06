#pragma once

#include "console/command.h"
#include "lparse.h"

#include <random>

namespace LGen {
	class Command::System final : public Command {
	public:
		System();

		class New;
		class Print;
		class Generate;
		class Axiom;
		class Iterations;
		class Delete;
		class Rule;
		class Save;
		class Load;
		class Render;

	private:
		static const std::string KEYWORD;
		static const std::string ALIAS;
		static const std::string MSG_NO_SYSTEM;
		static const std::string MSG_SYSTEM_INCOMPLETE;

		static struct Workspace {
			Workspace();

			std::mt19937 randomizer;
			std::unique_ptr<LParse::System> system;
			size_t iterations;
		} workspace;
	};
};