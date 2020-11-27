count x = length . filter (== x)

filterDuplicates l = filter (\x -> count x l > 1) l
filterNonDuplicates l = filter (\x -> count x l == 1) l
numWithGCD x n = head . filter (\y -> gcd x y == n)

main = do
    n <- readLn :: IO Int
    nums <- getLine
    let numbers = map (read :: String -> Integer) . words $ nums 
    let target = maximum . filterDuplicates $ numbers
    let nondupes = filterNonDuplicates numbers
    let nmax = maximum nondupes
    putStrLn $ (show nmax) ++ " " ++ (show $ numWithGCD nmax target nondupes)

