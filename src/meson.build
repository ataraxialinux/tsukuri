vercmp_src = [
	'dewey.c',
	'vercmp.c'
]

send_to_journal_src = [
	'send-to-journal.c'
]

executable('vercmp', vercmp_src, install: true, install_dir: bindir)

if get_option('systemd')
	executable('send-to-journal', send_to_journal_src, dependencies: systemd_dep, install: true, install_dir: bindir)
else
	executable('send-to-journal', send_to_journal_src, install: true, install_dir: bindir)
endif

verconf = configuration_data()
verconf.set('VERSION', '@0@'.format(meson.project_version()))
configure_file(
	input: 'tsukuri.in',
	output: 'tsukuri',
	configuration: verconf,
	install_dir: bindir
)
