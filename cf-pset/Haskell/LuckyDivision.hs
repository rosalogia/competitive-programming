isLucky :: Int -> Bool
isLucky x = (== []) . filter (\x -> x /= '4' && x /= '7') . show $ x

divisors :: Int -> [Int]
divisors n = filter (\x -> n `rem` x == 0) $ [1 .. (n - 1)]

main = do
    line <- getLine
    let n = (read :: String -> Int) line
    let luckyDivisors = map isLucky (divisors n)

    putStrLn (if (isLucky n) then "YES" else if (any (== True) luckyDivisors) then "YES" else "NO")
