class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // prototypes of setters for length, width and height
      void setlength (int len);
      void setwidth (int wid);
      void setheigth (int heig);
       // prototypes of getters for length, width and height
      int getLength ();
      int getWidth ();
      int getHeight ();
       int calcVolume();
};
