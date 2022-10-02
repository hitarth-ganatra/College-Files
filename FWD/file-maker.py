import os

i = 1;

while i <= 10:
    with open(f"{i}.html", 'w') as f:
        f.write(f"<!DOCTYPE html>\n<html>\n<head>\n<title>22BCA064</title>\n</head>\n<body>\n\t\n</body>\n</html>")
        f.close()
        
    # to delete files using python
    os.remove(f"{i}.html")
    i += 1