// sub_080FAEF8 at 0x080FAEF8 (thumb)

undefined4 sub_080FAEF8(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      sub_0801CF00(param_1,0x9603);
    }
    else {
      sub_0801CF00(param_1,0x9602);
    }
    sub_08002B10(0x16d);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  uVar2 = (uint)*(byte *)(param_1 + 0x71);
  pbVar3 = (byte *)(param_1 + 0xb4);
  if (*pbVar3 != 0) {
    uVar2 = 5 - uVar2 & 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + *(int *)(&DAT_088675cc + uVar2 * 4);
  if ((uVar2 - 1 & 0xff) < 4) {
    sub_08005784(param_1 + 0x74,&DAT_08867444 + uVar2 * 0x48);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    bVar1 = *pbVar3 ^ 1;
    *pbVar3 = bVar1;
    if (bVar1 != 0) {
      bVar1 = 1;
    }
    *(byte *)(param_1 + 0xd) = bVar1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

