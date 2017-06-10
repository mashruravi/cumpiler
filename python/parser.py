import hermes
import sys

if __name__ == "__main__":
  arguments = sys.argv
  source_file = arguments[1]
  tokens = open(source_file).read()

  with open('calclang.hgr') as fp:
    parser = hermes.compile(fp)

  tree = parser.parse(tokens)

  print(tree.dumps(indent=2))