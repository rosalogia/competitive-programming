import Data.List
import Data.Function

counts :: [Int] -> [(Int, Int)]
counts [] = []
counts l = (x, length c) : counts r
    where
        x = head l
        (c, r) = partition (== x) l

main = do
    ns <- getLine
    ss <- getLine
    let s = map (read :: String -> Int) . words $ ss
    let [ones, twos, threes, fours] = map (\x -> length . filter (== x) $ s) [1..4]
    print (fours + threes + (twos * 2 + 3 + max 0 (ones - threes)) `div` 4)
