// sub_0804E0FC at 0x0804E0FC (thumb)

undefined4 sub_0804E0FC(int param_1)

{
  char cVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  sub_080128D4();
  pbVar2 = (byte *)(param_1 + 0xbd);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xcc) + (short)(&DAT_080ef450)[*pbVar2] * 8;
  *pbVar2 = *pbVar2 + 1;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

