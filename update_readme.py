import os

# Path to the directory containing the code files
codes_directory = 'Code'  # Ensure this is the correct directory name

# Path to the README file
readme_path = 'README.md'

# Base URL for linking to files in the GitHub repository
github_base_url = 'https://github.com/Saifahmeed/CodeForces-Solutions/blob/master/'

# Initialize an empty list to hold file entries for the table
table_entries = []

# Iterate through the files in the Codes directory and add to the table
for index, filename in enumerate(os.listdir(codes_directory), start=0):
    # Construct the full file path
    file_path = os.path.join(codes_directory, filename)
    # Check if the path is a file
    if os.path.isfile(file_path):
        problem_name = os.path.splitext(filename)[0]
        file_url = f"{github_base_url}/{codes_directory}/{filename}".replace('\\', '/')
        table_entries.append(f"| {index} | {problem_name} | [Solution]({file_url}) |")

# Prepare the table content
table_header = "|  Index  | Problem Name | Solution |\n| :-----: | :----------: | :------: |"
table_content = "\n".join(table_entries)

# New content to append
new_content = f"""
<div align="center">

## Problem List

#### Sorted by Problem Name

## Index 
{table_header}
{table_content}
</div>
"""

# Read the existing README content
with open(readme_path, 'r') as readme_file:
    existing_content = readme_file.read()

# Ensure the new content is added after the initial descriptive text
updated_readme_content = f"""
# Codeforces Solutions

This repository contains my solutions to Codeforces problems in C++ language.

#### If this helped you out, please consider giving it a :star:

{new_content}
"""

# Write the updated content to the README file
with open(readme_path, 'w') as readme_file:
    readme_file.write(updated_readme_content)

print(f'Updated {readme_path} with the list of solution files.')
