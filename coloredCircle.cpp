int countCircleColorings(int points, int colors) {

    int colorsArray[2] ={0, colors};
    for (int i = 1; i < points; i++) {
        int tmp = colorsArray[0];
        colorsArray[0] = colorsArray[0] * (colors - 2) + colorsArray[1] * (colors - 1);
        colorsArray[1] = tmp;
    }
    return colorsArray[0];
    
}