#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int num_videos, videos_with_plus_10M_views = 0, videos_with_less_10M_views = 0;
	
	do{
		cin >> num_videos;
	}
	while(num_videos < 0 && num_videos > 1000);
	
	int views[num_videos];

	for(int i=0;i<num_videos; i++)
	{
		cin >> views[i];
	}
	for(int i=0; i<num_videos; i++)
	{
		if(views[i] > 10000000)
		{
			videos_with_plus_10M_views += 1;
		}
		else
		{
			videos_with_less_10M_views += 1;
		}
	}
	cout << videos_with_plus_10M_views << " video(s) com mais de 10M views" << endl;
	cout << videos_with_less_10M_views << " video(s) com menos de 10M views" << endl;
		
	return 0;
}