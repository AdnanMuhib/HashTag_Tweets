# HashTag_Tweets
TeraData Challenge
Twitter is a unique social technology tool that has evolved a set of adopted standards to label important text in a message. From these labels emerged hashtags, cashtags, mentions, and replies.

Hashtags are commonly used by marketers, behavioral scientists, sociologists, political scientists to learn about the spread of ideas and reveal emerging social trends. Marketers can learn about the reach of marketing campaign, and sporting organizations learn about spread of real time information amongst fans.

This problem will explore a technique to evaluate trending keywords used in a set of data about two of America's favorite Baseball teams.

Here is an example tweet.

> Teradata Coders
> Good luck to all those participating in the MLB themed code challenge today!
> @Teradata #MLB

The top line is the user, the next lines compose the body of the message. In the message there is a tagged user “@Teradata” the @ symbol indicating a tag. There is also a hashtag, “#MLB”, the # symbol indicating a hashtag.

Some things to note about mentions and hashtags is that they are usually not case sensitive. For example the mentions @Teradata and @teradata refer to the same user.

We have collected a dataset of tweets for this challenge. Our dataset consists of tweets for the past few months with baseball team hashtags.

Your task is to print the total number of occurrences of a given hashtag by reading the formated data file provided as input.

You will need to understand what rules Twitter applies to extracting tags from a tweet and translate this knowledge into code which can efficiently parse a large set of messages your program will read from a text file.

## Input Format

The 1st line of the input contains the hashtag ( without "#" pound sign) and within quotes. The 2nd line of the input contains the filename in which the dataset of tweets in JSON format.

The file is present in the current folder. 
## JSON FORMAT
{
   “TweetCount” : 1234,
   “TwitterData” : [ {
     “username” : “user1”,
     “tweetid”  : 1,
     “tweet”    : “@userbob it’s a #game”
    },  {
     “username” : “user2”,
     “tweetid”  : 3,
     “tweet”    : “@jackuser : RT it’s a #game”
    },  
    ...
    {
      “username” : “userN”,
      “tweetid”  : 1234,
      “tweet”    : “A Game of Chance and Stats #MLB”
    }  ]
}
## Constraints

1 <= TweetCount <= 300000
hashtag is alphanumeric
Username, Tweet are of UTF-8 format
1 <= Tweetid <= 1020

## Output Format
The first line must print S, which is the total number of occurrences of the given hashtag. If the input parameters to this problem are not valid your output should be -1.

For this problem Hashtags counting should conform to Twitter standards.

## Sample Input:

> "fuzzydice"
> input000.in

## input000.in

{
  "TweetCount" : 7,
  "TwitterData" : [ {
    "userName" : "user1",
    "tweetid" : 1,
    "tweet" : "This message is all about #fuzzydice"
  }, {
    "userName" : "user1",
    "tweetid" : 2,
    "tweet" : "This message is about about fuzzydice"
  }, {
    "userName" : "user1",
    "tweetid" : 3,
    "tweet" : "this message is all about \"fuzzydice\""
  }, {
    "userName" : "user1",
    "tweetid" : 4,
    "tweet" : "This message is all about #FuzzyDice"
  }, {
    "userName" : "user1",
    "tweetid" : 5,
    "tweet" : "This message is all about #fuzzydice and more #fuzzydice"
  }, {
    "userName" : "user1",
    "tweetid" : 6,
    "tweet" : "This message is all about #fuzzy dice and more #fuzzydice"
  }, {
    "userName" : "user1",
    "tweetid" : 7,
    "tweet" : "This message is all about @fuzzydice and more #füzzydice"
  } ]
}

## Sample Output:

> 5


