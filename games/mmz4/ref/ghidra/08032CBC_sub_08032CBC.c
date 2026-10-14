// sub_08032CBC at 0x08032CBC (thumb)

undefined4 sub_08032CBC(int param_1)

{
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x10;
  sub_0802BFD0(param_1,&DAT_0884fe30 + (uint)*(byte *)(param_1 + 0x174) * 8,0);
  if (0 < *(int *)(param_1 + 0x60)) {
    *(undefined *)(param_1 + 0xe) = 2;
    sub_08032D00(param_1);
  }
  return in_lr;
}

