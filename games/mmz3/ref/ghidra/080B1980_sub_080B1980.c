// sub_080B1980 at 0x080B1980 (thumb)

undefined4 sub_080B1980(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(short *)(*(int *)(param_1 + 0x28) + 4) == 2) {
    *(undefined *)(param_1 + 0x12) = 0xff;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801749C(param_1);
    iVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar2;
    if (iVar2 < 0x11800) {
LAB_080b1a22:
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8)
      ;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      return in_lr;
    }
    if (iVar2 < 0x13c00) {
      sub_0800A4B4(*(undefined4 *)(param_1 + 0x54),iVar2 + -0x800);
      sub_0800A3C4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
      iVar2 = sub_0800A104(*(int *)(param_1 + 0x54) + -0x2000,*(int *)(param_1 + 0x58) + -0x800);
      if ((0x13c00 < iVar2) ||
         (iVar2 = sub_0800A104(*(int *)(param_1 + 0x54) + 0x2000,*(int *)(param_1 + 0x58) + -0x800),
         0x13c00 < iVar2)) goto LAB_080b1a22;
    }
    *(undefined *)(param_1 + 0x25) = 0x12;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836a034,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_08017700(param_1,0xf300);
    *(undefined *)(param_1 + 0x12) = 0xb4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\x01') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x3c000;
  }
  sub_080177F4(param_1);
  sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  return in_lr;
}

