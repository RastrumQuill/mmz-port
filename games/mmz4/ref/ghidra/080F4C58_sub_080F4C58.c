// sub_080F4C58 at 0x080F4C58 (thumb)

undefined4 sub_080F4C58(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x14) & 1) != 0) &&
      (sub_08006984(0x4f), (*(uint *)(param_1 + 0x14) & 0x20000) != 0)) && (DAT_0202dbf0 != 0)) {
    iVar1 = *(int *)(param_1 + 0x2c);
    *(byte *)(iVar1 + 0xb4) = *(byte *)(DAT_0202dbf0 + 10) >> 4 & 1;
    sub_0803A584(DAT_0202dbf0,8,0);
    *(undefined4 *)(iVar1 + 0xc) = 2;
    *(undefined4 *)(iVar1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(iVar1 + 9) * 4) + 8);
    *(char *)(iVar1 + 0x10) = *(char *)(iVar1 + 0x10) + '\x03';
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined *)(iVar1 + 0x94) = 0;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
    DAT_0202dad5 = (byte)(1 << *(sbyte *)(iVar1 + 0x11)) | DAT_0202dad5;
    sub_080F390C(iVar1);
  }
  return in_lr;
}

