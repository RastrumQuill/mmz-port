// sub_08051878 at 0x08051878 (thumb)

undefined4 sub_08051878(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) != '\a') {
    iVar2 = *(int *)(param_1 + 0x20);
    uVar1 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
    if (0xa000 < uVar1) {
      if (iVar2 != 0) {
        sub_080511D0(iVar2);
        uRam00000024 = 0;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  return in_lr;
}

