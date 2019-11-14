#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <iostream>

using namespace std;

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 800;

const int MID_X = WINDOW_WIDTH / 2;
const int MID_Y= WINDOW_HEIGHT / 2;

class Point {
private:
    int x,y;
public:
    Point(int x, int y) {
        this -> x = x + MID_X;
        this -> y = MID_Y - y;
    }

      Point(int x, int y, int z) {
        this->x = MID_X + x + z;
        this->y = MID_Y - y + z;
    }

    int getX() {return x;}
    int getY() {return y;}
};

class RealPoint {
private:
    int x, y, z;
public:
    RealPoint(int x, int y) {
        this -> x = x;
        this -> y = y;
    }

    RealPoint(int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    int getX() {return x;}
    int getY() {return y;}
    int getZ() { return z;}
};

class Line {
private:
    Point startPoint = Point(0,0);
    Point endPoint = Point(0,0);

    void printLine() {
        line(startPoint.getX(), startPoint.getY(),endPoint.getX(), endPoint.getY());
    }

public:
    Line(Point startPoint, Point endPoint){
        this->startPoint = startPoint;
        this->endPoint = endPoint;

        printLine();
    }
};

void drawWonderWomanLogo(vector<Point> points, int color) {

    if(points.size() > 32) {
        setcolor(BROWN);
        for(int i = 32; i< 56; i++) {
            Line(points[i],points[i+1]);
            cout << points[i].getX() << " " <<points[i].getY() <<" " << i << endl;
        };

        for(int i = 56; i< 63; i+=2) {
            Line(points[i],points[i+1]);
            cout << points[i].getX() << " " <<points[i].getY() << endl;
        };

        for(int i = 64; i< 113; i+=2) {
            Line(points[i],points[i+1]);
            cout << points[i].getX() << " " <<points[i].getY() << endl;
        };
    };

    setcolor(color);

    for(int i = 0; i< 25; i++) {
        Line(points[i],points[i+1]);
        cout << points[i].getX() << " " <<points[i].getY() << endl;
    };

    for(int i = 26; i< 31; i+=2) {
        Line(points[i],points[i+1]);
       cout << points[i].getX() << " " <<points[i].getY() << endl;
    };
}

vector<vector<int> > getTranslationIdentity(RealPoint translationPoint) {
    vector<vector<int> > identity;
    vector<int> row1;
    row1.push_back(1);
    row1.push_back(0);
    row1.push_back(0);

    vector<int> row2;
    row2.push_back(0);
    row2.push_back(1);
    row2.push_back(0);

    vector<int> row3;
    row3.push_back(translationPoint.getX());
    row3.push_back(translationPoint.getY());
    row3.push_back(1);

    identity.push_back(row1);
    identity.push_back(row2);
    identity.push_back(row3);

    return identity;
}

vector<vector<int> > getTranslationIdentity3D(RealPoint translationPoint) {
    vector<vector<int> > identity;
    vector<int> row1;
    row1.push_back(1);
    row1.push_back(0);
    row1.push_back(0);
    row1.push_back(0);

    vector<int> row2;
    row2.push_back(0);
    row2.push_back(1);
    row2.push_back(0);
    row2.push_back(0);

    vector<int> row3;
    row3.push_back(0);
    row3.push_back(0);
    row3.push_back(1);
    row3.push_back(0);

    vector<int> row4;
    row4.push_back(translationPoint.getX());
    row4.push_back(translationPoint.getY());
    row4.push_back(translationPoint.getZ());
    row4.push_back(1);

    identity.push_back(row1);
    identity.push_back(row2);
    identity.push_back(row3);
    identity.push_back(row4);

    return identity;
}

vector<vector<int> > getScaleIdentity(RealPoint point) {
    vector<vector<int> > identity;
    vector<int> row1;
    row1.push_back(point.getX());
    row1.push_back(0);
    row1.push_back(0);

    vector<int> row2;
    row2.push_back(0);
    row2.push_back(point.getY());
    row2.push_back(0);

    vector<int> row3;
    row3.push_back(0);
    row3.push_back(0);
    row3.push_back(1);

    identity.push_back(row1);
    identity.push_back(row2);
    identity.push_back(row3);

    return identity;
}

vector<vector<int> > getScaleIdentity3D(RealPoint point) {
    vector<vector<int> > identity;
    vector<int> row1;
    row1.push_back(point.getX());
    row1.push_back(0);
    row1.push_back(0);
    row1.push_back(0);

    vector<int> row2;
    row2.push_back(0);
    row2.push_back(point.getY());
    row2.push_back(0);
    row2.push_back(0);

    vector<int> row3;
    row3.push_back(0);
    row3.push_back(0);
    row3.push_back(point.getZ());
    row3.push_back(0);

    vector<int> row4;
    row4.push_back(0);
    row4.push_back(0);
    row4.push_back(0);
    row4.push_back(1);

    identity.push_back(row1);
    identity.push_back(row2);
    identity.push_back(row3);
    identity.push_back(row4);

     for (int i = 0; i < 4; i++) {
        cout << "IDENTYTY = " << identity[i][0] << " " << identity[i][1] << " " << identity[i][2] << " " << identity[i][3] << endl;
    }

    return identity;
}

vector<vector<int> > getShearingIdentity(RealPoint point) {
    vector<vector<int> > identity;
    vector<int> row1;
    row1.push_back(1);
    row1.push_back(point.getX());
    row1.push_back(0);

    vector<int> row2;
    row2.push_back(point.getY());
    row2.push_back(1);
    row2.push_back(0);

    vector<int> row3;
    row3.push_back(0);
    row3.push_back(0);
    row3.push_back(1);

    identity.push_back(row1);
    identity.push_back(row2);
    identity.push_back(row3);

    return identity;
}

vector<vector<int> > getShearingIdentity3D(RealPoint point) {
    vector<vector<int> > identity;
    vector<int> row1;
    row1.push_back(1);
    row1.push_back(0);
    row1.push_back(point.getX());
    row1.push_back(0);

    vector<int> row2;
    row2.push_back(0);
    row2.push_back(1);
     row2.push_back(point.getY());
    row2.push_back(0);

    vector<int> row3;
    row3.push_back(0);
    row3.push_back(0);
    row3.push_back(1);
    row3.push_back(0);

    vector<int> row4;
    row4.push_back(0);
    row4.push_back(0);
    row4.push_back(0);
    row4.push_back(1);

    identity.push_back(row1);
    identity.push_back(row2);
    identity.push_back(row3);
    identity.push_back(row4);

    return identity;
}

vector<vector<int> > getRotationIdentityX(int degree) {
    vector<vector<int> > identity;
    vector<int> row1;
    row1.push_back(1);
    row1.push_back(0);
    row1.push_back(0);

    vector<int> row2;
    row2.push_back(0);
    row2.push_back((int)round(cos(degree)));
    row2.push_back((int)round(-sin(degree)));

    vector<int> row3;
    row3.push_back(0);
    row3.push_back((int)round(sin(degree)));
    row3.push_back((int)round(cos(degree)));

    identity.push_back(row1);
    identity.push_back(row2);
    identity.push_back(row3);


      for (int i = 0; i < 3; i++) {
        cout << "IDENTYTY = " << identity[i][0] << " " << identity[i][1] << " " <<identity[i][2] << endl ;
    }

    return identity;
}

vector<vector<int> > getRotationIdentityX3D(int degree) {
    vector<vector<int> > identity;
    vector<int> row1;
    row1.push_back(1);
    row1.push_back(0);
    row1.push_back(0);
    row1.push_back(0);

    vector<int> row2;
    row2.push_back(0);
    row2.push_back((int)round(cos(degree)));
    row2.push_back((int)round(-sin(degree)));
    row2.push_back(0);

    vector<int> row3;
    row3.push_back(0);
    row3.push_back((int)round(sin(degree)));
    row3.push_back((int)round(cos(degree)));
    row3.push_back(0);

    vector<int> row4;
    row4.push_back(0);
    row4.push_back(0);
    row4.push_back(0);
    row4.push_back(1);

    identity.push_back(row1);
    identity.push_back(row2);
    identity.push_back(row3);
    identity.push_back(row4);

      for (int i = 0; i < 3; i++) {
        cout << "IDENTYTY = " << identity[i][0] << " " << identity[i][1] << " " <<identity[i][2] << endl ;
    }

    return identity;
}

vector<vector<int> > getRotationIdentityY(int degree) {
    vector<vector<int> > identity;
    vector<int> row1;
    row1.push_back((int)round(cos(degree)));
    row1.push_back(0);
    row1.push_back((int)round(sin(degree)));

    vector<int> row2;
    row2.push_back(0);
    row2.push_back(1);
    row2.push_back(0);

    vector<int> row3;
    row3.push_back((int)round(-sin(degree)));
    row3.push_back(1);
    row3.push_back((int)round(cos(degree)));

    identity.push_back(row1);
    identity.push_back(row2);
    identity.push_back(row3);


      for (int i = 0; i < 3; i++) {
        cout << "IDENTYTY = " << identity[i][0] << " " << identity[i][1] << " " <<identity[i][2] << endl ;
    }

    return identity;
}

vector<vector<int> > getReflectionYIdentity() {
    vector<vector<int> > identity;
    vector<int> row1;
    row1.push_back(-1);
    row1.push_back(0);
    row1.push_back(0);

    vector<int> row2;
    row2.push_back(0);
    row2.push_back(1);
    row2.push_back(0);

    vector<int> row3;
    row3.push_back(0);
    row3.push_back(0);
    row3.push_back(1);

    identity.push_back(row1);
    identity.push_back(row2);
    identity.push_back(row3);

    return identity;
}

vector<vector<int> > getReflectionYIdentity3D() {
    vector<vector<int> > identity;
    vector<int> row1;
    row1.push_back(-1);
    row1.push_back(0);
    row1.push_back(0);
    row1.push_back(0);

    vector<int> row2;
    row2.push_back(0);
    row2.push_back(1);
    row2.push_back(0);
    row2.push_back(0);

    vector<int> row3;
    row3.push_back(0);
    row3.push_back(0);
    row3.push_back(-1);
    row3.push_back(0);

    vector<int> row4;
    row4.push_back(0);
    row4.push_back(0);
    row4.push_back(0);
    row4.push_back(1);

    identity.push_back(row1);
    identity.push_back(row2);
    identity.push_back(row3);
    identity.push_back(row4);

    return identity;
}

vector<vector<int> > getIdentity() {
    vector<vector<int> > identity;
    vector<int> row1;
    row1.push_back(1);
    row1.push_back(0);
    row1.push_back(0);

    vector<int> row2;
    row2.push_back(0);
    row2.push_back(1);
    row2.push_back(0);

    vector<int> row3;
    row3.push_back(0);
    row3.push_back(0);
    row3.push_back(1);

    identity.push_back(row1);
    identity.push_back(row2);
    identity.push_back(row3);

    return identity;
}

vector<vector<int> > getIdentity3D() {
    vector<vector<int> > identity;
    vector<int> row1;
    row1.push_back(1);
    row1.push_back(0);
    row1.push_back(0);
    row1.push_back(0);

    vector<int> row2;
    row2.push_back(0);
    row2.push_back(1);
    row2.push_back(0);
    row2.push_back(0);

    vector<int> row3;
    row3.push_back(0);
    row3.push_back(0);
    row3.push_back(1);
    row3.push_back(0);

    vector<int> row4;
    row4.push_back(0);
    row4.push_back(0);
    row4.push_back(0);
    row4.push_back(1);

    identity.push_back(row1);
    identity.push_back(row2);
    identity.push_back(row3);
    identity.push_back(row4);

    return identity;
}

vector<Point> getTransformationPoint(vector<vector<int> > identityMatrix, vector<RealPoint> logoPoint) {
    int COLUMNS = 3;
    int ROW = 32;

    int matrix[ROW][COLUMNS];

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            RealPoint currentPoint = logoPoint[i];
            matrix[i][j] = 0;
            int pointValue[3] = {currentPoint.getX(), currentPoint.getY(), 1}; // X, Y, identity
            for (int k = 0; k < COLUMNS; k++) {
                matrix[i][j] += pointValue[k] * identityMatrix[k][j];
            }
        }
    }

    vector<Point> newPoint;

    for (int i = 0; i < ROW; i++) {
        cout<< matrix[i][0] << " matrix x  matrix Y = " << matrix[i][1] << endl;
        Point afterTransformation = Point(matrix[i][0],matrix[i][1]);
       // cout<< matrix[i][0] << " matrix x  matrix Y = " << matrix[i][1] << endl;
        newPoint.push_back(afterTransformation);
    }

    return newPoint;
}

vector<Point> getTransformationPoint3D(vector<vector<int> > identityMatrix, vector<RealPoint> logoPoint) {
    int COLUMNS = 4;
    int ROW = 114;

    int matrix[ROW][COLUMNS];

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            RealPoint currentPoint = logoPoint[i];
            matrix[i][j] = 0;
            int pointValue[4] = {currentPoint.getX(), currentPoint.getY(),currentPoint.getZ(), 1}; // X, Y, identity
            for (int k = 0; k < COLUMNS; k++) {
                matrix[i][j] += pointValue[k] * identityMatrix[k][j];
            }
        }
    }

    vector<Point> newPoint;

    for (int i = 0; i < ROW; i++) {
        cout<< matrix[i][0] << " matrix x  matrix Y = " << matrix[i][1] << " Z = " << matrix[i][2] << " index =  " << i << endl;
        Point afterTransformation = Point(matrix[i][0],matrix[i][1],matrix[i][2]);
        // cout<< matrix[i][0] << " matrix x  matrix Y = " << matrix[i][1] << endl;
        newPoint.push_back(afterTransformation);
    }

    return newPoint;
}


int main() {
    initwindow(WINDOW_WIDTH,WINDOW_HEIGHT);


    getch();
    closegraph();
    return 0;
}
