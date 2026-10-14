// sub_0804E148 at 0x0804E148 (thumb)

undefined4 sub_0804E148(int param_1)

{
  undefined4 uVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = sub_08075060(param_1,0,0);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    sub_080032EC(0x6d);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  pbVar2 = (byte *)(param_1 + 0xbd);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xcc) + (short)(&DAT_080ef450)[*pbVar2] * 8;
  *pbVar2 = *pbVar2 + 1;
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x10;
  }
  return in_lr;
}

