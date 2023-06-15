void setZeros(vector<vector<int>>& matrix) {
    if (matrix.empty() || matrix[0].empty()) {
        return;  // Handle empty matrix case
    }
    
    int rows = matrix.size();
    int columns = matrix[0].size();

    vector<bool> zeroRows(rows, false);  // Track rows that contain zeros
    vector<bool> zeroColumns(columns, false);  // Track columns that contain zeros

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] == 0) {
                zeroRows[i] = true;
                zeroColumns[j] = true;
            }
        }
    }
    
    for (int i = 0; i < rows; i++) {
        if (zeroRows[i]) {
            for (int j = 0; j < columns; j++) {
                matrix[i][j] = 0;
            }
        }
    }

   
    for (int j = 0; j < columns; j++) {
        if (zeroColumns[j]) {
            for (int i = 0; i < rows; i++) {
                matrix[i][j] = 0;
            }
        }
    }
}
