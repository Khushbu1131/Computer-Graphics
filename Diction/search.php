<?php
$host = "localhost";
$user = "root";
$pass = "";
$db = "web_dictionary";

$conn = new mysqli($host, $user, $pass, $db);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    $search_word = trim($_POST['search_word']);

    
    $stmt = $conn->prepare("SELECT * FROM words WHERE word = ?");
    $stmt->bind_param("s", $search_word);
    $stmt->execute();
    $result = $stmt->get_result();

    if ($result->num_rows > 0) {
        
        $row = $result->fetch_assoc();
        echo "<strong>" . $row['word'] . ":</strong> " . $row['definition'];
    } else {
        
        echo "<p>Word not found. Want to add? <a href='add_word.php?word=" . urlencode($search_word) . "'>Yes</a> | <a href='index.html'>No</a></p>";
    }
    $stmt->close();
}
$conn->close();
?>
