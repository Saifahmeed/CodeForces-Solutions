import os

# Path to the directory containing the code files
codes_directory = 'Codes'

# Path to the README file
readme_path = '.readme'

# Initialize an empty list to hold file names
file_list = []

# Iterate through the files in the Codes directory
for filename in os.listdir(codes_directory):
    # Check if the file is a regular file (not a directory)
    if os.path.isfile(os.path.join(codes_directory, filename)):
        file_list.append(filename)

# Count the number of files
file_count = len(file_list)

# Prepare the content to add to the README file
file_list_content = "\n".join(file_list)
new_readme_content = f"""
# Codeforces Solutions
This repository contains my solutions to Codeforces problems in C++ language.  

## List of Solutions ({file_count} files)

#### If this helped you out, please consider giving it a :star:
"""

# Write the new content to the README file
with open(readme_path, 'w') as readme_file:
    readme_file.write(new_readme_content)

print(f'Updated {readme_path} with {file_count} files.')
