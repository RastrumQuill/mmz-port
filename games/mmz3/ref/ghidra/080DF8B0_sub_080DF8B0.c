// sub_080DF8B0 at 0x080DF8B0 (thumb)

undefined4 sub_080DF8B0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_0800D740(param_1 + 0x54);
    sub_0801ACF8(4,param_1 + 0x54);
    sub_0800471C(0xe2);
    iVar1 = 0xf;
    do {
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      uVar3 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
      uVar4 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      sub_080B27F0(*(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0x1fff) - 0x1000),
                   *(int *)(param_1 + 0x58) + ((uVar3 * 2 >> 0x11 & 0x1fff) - 0x1000),
                   uVar4 * 2 >> 0x11 & 3);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if (*(int *)(param_1 + 0x60) < 0x700) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x20;
  }
  iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0x68) = iVar1;
  uVar2 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (0x3000 < uVar2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

