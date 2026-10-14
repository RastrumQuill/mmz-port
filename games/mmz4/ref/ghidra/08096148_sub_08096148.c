// sub_08096148 at 0x08096148 (thumb)

undefined4 sub_08096148(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar1 + 0xc) < 2) {
    if (*(char *)(iVar1 + 0xbd) != '\0') {
      *(undefined *)(param_1 + 0xd) = *(undefined *)(iVar1 + 0x70);
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885d30c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08096274(param_1);
  }
  return in_lr;
}

