// sub_080CDBB0 at 0x080CDBB0 (thumb)

undefined4 sub_080CDBB0(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_080cdc9c;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_0800D460(param_1 + 0x54);
    }
    else if (*(char *)(param_1 + 0x10) == '\x01') {
      sub_0800F52C(param_1 + 0x54);
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_08349808;
    *(undefined2 *)(param_1 + 0x26) = 0x2401;
    *(int *)(param_1 + 0x40) = param_1 + 100;
    sub_080032EC(0x61);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080128D4(param_1);
  iVar3 = (*(byte *)(param_1 + 0x12) & 7) * 4;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54) + *(int *)(&DAT_08349810 + iVar3) * 0x100;
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + *(int *)(&DAT_08349830 + iVar3) * 0x100;
  uVar4 = *(byte *)(param_1 + 0x12) + 1;
  *(char *)(param_1 + 0x12) = (char)uVar4;
  if ((uVar4 & 3) == 0) {
    local_10 = *(int *)(param_1 + 0x58) + (uint)*(byte *)(param_1 + 0x12) * 0x100;
    if ((uVar4 & 4) == 0) {
      local_14 = -0x1100;
    }
    else {
      local_14 = 0x1100;
    }
    local_14 = *(int *)(param_1 + 0x54) + local_14;
    sVar2 = sub_08008354(local_14,local_10);
    if (sVar2 != 0) {
      sub_080AC60C(3,&local_14);
    }
  }
  if (*(byte *)(param_1 + 0x12) < 0x2d) {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080cdc9c:
  sub_080128D4(param_1);
  if (*(int *)(param_1 + 0x60) < 0x700) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x20;
  }
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  *(int *)(param_1 + 0x68) = iVar3;
  uVar4 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
  if (0x3000 < uVar4) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

