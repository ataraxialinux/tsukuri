project('tsukuri', 'c',
	version: '0.2.2',
	meson_version: '>= 0.55.0',
	license: 'ISC',
	default_options : ['c_std=c18']
)

prefix = get_option('prefix')
bindir = join_paths(prefix, get_option('bindir'))
mandir = join_paths(prefix, get_option('mandir'))

cc = meson.get_compiler('c')
bash = find_program('bash')
bsdcpio = find_program('bsdcpio')
curl = find_program('curl')
jq = find_program('jq')
lzip = find_program('zstd')

c_args = [
	'-Wall',
	'-Wextra',
	'-Wpedantic',
	'-Werror'
]
supported_args = cc.get_supported_arguments(c_args)

if get_option('systemd')
	systemd_c_args = [
		'-DSYSTEMD'
	]
	add_project_arguments(systemd_c_args, language: 'c')
	systemd_dep = dependency('libsystemd')
endif

subdir('src')
