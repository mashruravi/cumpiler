import la
import sys

if __name__ == "__main__":
    arguments = sys.argv
    source_file = arguments[1]
    dest_file = arguments[2]

    la.initialize(source_file)

    dest = open(dest_file, 'w')
    while(la.has_more_tokens()):
        token = la.next()
        dest.write(token + " ")

    dest.close()