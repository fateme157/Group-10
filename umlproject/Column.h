//
// Created by user on 4/24/2025.
//
#include<iostream>
using namespace std;
class Column {
    private:
      string TableName;
      string DataType;
    public:
      Column(const string& name, const string& type)
      {
          TableName = name;
          DataType = type;
      }
      string gettableName() const{
        return TableName;
      }
      void settableName(const string& newName)
      {
          TableName = newName;
      }
      string getdataType() const
      {
        return DataType;
      }
      void setdataType(const string& newType)
      {
          DataType = newType;
      }
};
