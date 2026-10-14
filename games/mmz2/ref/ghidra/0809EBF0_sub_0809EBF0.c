// sub_0809EBF0 at 0x0809EBF0 (thumb)

undefined4 sub_0809EBF0(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_18;
  undefined4 local_14;
  
  if ((1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) ||
     (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\x05')) {
LAB_0809ecc0:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_0809ED64(param_1);
    return in_lr;
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    sVar2 = *(short *)(param_1 + 0x52);
    if (sVar2 == 0x100) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08006DE4(param_1 + 0x74,&DAT_08343da8,param_1 + 0x54,1);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined *)(param_1 + 0x12) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    else {
      *(short *)(param_1 + 0x52) = sVar2 + 8;
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if ((bVar1 & 3) == 0) {
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      local_18 = *(int *)(param_1 + 0x54) + ((uVar4 * 2 >> 0x11 & 0xff) - 0x80) * 0x100;
      local_14 = sub_080093C4(local_18,*(undefined4 *)(param_1 + 0x58));
      sub_080B6070(&local_18,~(*(byte *)(param_1 + 10) >> 4) & 1);
    }
    if (*(char *)(param_1 + 0x11) != '\0') {
      *(undefined2 *)(param_1 + 0x52) = 0x100;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      goto LAB_0809ecc0;
    }
  }
  if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
    return in_lr;
  }
  if (DAT_0202e130 == 0) {
    return in_lr;
  }
  if ((*(uint *)(DAT_0202e130 + 0x8c) & 0x200) != 0) {
    return in_lr;
  }
  if (*(short *)(DAT_0202e130 + 0xa4) == 0) {
    return in_lr;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (0x37f < *(int *)(param_1 + 0x5c)) goto LAB_0809ed4e;
    iVar3 = *(int *)(param_1 + 0x5c) + 0x10;
  }
  else {
    if (*(int *)(param_1 + 0x5c) < -0x37f) goto LAB_0809ed4e;
    iVar3 = *(int *)(param_1 + 0x5c) + -0x10;
  }
  *(int *)(param_1 + 0x5c) = iVar3;
LAB_0809ed4e:
  sub_080230C4(DAT_0202e130,*(undefined4 *)(param_1 + 0x5c));
  return in_lr;
}

