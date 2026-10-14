// sub_080438BC at 0x080438BC (thumb)

undefined4 sub_080438BC(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08001EAC(0x12);
    sub_08029778(param_1,0x12);
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    iVar2 = sub_0804246C(param_1);
    iVar4 = -*(int *)(&DAT_082ae82c + ((uint)(iVar2 << 0x18) >> 0x16));
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar4 = *(int *)(&DAT_082ae82c + ((uint)(iVar2 << 0x18) >> 0x16));
    }
    *(int *)(param_1 + 0x5c) = iVar4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar1 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar1;
  iVar4 = 2;
  if (bVar1 < 0xd) {
    iVar4 = 1;
  }
  if (iVar4 == 2) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar2 = sub_0804246C(param_1);
    iVar2 = *(int *)(&DAT_082ae838 + ((uint)(iVar2 << 0x18) >> 0x16));
    if (iVar2 < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = iVar2;
    }
    if (*(int *)(param_1 + 0x54) + iVar2 < 0 != SBORROW4(*(int *)(param_1 + 0x54),-iVar2)) {
      *(int *)(param_1 + 0x54) = -iVar2;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    uVar3 = sub_080426A0(param_1);
    if ((uVar3 & 2) != 0) {
      if (-1 < *(short *)(param_1 + 0xbc)) {
        sub_08001EE8();
        *(short *)(param_1 + 0xbc) = -1;
      }
      sub_0801412C(8,param_1 + 0x4c);
      sub_08001EAC(0x83);
      *(undefined *)(param_1 + 0xd) = 10;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  bVar1 = sub_08042CE8(param_1,0,iVar4);
  if (bVar1 != *(byte *)(param_1 + 0xe0)) {
    if (*(byte *)(param_1 + 0xe0) < bVar1) {
      sub_0804296C(param_1,0);
    }
    else {
      sub_080429D4(param_1,0);
    }
  }
  bVar1 = sub_08042CE8(param_1,1,iVar4);
  if (bVar1 != *(byte *)(param_1 + 0xe1)) {
    if (*(byte *)(param_1 + 0xe1) < bVar1) {
      sub_0804296C(param_1,1);
    }
    else {
      sub_080429D4(param_1,1);
    }
  }
  sub_08042C24(param_1,0,iVar4);
  sub_08042C24(param_1,1,iVar4);
  sub_080297C0(param_1);
  return in_lr;
}

