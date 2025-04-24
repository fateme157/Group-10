#include<iostream>
#include<vector>
#include<sstream>

using namespace std;

class Database{
private:
    DbInfo dbInfo;
    vector<Record> records;

public:
    void insertRecord(const string& data) {
        stringstream ss(data);
        string token;
        string tableName;

        getline(ss, token, ',');
        tableName = token;

        records.emplace_back(tableName);
        cout << "Inserted record into table: " << tableName << "\n";
    }

    void findRecords(const string& tableName, const string& columnName, const string& value) const {
        cout << "Finding records in " << tableName << " where " << columnName << " = " << value << "\n";
        for (const auto& record : records) {
            if (record.tableName == tableName && !record.isDeleted) {
                cout << "Found record: " << record.tableName << "\n";
            }
        }
    }

    void updateRecord(const string& tableName, const string& columnName, const string& newValue) {
        cout << "Updating records in " << tableName << " for column " << columnName << " to " << newValue << "\n";
        for (auto& record : records) {
            if (record.tableName == tableName && !record.isDeleted) {
                // Update logic would go here
                cout << "Updated record: " << record.tableName << "\n";
            }
        }
    }

    void deleteRecord(const string& tableName, int key) {
        cout << "Deleting record from " << tableName << " with key " << key << "\n";
        for (auto& record : records) {
            if (record.tableName == tableName && !record.isDeleted) {
                record.isDeleted = true; // Logical delete
                cout << "Deleted record: " << record.tableName << "\n";
                break;
            }
        }
    }

    void addSchema(const Schema& schema) {
        dbInfo.addSchema(schema);
    }

    void displaySchemas() const {
        dbInfo.displaySchemas();
    }
};
};