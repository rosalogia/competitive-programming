import Control.Monad

tooLong :: String -> Bool
tooLong s = length s > 10

abbreviate :: String -> String
abbreviate s
    | tooLong s = [head s] ++ (show . length . init . drop 1 $ s) ++ [last s]
    | otherwise = s

main = do
    n <- readLn :: IO Int
    words <- replicateM n getLine

    putStrLn . unlines . map abbreviate $ words
