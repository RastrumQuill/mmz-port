// sub_080D8D2C at 0x080D8D2C (thumb)

undefined4 sub_080D8D2C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(int *)(*(int *)(iVar1 + 8) + 0x54) - *(int *)(param_1 + 0x54) < 0xc001) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(iVar1 + 0x14);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + *(int *)(iVar1 + 0x14);
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836d948 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836d950 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

