func fill(maze [][]int) {
    rows := len(maze)
    cols := len(maze[0])

    for i := 0; i < rows; i++ {
        for j := 0; j < cols; j++ {
            if maze[i][j] != -1 {
                if i+1 < rows && maze[i+1][j] == -1 {
                    maze[i][j]++
                }
                if i+1 < rows && j-1 >= 0 && maze[i+1][j-1] == -1 {
                    maze[i][j]++
                }
                if j+1 < cols && maze[i][j+1] == -1 {
                    maze[i][j]++
                }
                if j+1 < cols && i+1 < rows && maze[i+1][j+1] == -1 {
                    maze[i][j]++
                }
                if i-1 >= 0 && maze[i-1][j] == -1 {
                    maze[i][j]++
                }
                if i-1 >= 0 && j+1 < cols && maze[i-1][j+1] == -1 {
                    maze[i][j]++
                }
                if j-1 >= 0 && maze[i][j-1] == -1 {
                    maze[i][j]++
                }
                if j-1 >= 0 && i-1 >= 0 && maze[i-1][j-1] == -1 {
                    maze[i][j]++
                }
            }
        }
    }
}