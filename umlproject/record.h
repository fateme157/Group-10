//
// Created by user on 4/25/2025.
//
#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct MetaData {
  string Tablename;
  bool IsDeleted;
};

class Record {
private:
  MetaData record;
  vector<string> recordData;
public:
  Record(const string& table, bool deleted, const vector<string>& rowData)
  {
    record.Tablename = table;
    record.IsDeleted = deleted;
    recordData = rowData;
  }
  string getTableName() const {
    return record.Tablename;
  }
  void setTableName(const string& table) {
    record.Tablename = table;
  }
  bool getIsDeleted() const {
    return record.IsDeleted;
  }
  void setIsDeleted(bool deleted) {
    record.IsDeleted = deleted;
  }
  vector<string> getrecordData() const {
    return recordData;
  }
  void setrecordData(const vector<string>& rowData) {
    recordData = rowData;
  }
  string getField(int index) const{
    if (index >= 0 && index < recordData.size())
      return recordData[index];
    else
      return "Not Found.";
  }
  void setfeild(int index, const string& value) {
    if (index >= 0 && index < recordData.size())
      recordData[index] = value;
  }
  void ShowDataRecord() const{
    cout << "Table Name: " << record.Tablename << endl;
    cout << "Is Deleted: " << (record.IsDeleted ? "yes" : "No") << endl;
    cout << "Record Data: ";
    for (auto p = recordData.begin(); p != recordData.end(); p++)
      {
        cout << *p << endl;
      }
  }
};
