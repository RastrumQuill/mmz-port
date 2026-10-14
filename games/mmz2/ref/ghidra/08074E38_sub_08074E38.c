// sub_08074E38 at 0x08074E38 (thumb)

undefined4 sub_08074E38(int param_1)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = sub_080EEF64((*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) * 0x10 >> 0x10,
                         ((*(int *)(DAT_0202e130 + 0x58) - *(int *)(param_1 + 0x58)) + -0x1000) *
                         0x10 >> 0x10);
    uVar1 = (undefined)((uVar2 & 0xffff) + 0xc000 >> 8);
    *(undefined *)(param_1 + 0x13) = uVar1;
    *(undefined *)(param_1 + 0x24) = uVar1;
    *(undefined4 *)(param_1 + 0x5c) = 0x300;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar4 = *(int *)(param_1 + 0x5c);
  iVar3 = iVar4 * (short)(&DAT_080ef450)[(*(byte *)(param_1 + 0x13) + 0x40 & 0xff) + 0x40 & 0xff];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar3 >> 8);
  iVar3 = iVar4 * (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13) + 0x40 & 0xff];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar3 >> 8);
  *(int *)(param_1 + 0x5c) = iVar4 + -0x10;
  if (iVar4 + -0x10 < 1) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

