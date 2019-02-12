#pragma once

#include "workspace/workspace.h"
#include "lparse.h"

#include <memory>

namespace LGen {
	class Workspace::System final {
	public:
		void create();
		void destroy();
		
	private:
		std::unique_ptr<LParse::System> system;
	};
}