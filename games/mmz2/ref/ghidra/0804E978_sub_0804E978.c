// sub_0804E978 at 0x0804E978 (thumb)

undefined4 sub_0804E978(int param_1)

{
  undefined4 uVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = sub_080B5244(param_1,1,0);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  pbVar2 = (byte *)(param_1 + 0xbd);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xcc) + (short)(&DAT_080ef450)[*pbVar2] * 8;
  *pbVar2 = *pbVar2 + 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
      uVar1 = sub_080754C8(param_1,2,0,0);
      *(undefined4 *)(param_1 + 0x28) = uVar1;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  return in_lr;
}

