project('tsukuri', 'c',
	version: '0.1',
	meson_version: '>= 0.55.0',
	license: 'ISC',
	default_options : ['c_std=c18']
)

cc = meson.get_compiler('c')
bash = find_program('bash')
bsdcpio = find_program('bsdcpio')
curl = find_program('curl')
jq = find_program('jq')
lzip = find_program('lzip')

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
