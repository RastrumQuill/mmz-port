// sub_08081C88 at 0x08081C88 (thumb)

undefined4 sub_08081C88(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x25) = 0xe;
    sub_08007390(param_1 + 0x74,&DAT_08364858);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(int *)(param_1 + 0x58) = DAT_020302c4 + -0x7000;
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_08017700(param_1,0x4f00);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  if ((*(byte *)(param_1 + 0x13) & 3) == 0) {
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    sub_080BFDC0(*(int *)(param_1 + 0x54) + ((uVar3 * 0x10 >> 0x14) - 0x800),
                 *(undefined4 *)(param_1 + 0x58));
  }
  iVar2 = *(int *)(param_1 + 0x60) + 0x15;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080177F4(param_1);
  if (*(byte *)(param_1 + 0x12) < 0x1e) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 1;
  }
  else {
    sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0xa00);
    if (sVar1 != 0) {
      sub_0800471C(0xe2);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    }
  }
  return in_lr;
}

