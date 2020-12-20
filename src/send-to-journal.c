#ifdef SYSTEMD
#include <systemd/sd-journal.h>
#endif

int main(int argc, char *argv[]) {
#ifdef SYSTEMD
	int r;

	if (!argv[1]) {
		return 1;
	}

	r = sd_journal_print(LOG_INFO, "%s\n", argv[1]);
	if (!r) {
		return 1;
	}
#endif
	return 0;
}
