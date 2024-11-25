#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Function to find the page to replace
int findPageToReplace(vector<int> &memory, vector<int> &pages, int ind)
{
    int leastRecentPage;
    int leastRecentIndex = pages.size();
    for (auto page : memory)
    {
        int index;
        for (int i = ind - 1; i >= 0; i--)
        {
            if (pages[i] == page)
            {
                index = i;
                break;
            }
        }
       //jo index peeche hain mtlb vo least recent hoga toh vo index and page note krlo 
        if (index < leastRecentIndex)
        {
            leastRecentIndex = index;
            leastRecentPage = page;

        }
    }

    //ab uska page ka index return krdo
  for(int i = 0 ; i < memory.size(); i++){
    if(memory[i] == leastRecentPage){
        return i;
    }
  }
}

// Function to simulate the Optimal Page Replacement Algorithm
void lru(int frames, vector<int> pages)
{
    vector<int> memory;
    
    int hits = 0, misses = 0;

    for (int i = 0; i < pages.size(); i++)
    {

        int page = pages[i];
        // Check if the page is already in memory
        if (find(memory.begin(), memory.end(), pages[i]) != memory.end())
        {
            // cout << "Hit" << endl;
            hits++;
        }
        else
        {
            misses++;

            // If memory is full, find a page to replace
            if (memory.size() == frames)
            {
                int replaceIndex = findPageToReplace(memory, pages, i);
                // cout << "replace = " << replaceIndex << endl;
                memory[replaceIndex] = page; // Replace the page
            }
            else
            {
                // Add the page directly if memory is not full
                memory.push_back(page);
            }
            // Print the current state of memory
            cout << "Memory: ";
            for (int page : memory)
            {
                cout << page << " ";
            }
            cout << endl;
        }
    }

    cout << "Total Hits: " << hits << endl;
    cout << "Total Misses: " << misses << endl;
}

int main()
{
    int frames;
    cout << "Enter the number of frames: ";
    cin >> frames;

    int n;
    cout << "Enter the number of pages: ";
    cin >> n;

    vector<int> pages(n);
    cout << "Enter the pages: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> pages[i];
    }

    lru(frames, pages);

    return 0;
}
// 7 0 1 2 0 3 0 4 2 3 0 3 1 2 0