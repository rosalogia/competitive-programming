advancers :: Int -> [Int] -> Int
advancers k p = length . filter (\x -> x >= winningScore && x > 0) $ p
    where
        winningScore = p !! (k - 1)

main = do
    nm <- getLine
    let [n, m] = map (read :: String -> Int) . words $ nm

    participantString <- getLine

    let participants = map (read :: String -> Int) . words $ participantString

    print . advancers m $ participants
