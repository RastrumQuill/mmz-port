// sub_08087C0C at 0x08087C0C (thumb)

undefined4 sub_08087C0C(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_34 = -0x400;
    }
    else {
      local_34 = 0x400;
    }
    local_34 = *(int *)(param_1 + 0x54) + local_34;
    local_30 = *(undefined4 *)(param_1 + 0x58);
    local_2c = 0x200;
    local_28 = 0;
    sub_08088E68(&local_34,&local_2c,6,8);
    iVar5 = param_1 + 0x74;
    sub_08005784(iVar5,&DAT_0885baf8);
    if (*(char *)(param_1 + 0xb5) != '\0') {
      if (*(char *)(param_1 + 0xb8) == '\0') {
        local_24 = *(undefined4 *)(param_1 + 0x54);
        local_20 = *(undefined4 *)(param_1 + 0x58);
        bVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
        if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
          bVar2 = bVar2 + 2;
        }
        sub_080D8004(&local_24,0,bVar2);
        sub_080D8004(&local_24,1,bVar2);
      }
      *(char *)(param_1 + 0xb5) = '\0';
      sub_08005784(iVar5,&DAT_0885bb28);
    }
    sub_0801CF00(param_1,0x1d0d);
    if (bVar1 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    *(uint *)(param_1 + 0x5c) = ((uint)bVar1 * -2 + 1) * 0x180;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd80;
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    iVar4 = sub_0807F824(param_1);
    if (iVar4 != 0) {
      sub_08005784(iVar5,&DAT_0885baf8);
      sub_0801CFF0(param_1);
      return in_lr;
    }
  }
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0x12) != '\0') &&
     (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == '\0')) {
    sub_08005784(param_1 + 0x74,&DAT_0885baf8);
  }
  iVar5 = sub_08088B14(param_1);
  if (iVar5 != 0) {
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined *)(param_1 + 0x4d) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0xc00;
    }
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

