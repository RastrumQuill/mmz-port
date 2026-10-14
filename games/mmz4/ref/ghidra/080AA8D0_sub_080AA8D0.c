// sub_080AA8D0 at 0x080AA8D0 (thumb)

undefined4 sub_080AA8D0(int param_1)

{
  short *psVar1;
  int iVar2;
  undefined4 in_lr;
  byte abStack_14 [4];
  
  sub_08128B5C(abStack_14,&DAT_08129698,2);
  iVar2 = *(int *)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    sub_08006984(0xd);
  }
  if ((*(byte *)(iVar2 + 0xc) < 2) && ((*(uint *)(param_1 + 0x8c) & 0x200) == 0)) {
    if (*(char *)(iVar2 + 200) == '\0') {
      if (*(char *)(param_1 + 0xb8) != '\0') {
        psVar1 = (short *)(param_1 + 0xb4);
        if (0 < *psVar1) {
          *psVar1 = *psVar1 + -1;
        }
      }
      sub_08128884(param_1,*(undefined4 *)(&DAT_0885f640 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      sub_08005784(param_1 + 0x74,&DAT_0885f660 + (uint)abStack_14[*(byte *)(param_1 + 0xb9)] * 0x18
                  );
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080AB1C4(param_1);
  }
  return in_lr;
}

