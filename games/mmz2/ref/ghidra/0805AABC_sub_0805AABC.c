// sub_0805AABC at 0x0805AABC (thumb)

undefined4 sub_0805AABC(int param_1)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa914);
    sub_08006E08(param_1 + 0x74,&DAT_0833cd0c);
    iVar5 = DAT_0202e130;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar5 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    if (*(char *)(param_1 + 0xbc) == '\0') {
      uVar4 = 0x100;
    }
    else {
      uVar4 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    sub_080032EC(0x70);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(int *)(param_1 + 0x2c) != 0) && (iVar5 = sub_0801E4D8(), iVar5 != 0)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  bVar2 = *(byte *)(param_1 + 0xf);
  if (bVar2 == 1) {
    sub_080127E4(param_1,0xa915);
  }
  else {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        return in_lr;
      }
      sub_080128D4(param_1);
      if (*(int *)(param_1 + 0x2c) != 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    sVar3 = sub_08008CFC();
    if (sVar3 == 0) {
      return in_lr;
    }
    uVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

