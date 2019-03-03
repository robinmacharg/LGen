#pragma once

#include "console/commands/render/render.h"

namespace LGen {
	class Command::Render::Wireframe final : public Command {
	public:
		Wireframe();

	protected:
		void application(
			const std::vector<std::string> arguments,
			Console &console,
			Workspace &workspace) override;

	private:
		static const std::string KEYWORD;
		static const std::string FILE_HELP;
	};
};