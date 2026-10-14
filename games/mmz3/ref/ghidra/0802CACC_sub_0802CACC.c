// sub_0802CACC at 0x0802CACC (thumb)

undefined4 sub_0802CACC(int param_1)

{
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x10;
  sub_080263A0(param_1,&DAT_0835b034 + (uint)*(byte *)(param_1 + 0x147) * 8,0);
  if (0 < *(int *)(param_1 + 0x60)) {
    *(undefined *)(param_1 + 0xe) = 2;
    sub_0802CB14(param_1);
  }
  return in_lr;
}

