#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;
struct item {
    int val;
    int weight;
};
bool comp (item i1,item i2){
    // custom comparater for sorting 
    double v_w_i1= static_cast<double> (i1.val)/i1.weight;
    double v_w_i2=static_cast<double> (i2.val)/i2.weight;
    return v_w_i1>v_w_i2;
}
double fractional (int w,vector<item> & items){
        double ans=0;
        sort (items.begin(),items.end(), comp);
        for (const auto & itm : items){
            if (itm.weight<=w ){
                ans+= itm.val;
                cout<<ans<<" ";
                w -= itm.weight;
                cout<<w<<" ";
            }
            else {
                // we cann't pick the whole items as in knapsnap is less 
                double fraction = static_cast <double> (w)/itm.weight;
                ans += fraction * itm.val;
                cout<<ans<<" ";
                w -= fraction* itm.weight;
                cout<<w<<" ";
            }
        }
        return ans;

}

int main(){
    int n,W;
    cin>>n>>W;
    vector<item> items;
    for (int i=0;i<n;i++){
        int v,w;
        cin>>v>>w;
        item it;
        it.val= v;
        it.weight= w;
        items.push_back (it);
    }
    cout<<fractional(W,items);
     return 0;
}