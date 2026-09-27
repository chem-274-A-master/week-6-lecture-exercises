# Week 6 Lecture Exercises

## Instructions

Each directory contains an exercise. Read the instructions in its `main.cpp` and
complete that file. Do not change `run_test.cpp` or `run_test.sh` when submitting
your solution.

## Testing

Run an exercise's test from the repository root with, for example:

```sh
bash CTemplates1/run_test.sh
```

The script works from any directory. A passing test prints `SUCCESS`; compilation
errors or failed assertions indicate that the exercise is incomplete. To run all
four tests and see the same point summary as CI, run:

```sh
python3 .github/scripts/grade.py
```

The grader gives one point each for `CInheritance1`, `CInheritance2`,
`CTemplates1`, and `CTemplates2` and writes `grading-results.json` locally.
