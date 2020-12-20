vercmp_src = [
	'dewey.c',
	'vercmp.c'
]

send_to_journal_src = [
	'send-to-journal.c'
]

executable('vercmp', vercmp_src)

if get_option('systemd')
	executable('send-to-journal', send_to_journal_src, dependencies: systemd_dep)
else
	executable('send-to-journal', send_to_journal_src)
endif
