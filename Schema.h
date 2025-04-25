#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Schema {
public:
    string Tablename;
    vector<Column> Columns;
    Schema (const string& tablename, const vector<Column>& columns) {
        Tablename = tablename;
        Columns = columns;
    }
    void displayColumn() const {
        cout << "Column In Table: " << Tablename << ":" << endl;
        for (auto it = Columns.begin(); it != Columns.end(); ++it) {
            const auto& column = *it;
            cout << Columns.TableName << " (" << Columns.DataType << ")" << endl;
        }
    }
    bool ColumnExist(const string& columnTableName) const {
        for (auto it = Columns.begin(); it != Columns.end(); ++it) {
            const auto& columns = *it;
            if (Columns.TableName = columnTableName){
                return true;}}
        return false;
    }
    void addColumn(const string& TableName, const string& DataType){
        Columns.emplace_back(TableName, DataType);
    }
};