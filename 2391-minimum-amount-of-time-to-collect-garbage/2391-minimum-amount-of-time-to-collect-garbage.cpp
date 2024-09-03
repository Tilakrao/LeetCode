class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        //plastic
        int pickP = 0;
        int travelP = 0;
        int lstindP = 0;
        
        //metal
        int pickM = 0;
        int travelM = 0;
        int lstindM = 0;
        
        //glass
        int pickG = 0;
        int travelG = 0;
        int lstindG = 0;
        
        
        for(int i = 0; i < garbage.size() ; i++)
        {
            string char_list = garbage[i];
            
            for(int j = 0; j<char_list.length();j++)
            {
                if(char_list[j] == 'P')
                {
                    pickP++;
                    lstindP = i;
                }
                if(char_list[j] == 'M')
                {
                    pickM++;
                    lstindM = i;
                }
                if(char_list[j] == 'G')
                {
                    pickG++;
                    lstindG = i;
                }
            }        
        }
        
        
        
        for(int k=0;k<lstindP;k++)
        {
            travelP += travel[k];
        }
        for(int k=0;k<lstindM;k++)
        {
            travelM += travel[k];
        }
        for(int k=0;k<lstindG;k++)
        {
            travelG += travel[k];
        }
        
        return  travelP + travelM + travelG + pickP + pickM + pickG ;
       
    
    }
};