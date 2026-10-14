// sub_080C4FF4 at 0x080C4FF4 (thumb)

undefined4 sub_080C4FF4(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0x28) + 0xb4);
  *pcVar1 = *pcVar1 + -1;
  sub_080BD014();
  return in_lr;
}

