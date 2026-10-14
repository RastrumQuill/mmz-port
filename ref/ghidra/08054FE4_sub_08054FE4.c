// sub_08054FE4 at 0x08054FE4 (thumb)

undefined4 sub_08054FE4(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if (0x7600 < uVar1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    if ((1 < *(byte *)(param_1 + 0x10)) && (iVar2 = *(int *)(param_1 + 0x24), iVar2 != 0)) {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
      *(undefined4 *)(iVar2 + 0x90) = 0;
      *(undefined *)(iVar2 + 0x94) = 0;
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
      *(undefined4 *)(iVar2 + 0xc) = 3;
      *(undefined4 *)(iVar2 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(iVar2 + 9) * 4) + 0xc);
    }
  }
  return in_lr;
}

