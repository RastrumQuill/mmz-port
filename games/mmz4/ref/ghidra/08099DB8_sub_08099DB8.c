// sub_08099DB8 at 0x08099DB8 (thumb)

undefined4 sub_08099DB8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x6103);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885d98c,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar1 = *(int *)(DAT_0202dbf0 + 0x54);
    iVar3 = *(int *)(param_1 + 0x54);
    if (iVar1 < iVar3) goto LAB_08099e28;
  }
  else {
    iVar1 = *(int *)(DAT_0202dbf0 + 0x54);
    iVar3 = *(int *)(param_1 + 0x54);
    if (iVar3 < iVar1) {
LAB_08099e28:
      iVar1 = iVar1 + 0x1800;
      goto LAB_08099e38;
    }
  }
  iVar1 = iVar1 + -0x1800;
LAB_08099e38:
  iVar1 = sub_081284E0((iVar1 - iVar3) * 0x100 >> 0x10,
                       (*(int *)(DAT_0202dbf0 + 0x58) - *(int *)(param_1 + 0x58)) * 0x100 >> 0x10);
  uVar2 = (uint)(iVar1 << 0x10) >> 0x18;
  *(int *)(param_1 + 0x5c) =
       *(short *)((int)&DAT_08128c10 + ((uVar2 + 0x40) * 0x1000000 >> 0x17)) * 9 >> 1;
  *(int *)(param_1 + 0x60) = (short)(&DAT_08128c10)[uVar2] * 9 >> 1;
  iVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xb8) = iVar1 + -0x1400;
  return in_lr;
}

