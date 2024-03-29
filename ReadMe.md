# Chocolatine

Chocolatine is a project developed at Epitech for conducting coding style checks, compiling the project, running unit tests, and pushing changes to the Epitech repository.

## Workflow Overview

1. **Coding Style Check**: This job ensures that the code follows the prescribed coding style. It runs a series of checks on the codebase to detect any style violations.

2. **Program Compilation Check**: After passing the coding style check, the project is compiled to ensure that it builds successfully without errors.

3. **Unit Test Execution**: Upon successful compilation, unit tests are executed to verify the functionality of the code.

4. **Push to Epitech Repository**: Finally, if all previous steps are successful, the changes are pushed to the Epitech repository for further review and integration.

## Workflow Details

### Coding Style Check

- **Job Name**: `check_coding_style`
- **Runs On**: Ubuntu latest
- **Container**: Epitech's coding style checker
- **Steps**:
    1. **Checkout Repository**: Clones the GitHub repository for further processing.
    2. **Run Coding Style Check**: Executes the script to check the coding style of the project.
    3. **Create Annotations**: Parses the coding style report and creates annotations for any errors found.
    4. **Report Results**: Reports the number of coding style errors found. If errors exist, the job fails.

### Program Compilation Check

- **Job Name**: `check_program_compilation`
- **Runs On**: Ubuntu latest
- **Container**: Epitech's test Docker container
- **Dependencies**: Depends on `check_coding_style` job
- **Steps**:
    1. **Checkout Repository**: Clones the GitHub repository.
    2. **Compile Repository**: Attempts to compile the project.
    3. **Clean Repository**: Cleans the project directory after compilation.
    4. **Check Executable Files**: Ensures that executable files are present and properly set up.

### Unit Test Execution

- **Job Name**: `run_tests`
- **Runs On**: Ubuntu latest
- **Container**: Epitech's test Docker container
- **Dependencies**: Depends on `check_program_compilation` job
- **Steps**:
    1. **Checkout Repository**: Clones the GitHub repository.
    2. **Compile Tests Binaries**: Compiles the unit tests binaries.

### Push to Epitech Repository

- **Job Name**: `push_to_mirror`
- **Runs On**: Ubuntu latest
- **Dependencies**: Depends on `run_tests` job
- **When**: Triggered by a push event
- **Steps**:
    1. **Checkout Repository**: Clones the GitHub repository.
    2. **Push to Mirror**: Pushes the changes to the Epitech repository for further processing.

## Secrets Required

- **SECRETSSH_PRIVATE_KEY**: SSH private key required for pushing changes to the Epitech repository.

This workflow automates the process of verifying code quality, compiling the project, running tests, and pushing changes to the Epitech repository, ensuring a smooth integration process.

## Comment me contacter
#### cliquez sur les images ci dessous
[![My Skills](https://skillicons.dev/icons?i=linkedin)](https://www.linkedin.com/in/jimmy-ramsamyna%C3%AFck-9b2144288/)
[![My Skills](https://skillicons.dev/icons?i=gmail)](mailto:jimmyramsamynaick@gmail.com)
[![My Skills](https://skillicons.dev/icons?i=twitter)](https://twitter.com/blackangel9708)

N'hésitez pas à explorer mes projets et à me contacter si vous avez des questions ou des suggestions !

---
#### Contributors
- [Jimmy](https://github.com/JimmyRamsamynaick)