// sub_080A6094 at 0x080A6094 (thumb)

undefined4 sub_080A6094(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if (*(byte *)(param_1 + 0xd) < 3) {
    *(byte *)(param_1 + 0x4c) = *(byte *)(iVar6 + 10) >> 4 & 1;
    bVar1 = *(byte *)(iVar6 + 10) >> 4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(iVar6 + 0x54);
      iVar5 = -0xd00;
    }
    else {
      iVar3 = *(int *)(iVar6 + 0x54);
      iVar5 = 0xd00;
    }
    *(int *)(param_1 + 0x54) = iVar3 + iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(iVar6 + 0x58) + -0x2100;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    sub_080127E4(param_1,0x5c08);
    sub_080B7F60(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      sub_080128D4(param_1);
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != -1) {
        return in_lr;
      }
      goto LAB_080a618a;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      sub_080128D4(param_1);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      cVar2 = sub_080EF330(*(undefined *)(param_1 + 0x12),6);
      if (cVar2 == '\0') {
        sub_0807E060(param_1 + 0x54,0,0);
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != -1) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080A5D24(param_1);
      return in_lr;
    }
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x71) == '\0') {
    return in_lr;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar4 = 0xfffff800;
  }
  else {
    uVar4 = 0x800;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  *(undefined *)(param_1 + 0x12) = 0x40;
  sub_080032EC(0x38);
LAB_080a618a:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

