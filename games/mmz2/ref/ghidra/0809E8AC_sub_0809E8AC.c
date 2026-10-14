// sub_0809E8AC at 0x0809E8AC (thumb)

undefined4 sub_0809E8AC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if ((1 < *(byte *)(iVar4 + 0xc)) || (*(char *)(iVar4 + 0xd) == '\x05')) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if ((*(byte *)(param_1 + 0x12) & 3) < 2) {
      sub_080127E4(param_1,0x3907);
      sub_080128D4(param_1);
    }
    else {
      sub_080127E4(param_1,0x3908);
      sub_080128D4(param_1);
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
      sub_080032EC(0x38);
    }
    sub_080772A0(param_1,*(byte *)(iVar4 + 10) >> 4 & 1);
    *(undefined *)(param_1 + 0x12) = 0x10;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080128D4(param_1);
    iVar3 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar4 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    if (iVar3 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x10;
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      sub_080128D4(param_1);
      iVar3 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x5c) = iVar3;
      iVar4 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x60) = iVar4;
      iVar3 = *(int *)(param_1 + 0x54) + iVar3;
      *(int *)(param_1 + 0x54) = iVar3;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
      if (iVar3 != *(int *)(param_1 + 0xb4)) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_0809E64C(param_1);
      return in_lr;
    }
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

