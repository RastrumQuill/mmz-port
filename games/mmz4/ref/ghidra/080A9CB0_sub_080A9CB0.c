// sub_080A9CB0 at 0x080A9CB0 (thumb)

undefined4 sub_080A9CB0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080A96E4();
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x50;
  }
  return in_lr;
}

