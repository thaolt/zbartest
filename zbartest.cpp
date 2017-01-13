#include <cstddef>
#include <iostream>
#include <zbar.h>

using namespace std;
using namespace zbar;

int main()
{
	Processor * zbarProcessor = new Processor();
	SymbolSet scans;
	zbarProcessor->init("/dev/video0", true);
	// zbarProcessor->set_active();
	zbarProcessor->request_size(320,240);
	zbarProcessor->set_visible();
	while (true) {
		zbarProcessor->process_one();
		scans = zbarProcessor->get_results();
		string data = scans.symbol_begin()->get_data();
		cout << data << endl;
	}
	return 0;
}
