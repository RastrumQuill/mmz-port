// sub_0805B674 at 0x0805B674 (thumb)

undefined4 sub_0805B674(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa908);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
      local_14 = *(int *)(param_1 + 0x54) + -0xb00;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x200;
      local_14 = *(int *)(param_1 + 0x54) + 0xb00;
    }
    local_10 = *(int *)(param_1 + 0x58) + 0x500;
    sub_08002638(&DAT_084332c8,(DAT_0202e624 - 0x210) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_084332d4,(DAT_0202e424 - 6) * 0x20 + 0x200);
    sub_080A35FC(&local_14,1,1,*(byte *)(param_1 + 10) >> 4 & 1);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -0x400;
    *(undefined *)(param_1 + 0xbe) = 0;
    iVar3 = *(int *)(param_1 + 200);
    if (iVar3 != 0) {
      *(undefined *)(iVar3 + 0x11) = 1;
      *(int *)(param_1 + 200) = 0;
    }
    sub_080032EC(0x71);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar3 = DAT_0202e130;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(bool *)(param_1 + 0x4c) = iVar4 < *(int *)(DAT_0202e130 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar3 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

