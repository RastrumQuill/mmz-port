// sub_0800D06C at 0x0800D06C (thumb)

undefined4 sub_0800D06C(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  uVar2 = 0;
  do {
    piVar4 = (int *)(param_1 + 0x68 + (short)uVar2 * 4);
    iVar3 = *piVar4;
    if (iVar3 != 0) {
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
      *(undefined4 *)(iVar3 + 0x8c) = 0;
      *(undefined4 *)(iVar3 + 0x90) = 0;
      *(undefined *)(iVar3 + 0x94) = 0;
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
      *(undefined4 *)(iVar3 + 0xc) = 3;
      *(undefined4 *)(iVar3 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(iVar3 + 9) * 4) + 0xc);
      *piVar4 = 0;
    }
    uVar1 = (int)(short)uVar2 + 1;
    uVar2 = uVar1 & 0xffff;
  } while ((int)(uVar1 * 0x10000) >> 0x10 < 6);
  return in_lr;
}

