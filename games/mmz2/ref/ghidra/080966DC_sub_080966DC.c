// sub_080966DC at 0x080966DC (thumb)

undefined4 sub_080966DC(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  iVar1 = sub_08065A4C();
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x4900);
    sub_080128D4(param_1);
    uVar2 = sub_08038E6C(*(int *)(iVar1 + 0x54) - *(int *)(param_1 + 0x54),
                         (*(int *)(iVar1 + 0x58) + -0x2400) - *(int *)(param_1 + 0x58));
    *(int *)(param_1 + 0x5c) = (int)(short)(&DAT_080ef450)[(uVar2 & 0xff) + 0x40 & 0xff] / 2;
    *(int *)(param_1 + 0x60) = (int)(short)(&DAT_080ef450)[uVar2 & 0xff] / 2;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    sub_080128D4(param_1);
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar6;
  if (cVar3 == '\0') {
    bVar4 = false;
    if ((*(int *)(param_1 + 0xbc) - iVar5) + 0xf000U < 0x1e001) {
      if (0x14000 < (*(int *)(param_1 + 0xc0) - iVar6) + 0xa000U) {
        bVar4 = true;
      }
    }
    else {
      bVar4 = true;
    }
    iVar5 = *(int *)(param_1 + 0xbc);
    local_24 = *(int *)(iVar1 + 0x54);
    if (0x14000 < (iVar5 - local_24) + 0xa000U) {
      bVar4 = true;
    }
    local_20 = *(int *)(param_1 + 0xc0);
    if (0x14000 < (local_20 - *(int *)(iVar1 + 0x58)) + 0xa000U) {
      bVar4 = true;
    }
    if (bVar4) {
      *(undefined *)(param_1 + 0xd) = 8;
      *(undefined *)(param_1 + 0xe) = 0;
      local_24 = iVar5;
    }
    else {
      local_20 = *(int *)(iVar1 + 0x58) + -0x2400;
    }
    uVar2 = sub_08038E6C(local_24 - *(int *)(param_1 + 0x54),local_20 - *(int *)(param_1 + 0x58));
    *(int *)(param_1 + 0x5c) = (int)(short)(&DAT_080ef450)[(uVar2 & 0xff) + 0x40 & 0xff] / 2;
    *(int *)(param_1 + 0x60) = (int)(short)(&DAT_080ef450)[uVar2 & 0xff] / 2;
    *(undefined *)(param_1 + 0x12) = 0x3c;
  }
  return in_lr;
}

