#include "console/commands/help.h"

using namespace LGen;

const std::string Command::Help::KEYWORD = "help";
const std::string Command::Help::ALIAS = "?";
const std::string Command::Help::FILE = "text/help.txt";

Command::Help::Help() :
	Command({ KEYWORD, ALIAS }) {

}

void Command::Help::application(
	const std::vector<std::string> arguments,
	const Console &console,
	Workspace &workspace) {
	console.dumpFile(FILE);
	console.getCommandList().enumerateKeywords(console);
}