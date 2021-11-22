{
  'targets': [
    {
      'target_name': 'raylib-4.0-native',
      'sources': [ 'raylib_4.0.cc' ],
			'libraries': ['../raylib/lib/libraylib.a'],
      'include_dirs': ["<!@(node -p \"require('node-addon-api').include\")"],
      'dependencies': ["<!(node -p \"require('node-addon-api').gyp\")"],
      'cflags!': [ '-fno-exceptions' ],
      'cflags_cc!': [ '-fno-exceptions' ],
      'xcode_settings': {
        'GCC_ENABLE_CPP_EXCEPTIONS': 'YES',
        'CLANG_CXX_LIBRARY': 'libc++',
        'MACOSX_DEPLOYMENT_TARGET': '10.7'
      },
      'msvs_settings': {
        'VCCLCompilerTool': { 'ExceptionHandling': 1 },
      },
      "conditions": [
        ['OS=="linux" or OS=="solaris" or OS=="freebsd"', {
          "libraries": [
          ]
        }],
        ['OS=="win"', {
          "libraries": [
          ]
        }],
        ['OS=="mac"', {
          "libraries": [
          ],
        }]
      ]
    }
  ]
}