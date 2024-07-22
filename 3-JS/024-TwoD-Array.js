// 2D array = multi-dimensional array that stores a matrix
//                    of data in rows and columns.
//                    Useful for games, spreadsheets, or representing images 

const matrix = [[1, 2, 3],
[4, 5, 6],
[7, 8, 9]];

for (let row of matrix)
    console.log(row);  // prints each row of the matrix}

for (let row of matrix) {
    const rowString = row.join(" ");
    console.log(rowString);  // prints each row of the matrix as a string}
}

const matrix1 = [[0, 1, 2, 3],
                [4, 5, 6],
                [7, 8]];

const phonePad = [[1, 2, 3],
                 [4, 5, 6],
                 [7, 8, 9],
                 ["*", "0", "#"]];

for (let row of phonePad) {
    const rowString = row.join(" ");
    console.log(rowString);  // prints each row of the matrix as a string}
}
