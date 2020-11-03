import Data.Char
import Data.List

isConsonant :: Char -> Bool
isConsonant c = (toLower c) `notElem` "aeiouy"

periodize :: String -> String
periodize s = concat . transpose $ [replicate (length s) '.', s]

main = do
    line <- getLine
    putStrLn . periodize . map toLower . filter isConsonant $ line
