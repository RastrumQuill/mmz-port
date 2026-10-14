// InitInput at 0x08000EA8 (thumb)

undefined4 InitInput(void)

{
  undefined4 in_lr;
  
  ResetKeyStates();
  PollKeyInput();
  return in_lr;
}

