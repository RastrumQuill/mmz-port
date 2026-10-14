// sub_08012ABC at 0x08012ABC (thumb)

undefined4 sub_08012ABC(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar2 = 0;
  do {
    iVar4 = (short)uVar2 * 4 + param_1;
    iVar3 = *(int *)(iVar4 + 0x68);
    if (iVar3 != 0) {
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
      *(undefined4 *)(iVar3 + 0x8c) = 0;
      *(undefined4 *)(iVar3 + 0x90) = 0;
      *(undefined *)(iVar3 + 0x94) = 0;
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
      *(undefined4 *)(iVar3 + 0xc) = 3;
      *(undefined4 *)(iVar3 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(iVar3 + 9) * 4) + 0xc);
      *(undefined4 *)(iVar4 + 0x68) = 0;
    }
    uVar1 = (int)(short)uVar2 + 1;
    uVar2 = uVar1 & 0xffff;
  } while ((int)(uVar1 * 0x10000) >> 0x10 < 6);
  return in_lr;
}

