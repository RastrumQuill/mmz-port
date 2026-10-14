// sub_080493E8 at 0x080493E8 (thumb)

undefined4 sub_080493E8(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0801CF00(param_1,0x8038);
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
    *(undefined2 *)(param_1 + 0x20) = 0;
    *(undefined *)(param_1 + 0x22) = 0;
    sub_0801CF00(param_1,0x8c0a);
  }
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08853ca0,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80496a5;
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar1 = (uint)*(byte *)(param_1 + 0x11) * 0xc0 + -0x2c0;
    }
    else {
      iVar1 = (uint)*(byte *)(param_1 + 0x11) * -0xc0 + 0x2c0;
    }
    *(int *)(param_1 + 0x5c) = iVar1;
    iVar1 = -0x100;
  }
  else {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      iVar1 = (uVar2 * 2 >> 0x11 & 3) * -0x20 + -0x2c0;
    }
    else {
      uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      iVar1 = (uVar2 * 2 >> 0x11 & 3) * 0x20 + 0x2c0;
    }
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    *(int *)(param_1 + 0x5c) = iVar1;
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    iVar1 = ((uVar2 * 2 >> 0x11 & 7) + 2) * -0x40;
  }
  *(int *)(param_1 + 0x60) = iVar1;
  *(undefined4 *)(param_1 + 0x68) = 0x40;
  *(undefined *)(param_1 + 0x12) = 0x78;
  sub_08049558(param_1);
  return in_lr;
}

