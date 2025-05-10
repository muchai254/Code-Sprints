def gradingStudents(grades):
    result = []
    for grade in grades:
        if grade < 38:
            # No rounding for grades below 38
            result.append(grade)
        else:
            # Compute how far from next multiple of 5
            remainder = grade % 5
            if remainder >= 3:
                # Round up to next multiple of 5
                grade += (5 - remainder)
            result.append(grade)
    return result
