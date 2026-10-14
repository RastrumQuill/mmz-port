// ResetKeyState at 0x08000FC8 (thumb)

void ResetKeyState(undefined2 *param_1)

{
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[9] = 0;
  return;
}

