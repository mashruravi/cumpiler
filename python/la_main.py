import la

if __name__ == "__main__":
    print "Enter the path to the source file: "
    file_path = raw_input() # e.g. source.calc
    file_path = str(file_path)

    la.initialize(file_path)

    while(la.has_more_tokens()):
        token = la.next()
        print token