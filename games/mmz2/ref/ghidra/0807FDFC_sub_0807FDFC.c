// sub_0807FDFC at 0x0807FDFC (thumb)

undefined4 sub_0807FDFC(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x5f0c);
    cVar1 = *(char *)(param_1 + 0xf);
    if (((cVar1 == '\0') || (cVar1 == '\x04')) || (cVar1 == '\b')) {
      uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar3 & 0x7fffffff;
      *(uint *)(param_1 + 0x5c) =
           ((uVar3 * 0x80 >> 0x17) + 0x80) * ((uint)*(byte *)(param_1 + 0x13) * -2 + 1);
      *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
      sub_080B6EB4(param_1,param_1 + 0x54,0,*(undefined *)(param_1 + 0x13));
    }
    else {
      uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar3 & 0x7fffffff;
      *(uint *)(param_1 + 0x5c) =
           ((uVar3 * 0x80 >> 0x17) + 0x80) * ((uint)*(byte *)(param_1 + 0x13) * -2 + 1);
      *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
      sub_080B6EB4(param_1,param_1 + 0x54,1,*(undefined *)(param_1 + 0x13));
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x12) != -1) {
    sub_080128D4(param_1);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x400);
    if (sVar2 == 0) {
      return in_lr;
    }
  }
  sub_0808009C(param_1);
  sub_0801DD2C(1,param_1 + 0x54);
  if (DAT_0202ebfc < 9999) {
    DAT_0202ebfc = DAT_0202ebfc + 1;
  }
  sub_0801DE2C(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

