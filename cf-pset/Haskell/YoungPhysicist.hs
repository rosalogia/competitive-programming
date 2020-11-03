import Data.List
import Control.Monad

parseVector :: String -> [Int]
parseVector s = map (read :: String -> Int) . words $ s

main = do
    nl <- getLine
    let n = (read :: String -> Int) nl
    vectorStrings <- replicateM n getLine
    let vectors = map parseVector vectorStrings

    putStrLn (if (all (== 0) . map sum . transpose $ vectors) then "YES" else "NO")

