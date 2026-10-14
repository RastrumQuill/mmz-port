// sub_0803C010 at 0x0803C010 (thumb)

undefined4 sub_0803C010(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x71) == '\a') && (*(char *)(param_1 + 0x72) < '\x02')) {
    iVar1 = *(int *)(param_1 + 0x28);
    if ((*(short *)(iVar1 + 0x176) == 0x103) && (*(short *)(iVar1 + 0x178) == 0x301)) {
      sub_08033A1C(iVar1,3,0,0,0xd,*(undefined *)(param_1 + 0x12),0);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 8)
      ;
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 1;
    sub_0803C0B0(param_1);
  }
  return in_lr;
}

