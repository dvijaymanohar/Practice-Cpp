class MusicPlayer;

class MusicPlayerState {
public:
  virtual void play(MusicPlayer *player) = 0;
  virtual void pause(MusicPlayer *player) = 0;
  virtual void stop(MusicPlayer *player) = 0;
};

class PlayingState : public MusicPlayerState {
public:
  void play(MusicPlayer *player) override {}
  void pause(MusicPlayer *player) override {
    player->changeState(new PausedState());
  }
  void stop(MusicPlayer *player) override {
    player->changeState(new StoppedState());
  }
};

class PausedState : public MusicPlayerState {
public:
  void play(MusicPlayer *player) override {
    player->changeState(new PlayingState());
  }
  void pause(MusicPlayer *player) override {}
  void stop(MusicPlayer *player) override {
    player->changeState(new StoppedState());
  }
};

class StoppedState : public MusicPlayerState {
public:
  void play(MusicPlayer *player) override {
    player->changeState(new PlayingState());
  }
  void pause(MusicPlayer *player) override {}
  void stop(MusicPlayer *player) override {}
};

class MusicPlayer {
public:
  MusicPlayer() : state_(new StoppedState()) {}

  void play() { state_->play(this); }
  void pause() { state_->pause(this); }
  void stop() { state_->stop(this); }

  void changeState(MusicPlayerState *state) {
    delete state_;
    state_ = state;
  }

private:
  MusicPlayerState *state_;
};

int main(int argc, char **argv) {
  MusicPlayer player;

  player.play();  // Changes state to PlayingState
  player.pause(); // Changes state to PausedState
  player.stop();  // Changes state to StoppedState
}