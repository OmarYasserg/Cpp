enum class SensorModel {
   Good,
   Better
};

struct DistanceSensor {
    SensorModel mModel;
   DistanceSensor(SensorModel model) : mModel{model} {}
   int getDistance() {
       switch (mModel) {
           case SensorModel::Good :
               // Business logic for "Good" model
           case SensorModel::Better :
               // Business logic for "Better" model
       }
   }
};


struct DistanceSensor {
   virtual ~DistanceSensor() = default;
   virtual int getDistance() = 0;
};

struct GoodDistanceSensor : public DistanceSensor {
   int getDistance() override {
       // Business logic for "Good" model
   }
};

struct BetterDistanceSensor : public DistanceSensor {
   int getDistance() override {
       // Business logic for "Better" model
   }
};