include  <algorithm>
include  <iosstream>

using namespace std;

void calculateDimensions(double volume, double maxLength, double maxWidth, double maxHeight) {
    // IT must be true that the lowest allowable dim be minimum one
    double minLength = max(1.0, volume / (maxWidth * maxHeight));
    double minWidth = max(1.0, volume / (maxLength * maxHeight));
    double minHeight = max(1.0, volume / (maxLength * maxWidth));
    
    // Assert largest side lengths refrain from surpassing largest allowable length in all directions
    minLength = min(minLength, maxLength);
    minWidth = min(minWidth, maxWidth);
    minHeight = min(minHeight, maxHeight);
    
    cout << "Possible Range for Dimensions:" << endl;
    cout << "Length: " << minLength << " to " << maxLength << " units" << endl;
    cout << "Width: " << minWidth << " to " << maxWidth << " units" << endl;
    cout << "Height: " << minHeight << " to " << maxHeight << " units" << endl;
}

int main() {
    double totalVolume, maxLength, maxWidth, maxHeight;
    
    cout << "Enter total volume: ";
    cin >> totalVolume;
    
    cout << "Enter maximum length: ";
    cin >> maxLength;
    
    cout << "Enter maximum width: ";
    cin >> maxWidth;
    
    cout << "Enter maximum height: ";
    cin >> maxHeight;
    
    calculateDimensions(totalVolume, maxLength, maxWidth, maxHeight);
    
    return 0;
}




