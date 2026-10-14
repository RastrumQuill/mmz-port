// sub_080C11C8 at 0x080C11C8 (thumb)

undefined4 sub_080C11C8(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1400;
  uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
  uVar6 = uVar2 & 0x7fffffff;
  DAT_0202f608 = uVar6;
  cVar1 = sub_080FE4D8(uVar2 * 2 >> 0x11,3);
  *(char *)(param_1 + 0x13) = cVar1 + '\x03';
  *(undefined *)(param_1 + 0x12) = 0;
  uVar2 = uVar6 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  iVar5 = (uVar2 * 0x80 >> 0x17) + 0x300;
  iVar3 = iVar5 * *(short *)((int)&DAT_080fe64c +
                            ((*(byte *)(param_1 + 0x11) + 0x40) * 0x1000000 >> 0x17)) >> 8;
  *(int *)(param_1 + 0x5c) = iVar3;
  iVar5 = (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x11)] * iVar5 >> 8;
  *(int *)(param_1 + 0x60) = iVar5;
  uVar4 = FUN_080fe2f8(iVar3,(uint)*(byte *)(param_1 + 0x13) * 7);
  *(undefined4 *)(param_1 + 100) = uVar4;
  uVar4 = FUN_080fe2f8(iVar5,(uint)*(byte *)(param_1 + 0x13) * 7);
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  sub_080C1068(param_1);
  return in_lr;
}

