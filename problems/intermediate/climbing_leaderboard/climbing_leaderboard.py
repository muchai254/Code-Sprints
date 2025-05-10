def climbingLeaderboard(ranked, player):
    # Remove duplicates and sort in descending order
    unique_scores = sorted(set(ranked), reverse=True)
    
    result = []
    index = len(unique_scores) - 1  # Start from the lowest unique rank
    
    for score in player:
        # Move left on the leaderboard while the player's score is >= leaderboard score
        while index >= 0 and score >= unique_scores[index]:
            index -= 1
        # Rank is index + 2 because index is 0-based and we move past matched position
        result.append(index + 2)
        
    return result
