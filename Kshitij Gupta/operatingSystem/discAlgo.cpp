    // 6 algo hain
    // time calculate
    //  input -array of numbers , starting point
    // output -
    // first come first serve

    #include <iostream>
    #include <climits>
    #include <vector>
    #include <algorithm>
    using namespace std;
    void fcfs(vector<int> arr, int start)
    {
        int n = arr.size();
        int totalTime = abs(arr[0] - start);
        for (int i = 1; i < n; i++)
        {
            totalTime += abs(arr[i] - arr[i - 1]);
        }
        cout << totalTime;
    }
    void sstf(vector<int> arr, int start)
    {
        int n = arr.size();
        int totalTime = 0;
        vector<int> visited(n, 0);
        int diff = INT_MAX, ind;

        // if starting point included in the array mark visit as true
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == start)
            {
                visited[i] = true;
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int i = 0; i < n; i++)
            {
                if (!visited[i] && abs(arr[i] - start) < diff)
                {
                    diff = abs(arr[i] - start);
                    ind = i;
                }
            }
            visited[ind] = true;
            totalTime += diff;
            diff = INT_MAX;
            start = arr[ind];
        }

        cout << "TT - " << totalTime << endl;
    }
    // 82 170 43 140 24 16 190
    // input arr , stating poiint , diretion , track
    void scan(vector<int> arr, int start, int right, int track)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int ind;
        if (right)
        {
            // just badi value se shuru kar
            for (int i = 0; i < n; i++)
            {
                if (arr[i] >= start)
                {
                    ind = i;
                    break;
                }
            }

            int tt = arr[ind] - start;
            for (int i = ind + 1; i < n; i++)
            {
                tt += arr[i] - arr[i - 1];
            }
            // Add time to move back to the last position on the track
            tt += track - 1 - arr[n - 1];
            // going back in reverse direction
            if (ind > 0)
            {
                tt += track - 1 - arr[ind - 1];
            }
            for (int i = ind - 2; i >= 0; i--)
            {
                tt += arr[i+1] - arr[i];
            }
            cout << "tt = " << tt << endl;
        }
        else
        {
            for (int i = n-1; i >= 0; i--)
            {
                if (arr[i] <= start)
                {
                    ind = i;
                    break;
                }
            }

            int tt = start - arr[ind];
            for (int i = ind - 1; i >= 0; i--)
            {
                tt += arr[i] - arr[i - 1];
            }
            // Add time to move back to the first position on the track
            tt += arr[0];
            // going back in reverse direction
            if (ind < n-1)
            {
                tt += arr[ind + 1];
            }
            for (int i = ind + 2; i >= 0; i++)
            {
                tt += arr[i] - arr[i-1];
            }
            cout << "tt = " << tt << endl;
        }
    }

    void look(vector<int> arr, int start, int right)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int ind;
        if (right)
        {
            // just badi value se shuru kar
            for (int i = 0; i < n; i++)
            {
                if (arr[i] >= start)
                {
                    ind = i;
                    break;
                }
            }

            int tt = arr[ind] - start;
            for (int i = ind + 1; i < n; i++)
            {
                tt += arr[i] - arr[i - 1];
            }

            
            //end mein ni jana
            //tt += track - 1 - arr[n - 1];
            // going back in reverse direction
            if (ind > 0)
            {
                tt += arr[n-1] - arr[ind - 1];
            }
            for (int i = ind - 2; i >= 0; i--)
            {
                tt += arr[i+1] - arr[i];
            }
            cout << "tt = " << tt << endl;
        }
        else
        {
            for (int i = n-1; i >= 0; i--)
            {
                if (arr[i] <= start)
                {
                    ind = i;
                    break;
                }
            }

            int tt = start - arr[ind];
            for (int i = ind - 1; i >= 0; i--)
            {
                tt += arr[i] - arr[i - 1];
            }
            // start tak ni jana
            // tt += arr[0];
            // going back in reverse direction
            if (ind < n-1)
            {
                tt += arr[ind + 1] - arr[0];
            }
            for (int i = ind + 2; i >= 0; i++)
            {
                tt += arr[i] - arr[i-1];
            }
            cout << "tt = " << tt << endl;
        }
    }


    void cscan(vector<int> arr, int start, int right, int track)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int ind;
        if (right)
        {
            // just badi value se shuru kar
            for (int i = 0; i < n; i++)
            {
                if (arr[i] >= start)
                {
                    ind = i;
                    break;
                }
            }

            int tt = arr[ind] - start;
            for (int i = ind + 1; i < n; i++)
            {
                tt += arr[i] - arr[i - 1];
            }
            // Add time to move back to the last position on the track
            tt += track - 1 - arr[n - 1];
            //to jump instart
            tt+= track -1;
            // add for first element
            tt += arr[0];
            for (int i = 1; i < ind; i++)
            {
                tt += arr[i] - arr[i-1];
            }
            cout << "tt = " << tt << endl;
        }
        else
        {
            for (int i = n-1; i >= 0; i--)
            {
                if (arr[i] <= start)
                {
                    ind = i;
                    break;
                }
            }

            int tt = start - arr[ind];
            for (int i = ind - 1; i >= 0; i--)
            {
                tt += arr[i] - arr[i - 1];
            }
            // Add time to move back to the first position on the track
            tt += arr[0];
            tt += track -1;
            tt += track - arr[n-1];
            // going back in reverse direction
            for (int i = n-2; i > ind; i--)
            {
                tt += arr[i+1] - arr[i];
            }
            cout << "tt = " << tt << endl;
        }
    }



    void clook(vector<int> arr, int start, int right)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int ind;
        if (right)
        {
            // just badi value se shuru kar
            for (int i = 0; i < n; i++)
            {
                if (arr[i] >= start)
                {
                    ind = i;
                    break;
                }
            }

            int tt = arr[ind] - start;
            for (int i = ind + 1; i < n; i++)
            {
                tt += arr[i] - arr[i - 1];
            }
            //to jump instart
            tt += arr[n-1] - arr[0];
            
            for (int i = 1; i < ind; i++)
            {
                tt += arr[i] - arr[i-1];
            }
            cout << "tt = " << tt << endl;
        }
        else
        {
            for (int i = n-1; i >= 0; i--)
            {
                if (arr[i] <= start)
                {
                    ind = i;
                    break;
                }
            }

            int tt = start - arr[ind];
            for (int i = ind - 1; i >= 0; i--)
            {
                tt += arr[i] - arr[i - 1];
            }
            // Add time to move back to the first position on the track
            
            tt += arr[n-1] - arr[0];
            // going back in reverse direction
            for (int i = n-2; i > ind; i--)
            {
                tt += arr[i+1] - arr[i];
            }
            cout << "tt = " << tt << endl;
        }
    }



    int main()
    {
        cout << "Enter the size of array - ";
        int n;
        cin >> n;
        vector<int> arr(n);
        cout << "Enter elements :" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Enter starting time - ";
        int startingTime;
        cin >> startingTime;
        // fcfs(arr , startingTime);
        // sstf(arr , startingTime);
        // scan(arr, startingTime, 1, 200);
        // look(arr , startingTime , 1);
        // cscan(arr ,startingTime , 1, 200);
        // clook(arr ,startingTime , 1);
    }