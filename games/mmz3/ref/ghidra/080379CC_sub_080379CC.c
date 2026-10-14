// sub_080379CC at 0x080379CC (thumb)

undefined4 sub_080379CC(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if ((*(char *)(param_1 + 0xd) == '\0') && (cVar2 = sub_08038330(param_1), cVar2 != '\0')) {
    sub_080B322C(param_1 + 0x54,6,*(byte *)(param_1 + 10) >> 4 & 1);
    iVar4 = *(int *)(param_1 + 0x5c);
    iVar1 = -iVar4;
    *(int *)(param_1 + 0x5c) = iVar1;
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    if ((uVar3 * 2 >> 0x11 & 1) == 0) {
      *(int *)(param_1 + 0x60) = iVar4;
    }
    else {
      *(int *)(param_1 + 0x60) = iVar1;
    }
    sub_0800471C(0x2b);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  cVar2 = sub_0803814C(param_1);
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

