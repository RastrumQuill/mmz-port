// sub_080DDC0C at 0x080DDC0C (thumb)

undefined4 sub_080DDC0C(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
    local_18 = *(int *)(param_1 + 0x54) + (uVar1 * 0x20 >> 0x15);
    uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar1 & 0x7fffffff;
    local_14 = *(int *)(param_1 + 0x58) + (uVar1 * 0x10 >> 0x14) + -0x800;
    sub_080B2484(3,&local_18);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080177F4(param_1);
  if (*(int *)(param_1 + 0x60) < 0x700) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x20;
  }
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  *(int *)(param_1 + 0x68) = iVar2;
  uVar1 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (0x3000 < uVar1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

