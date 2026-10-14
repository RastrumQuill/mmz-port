// sub_08090A84 at 0x08090A84 (thumb)

undefined4 sub_08090A84(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if ((*(byte *)(iVar3 + 0xc) < 2) && ((*(uint *)(iVar3 + 0xc) & 0xffff00) == 0x30900)) {
    sub_0801CFF0(param_1);
    iVar1 = *(int *)(iVar3 + 0x58);
    iVar2 = (iVar1 + -0xa7ff) - DAT_0202ea34;
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 >> 0xf;
    }
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
    *(int *)(param_1 + 0x58) = iVar1 + -0x5800 + iVar2 * -0x8000;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08090B48(param_1);
  }
  return in_lr;
}

