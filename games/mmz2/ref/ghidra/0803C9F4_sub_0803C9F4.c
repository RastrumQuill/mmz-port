// sub_0803C9F4 at 0x0803C9F4 (thumb)

undefined4 sub_0803C9F4(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_3 * 4 +
                  *(int *)(&DAT_083388c8 + ((uint)*(byte *)(param_1 + 0x10) * 3 + param_2) * 4));
  if ((iVar1 != 0) &&
     (((*(ushort *)(param_1 + 100) & 1) == 0 || (*(char *)(param_1 + 0x13) != '\0')))) {
    iVar1 = iVar1 + 0x18;
  }
  sub_08006E08(param_1 + 0x74,iVar1);
  return in_lr;
}

