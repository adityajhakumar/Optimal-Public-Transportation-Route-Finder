

## **Optimal Public Transportation Route Finder**

![C Language](https://upload.wikimedia.org/wikipedia/commons/1/18/C_Programming_Language.svg) ![VS Code](https://upload.wikimedia.org/wikipedia/commons/9/9a/Visual_Studio_Code_1.35_icon.svg)

This project implements a basic optimal route-finding program for public transportation within a city using **Dijkstra's Algorithm**. Given a map of stops and routes, the program calculates the shortest travel time between two stops. This project can be extended to work with real-world data using Google Maps API and could eventually include graphical enhancements.

### **Table of Contents**
- [Project Overview](#project-overview)
- [Features](#features)
- [Technologies Used](#technologies-used)
- [Folder Structure](#folder-structure)
- [Installation](#installation)
- [Usage](#usage)
- [Testing](#testing)
- [Google Maps API Integration](#google-maps-api-integration)
- [Future Enhancements](#future-enhancements)
- [Contributing](#contributing)
- [License](#license)

---

### **Project Overview**
The purpose of this project is to find the shortest route between two public transportation stops using Dijkstra’s algorithm. It is currently designed to work with hardcoded transportation stops and routes provided as input.

In the future, it can be extended to work with real-world data from Google Maps and feature a graphical interface for better usability.

### **Features**
- Input: Number of stops, routes, and travel time for each route.
- Algorithm: Uses Dijkstra’s algorithm to find the shortest path between two stops.
- Output: The shortest travel time between two stops.
- Modular code: Separated into different components like graph creation, edge addition, and shortest path computation.
- Easily extensible for future improvements like real-world data integration or a graphical interface.

---

### **Technologies Used**
- **C Language**: Core logic for route finding using Dijkstra's algorithm.
- **Google Maps Directions API** *(Future Enhancement)*: For real-world route calculations.
- **Graphical Libraries** *(Future Enhancement)*: To visualize routes.

---

### **Folder Structure**

```plaintext
TransportationRouteFinder/
├── bin/
│   └── main.c                # The main program
├── include/
│   └── graph.h               # Header file for graph-related functions
├── src/
│   ├── graph.c               # Graph creation and edge addition
│   └── dijkstra.c            # Dijkstra's algorithm implementation
├── tests/
│   ├── test_graph.c          # Test for graph creation and edge addition
│   └── test_dijkstra.c       # Test for Dijkstra's algorithm
├── README.md                 # This README file
└── input.txt                 # Example input file
```

---

### **Installation**

1. **Clone the repository**:
   ```bash
   git clone https://github.com/yourusername/TransportationRouteFinder.git
   ```

2. **Navigate to the project directory**:
   ```bash
   cd TransportationRouteFinder
   ```

3. **Install GCC (if not already installed)**:
   On Ubuntu or Debian-based systems:
   ```bash
   sudo apt-get install build-essential
   ```

   On Windows, use [MinGW](https://www.mingw-w64.org/) or install via **Visual Studio**.

4. **Compile the program**:
   ```bash
   gcc bin/main.c src/graph.c src/dijkstra.c -I include -o routefinder
   ```

5. **Run the program**:
   ```bash
   ./routefinder
   ```

---

### **Usage**

Once you run the program, you will be prompted to input the number of stops and routes. After that, you'll provide the details for each route, such as stop numbers and travel time.

Example input:
```plaintext
Enter the number of stops and routes: 5 6
Enter stop1, stop2, and travel time for route 1: 0 1 10
Enter stop1, stop2, and travel time for route 2: 0 2 5
Enter stop1, stop2, and travel time for route 3: 1 3 1
Enter stop1, stop2, and travel time for route 4: 2 1 2
Enter stop1, stop2, and travel time for route 5: 2 3 9
Enter stop1, stop2, and travel time for route 6: 3 4 4
Enter source and destination stops: 0 4
```

Output:
```plaintext
The shortest travel time from stop 0 to stop 4 is: 15 minutes
```

---

### **Testing**
You can run the test files to validate the correctness of individual components like graph creation and Dijkstra’s algorithm.

1. **Compile test files**:
   ```bash
   gcc tests/test_graph.c src/graph.c -I include -o test_graph
   gcc tests/test_dijkstra.c src/graph.c src/dijkstra.c -I include -o test_dijkstra
   ```

2. **Run the tests**:
   ```bash
   ./test_graph
   ./test_dijkstra
   ```

---

### **Google Maps API Integration**

In the future, this project can be extended to fetch real-world public transportation data from Google Maps using their **Directions API**.

**Steps for integration:**

1. **Get Google Maps API Key**:
   - Go to the [Google Cloud Console](https://console.cloud.google.com/).
   - Create a new project and enable the **Google Maps Directions API**.
   - Generate an API key.

2. **Make HTTP Requests**:
   Use an HTTP library like `libcurl` in C to send requests to Google Maps API. For example:
   ```plaintext
   https://maps.googleapis.com/maps/api/directions/json?origin=source&destination=destination&key=YOUR_API_KEY
   ```

3. **Parse JSON Response**:
   - Use a JSON parsing library like [json-c](https://github.com/json-c/json-c) to parse the response.
   - Extract the route information, such as travel time, distance, and steps.

---

### **Future Enhancements**

- **Google Maps Integration**: Fetch real-time route and travel time data using the Google Maps Directions API.
- **Graphical User Interface (GUI)**: Use libraries like **SDL2** or **Qt** to create a visual map of the transportation routes and display the shortest path.
- **Real-Time Data**: Include real-time traffic data, weather, and other factors affecting travel time.
- **Error Handling**: Improve error handling for invalid input and other edge cases.

---

### **Contributing**

1. Fork the repository.
2. Create your feature branch (`git checkout -b feature/new-feature`).
3. Commit your changes (`git commit -am 'Add new feature'`).
4. Push to the branch (`git push origin feature/new-feature`).
5. Open a Pull Request.

Contributions, bug reports, and suggestions are welcome!

---

### **License**

This project is licensed under the **Apache License 2.0**. See the [LICENSE](LICENSE) file for details.

```plaintext
                                 Apache License
                           Version 2.0, January 2004
                        http://www.apache.org/licenses/

   TERMS AND CONDITIONS FOR USE, REPRODUCTION, AND DISTRIBUTION
   ...
```

For full terms and conditions, please see the `LICENSE` file in this repository.

---

### **Acknowledgments**

- **Google Maps API** for providing powerful real-world routing solutions.
- **Dijkstra's Algorithm**: The core algorithm behind the route-finding logic.

---

