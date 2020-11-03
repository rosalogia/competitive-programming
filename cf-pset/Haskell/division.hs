import Control.Monad
import Data.Vector

readInteger = read :: String -> Integer

readPair :: String -> (Integer, Integer)
readPair s = case words s of
    (x:y:[]) -> (readInteger x, readInteger y)


divisors :: Integer -> [Integer]
divisors n = n : (filter (\x -> n `rem` x == 0) $ [1 .. (n - 1)])

findX :: (Integer, Integer) -> Integer
findX (p, q) = maximum . filter (\x -> x `rem` q /= 0) . divisors $ p

main = do
    ns <- getLine
    let n = (read :: String -> Int) ns
    pairStrings <- replicateM n getLine
    let pairs = map readPair pairStrings

    putStrLn . unlines . map (show . findX) $ pairs
