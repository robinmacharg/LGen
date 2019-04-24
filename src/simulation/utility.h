#pragma once

#include "lrender.h"
#include "lparse.h"

namespace LGen {
	class Utility final {
	public:
		static double utility(const LRender::ReportAgent &report, const LParse::System &system);

	private:
		static const size_t MAX_ZERO_SURFACE_SYMBOLS = 55;
	};
}