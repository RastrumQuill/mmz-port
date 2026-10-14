// sub_0803AA00 at 0x0803AA00 (thumb)

undefined4 sub_0803AA00(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (int)*(char *)(param_1 + 0x67) + (uint)(byte)(&DAT_08335aa6)[*(byte *)(param_1 + 0x13)] +
          (uint)*(byte *)(param_1 + 0x66);
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  sub_08006E18(param_1 + 0x74,*(undefined4 *)(param_3 * 4 + *(int *)(&DAT_08337584 + param_2 * 4)),
               iVar1,0,(int)*(short *)(param_1 + 100),*(byte *)(param_1 + 0x66));
  return in_lr;
}

