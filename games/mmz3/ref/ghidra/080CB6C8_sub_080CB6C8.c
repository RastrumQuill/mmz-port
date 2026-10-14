// sub_080CB6C8 at 0x080CB6C8 (thumb)

undefined4 sub_080CB6C8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x02') {
    if (0xc000 < *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 8) + 0x54) - *(int *)(param_1 + 0x54))
    {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(*(int *)(param_1 + 0x28) + 0x14);
  }
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836c5c8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836c5d0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

