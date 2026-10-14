// sub_0802F2AC at 0x0802F2AC (thumb)

undefined4 sub_0802F2AC(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (-1 < *(short *)(param_1 + 0xd4)) {
          sub_08001EE8();
          *(short *)(param_1 + 0xd4) = -1;
        }
        sub_08029778(param_1,10);
        sub_08090770(param_1 + 0x4c,*(byte *)(param_1 + 10) >> 4 & 1);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080297C0(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0x12) = 0x50;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe) = 1;
  }
  iVar3 = *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar3;
  iVar4 = iVar3;
  if (iVar3 < 0) {
    iVar4 = -iVar3;
  }
  if (iVar4 < 0x11) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    *(int *)(param_1 + 0x54) = iVar3 + *(int *)(param_1 + 0x5c);
  }
  iVar4 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar4;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar4;
  uVar2 = sub_0802E674(param_1);
  if ((uVar2 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  sub_080297C0(param_1);
  return in_lr;
}

