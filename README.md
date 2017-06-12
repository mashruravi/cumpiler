# cumpiler
A simple compiler for Calculator Language. Made as part of course SESAP ZC416 (BITS WILP).

## How to use:

#### To use the lexical analyser, use the ```la_main.py``` file as follows:
```
$ python la_main.py <source_file> <target_file>
```

#### To use the parser, use the ```parser.py``` file as follows:
```
$ python3 parser.py <token_file>
```

Note:
 - The parser uses Hermes, which needs Python 3.4+.
 - The <token_file> input to the parser is the <target_file> that the lexical analyser generated.
