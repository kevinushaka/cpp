#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;
struct RndIntGen
{
  RndIntGen(int l, int h)
    : low(l), high(h)
  { }
  int operator()() const {
    return low + (rand() % ((high - low) + 1));
  }
private:
  int low;
  int high;
};

const int NB_LOOP=10;
const int NB_CELLS=10;

void print(const vector<bool>& v);
void print(const vector< vector<bool>>& v);
vector<bool> onedim_cells(int n);
vector<vector<bool>> twodim_cells(int n);
vector<bool>  automate(vector<bool>& cells, int nbLoop);
vector<vector<bool>> automate(vector<vector<bool>>& cells, int nbLoop);

int main(){
    vector<bool> cells_onedim;
    vector<vector<bool>> cells_twodim;
    cells_onedim=onedim_cells(NB_CELLS);
    cout<<"Tableau 1 dimension: ";
    print(cells_onedim);
    cout<<"Traitement.."<<endl;
    cells_onedim =automate(cells_onedim,NB_LOOP);
    cout<<"Tableau 1 dimension: ";
    print(cells_onedim);

    cout<<"//////"<<endl;
    cells_twodim=twodim_cells(NB_CELLS);
    cout<<"Tableau 2 dimension: ";
    print(cells_onedim);
    cout<<"Traitement.."<<endl;
    cells_twodim =automate(cells_twodim,NB_LOOP);
    cout<<"Tableau 2 dimension: ";
    print(cells_twodim);
    return 0;
}

void automate_onedim(){

}
vector<bool> onedim_cells(int n){
    srand(static_cast<unsigned int>(clock()));
    vector<bool> cells(n+2);
    generate(cells.begin(), cells.end(),RndIntGen(0,1));
    cells[0]=cells[n-1]=1;
    return cells;
}

vector<vector<bool>> twodim_cells(int n){
    srand(static_cast<unsigned int>(clock()));
    vector<vector<bool>> cells(n);
    for(int i= 0 ;i<n;i++){
        for(int j= 0 ;j<n;j++){
            cells[i][j]=0 + (rand() % ((1 - 0) + 1));
        }
    }
    return cells;
}

vector<bool> automate(vector<bool>& cells, int nbLoop){
    int n=cells.size();
    int k=0;
    while(k++!=nbLoop){
        for(int i=1;i<n-1;i++){
            cells[i]=cells[i-1]&&cells[i+1];                     
        }
        cout<<"Step "<<k<<" : ";print(cells);
    }
    return cells;
}

vector<vector<bool>> automate(vector<vector<bool>>& cells, int nbLoop){
    return cells;
}

void print(const vector<bool>& v){
    int n=v.size();
    for(int i= 0 ;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void print(const vector<vector<bool>>& v){
    int n=v.size();
    for(int i= 0 ;i<n;i++){
        for(int j= 0 ;j<n;j++){
            cout<<v[i][j]<<" ";
        }
    }
    cout<<endl;
}