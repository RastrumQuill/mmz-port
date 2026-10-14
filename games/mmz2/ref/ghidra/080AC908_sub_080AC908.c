// sub_080AC908 at 0x080AC908 (thumb)

undefined4 sub_080AC908(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  else {
    *(uint *)(param_1 + 0x78) = iVar1 - 1U;
    if (iVar1 < 0x20) {
      if ((iVar1 - 1U & 1) == 0) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      }
    }
    sub_080EF118(param_1,*(undefined4 *)(&DAT_08345b04 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  return in_lr;
}

