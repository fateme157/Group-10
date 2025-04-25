#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Dbinfo{
  private:
	vector<Schema> table;
  public:
    void AddTable(const Schema& table){
		if(IsExistTable(table.tablename) = 0)
      {
      		tables.push_back(table);
            cout << "Table added successfully." << endl;
	   }
        else
             {
             	cout << "A table with this name already exists." << endl;
             }
    }
    void DeleteTable(const string& tablename){
      	for(auto k = tables.begin(); k != tables.end(); k++)
          {
          	if(it->tablename == tablename)
                  {
                  	tables.erase(k);
                    cout << "The table was deleted." << endl;
                    reutrn;
                  }
          }
          cout << "No table with this name was found." << endl;
    }
    bool IsExistTable(const string& tablename) const{
      for(auto k = tables.begin(); k != tables.end(); k++)
        {
        	const auto& table = *k;
            if (table.tablename == tablename)
              return true;
        }
        return false;
    }
    void ShowallTable() const {
      cout << "List of database tables:" << endl;
      for(auto k = tables.begin(); k != tables.end(); k++)
        {
        	const auto& table = *k;
            cout << "_ " << table.tablename << endl;
    }
};