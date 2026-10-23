def reverseWords(s: str) -> str:
    """
    Reverses the order of words in a given string.

    Args:
        s (str): The input string containing words separated by spaces.
        """
    # Split the string into words using whitespace as the delimiter
    s = s.strip()  # Remove leading and trailing whitespace
    words = s.split()

    # Reverse the list of words
    reversed_words = words[::-1]

    # Join the reversed list of words back into a single string with spaces
    result = ' '.join(reversed_words)

    return result

result = reverseWords("Hello World from OpenAI")
print(result)  # Output: "OpenAI from World Hello"