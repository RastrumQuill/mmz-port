// sub_0806D934 at 0x0806D934 (thumb)

undefined4 sub_0806D934(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = (uint)*(byte *)(param_1 + 0x13);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xd04);
    sub_080B0ACC(param_1 + 0x54,&DAT_0833e7e8,0,(uVar4 & 0xf) << 4 | uVar4);
    if (uVar4 == 0) {
      iVar3 = 0x281;
    }
    else {
      iVar3 = -0x37f;
    }
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = (uVar2 * 2 >> 0x11 & 0xff) + iVar3;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc80;
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = sub_08008CFC();
  if ((sVar1 == 0) && (*(char *)(param_1 + 0x12) != '\0')) {
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  else {
    sub_0806DAF8(param_1,uVar4);
    sub_0801DD2C(1,param_1 + 0x54);
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
    sub_0801DE2C(param_1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

