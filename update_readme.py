import os

# Path to the directory containing the code files
codes_directory = 'Code'

# Path to the README file
readme_path = 'README.md'

# Base URL for linking to files in the GitHub repository
github_base_url = 'https://github.com/Saifahmeed/CodeForces-Solutions/blob/master/'

# Initialize an empty list to hold file entries for the table
table_entries = []

# Iterate through the files in the Codes directory and add to the table
for index, filename in enumerate(os.listdir(codes_directory), start=1):
    # Check if the file is a regular file (not a directory)
    if os.path.isfile(os.path.join(codes_directory, filename)):
        problem_name = os.path.splitext(filename)[0]
        file_url = os.path.join(github_base_url, codes_directory, filename)
        table_entries.append(f"| {index} | {problem_name} | [Solution]({file_url}) |")

# Prepare the table content
table_header = "|  Index  | Problem Name | Solution |\n| :-----: | :----------: | :------: |"
table_content = "\n".join(table_entries)

# Prepare the new README content
new_readme_content = f"""
<div align="center">

# Codeforces Solutions
This repository contains my solutions to Codeforces problems in C++ language.  

## Index 
{table_header}
{table_content}

#### If this helped you out, please consider giving it a :star:
</div>
"""

# Write the new content to the README file
with open(readme_path, 'w') as readme_file:
    readme_file.write(new_readme_content)

print(f'Updated {readme_path} with the list of solution files.')
