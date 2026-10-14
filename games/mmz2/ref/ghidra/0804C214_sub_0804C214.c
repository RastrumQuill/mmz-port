// sub_0804C214 at 0x0804C214 (thumb)

undefined4 sub_0804C214(int param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x54);
    sub_08003430(param_1 + 0x34,0x804ce85);
    *(int *)(param_1 + 0x3c) = param_1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7;
    DAT_02000f90 = DAT_02000f90 | 0x2400;
    sub_08006E08(param_1 + 0x74,&DAT_0833b2f8);
    iVar5 = (uint)*(byte *)(param_1 + 0xbd) * 0x100 + 0x800;
    *(int *)(param_1 + 0x5c) = iVar5;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x5c) = -iVar5;
    }
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    bVar1 = *(byte *)(param_1 + 10);
    if ((bVar1 & 0x10) == 0) {
      if (*(int *)(param_1 + 0xc4) + 0x7800 <= iVar5) {
        return in_lr;
      }
      local_10 = *(int *)(param_1 + 0x58) + -0x800;
      if (*(char *)(param_1 + 0xbd) == '\0') {
        local_14 = *(int *)(param_1 + 200) + -0x7800;
      }
      else {
        local_14 = *(int *)(param_1 + 200) + -0x4c00;
      }
      sub_0809DA88(&local_14,5,((uint)bVar1 << 0x18) >> 0x1c & 1);
      sub_080032EC(0x68);
    }
    else {
      if (iVar5 <= *(int *)(param_1 + 200) + -0x7800) {
        return in_lr;
      }
      local_10 = *(int *)(param_1 + 0x58) + -0x800;
      if (*(char *)(param_1 + 0xbd) == '\0') {
        local_14 = *(int *)(param_1 + 0xc4) + 0x7800;
      }
      else {
        local_14 = *(int *)(param_1 + 0xc4) + 0x4c00;
      }
      sub_0809DA88(&local_14,5,((uint)bVar1 << 0x18) >> 0x1c & 1);
      sub_080032EC(0x68);
    }
    goto LAB_0804c3c0;
  }
  if (*(char *)(param_1 + 0xf) != '\x01') {
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xd4);
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 0x1d;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  bVar2 = false;
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar4 = *(int *)(param_1 + 0xc4) + 0x2000;
    if (iVar5 < iVar4) {
      *(int *)(param_1 + 0x54) = iVar4;
      bVar2 = true;
    }
LAB_0804c3a0:
    if (!bVar2) {
      return in_lr;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 200) + -0x2000;
    if (iVar5 <= iVar4) goto LAB_0804c3a0;
    *(int *)(param_1 + 0x54) = iVar4;
  }
  iVar5 = *(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0x54);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 7;
  }
  *(int *)(param_1 + 0xd4) = iVar5 >> 3;
  *(undefined *)(param_1 + 0x12) = 7;
LAB_0804c3c0:
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

