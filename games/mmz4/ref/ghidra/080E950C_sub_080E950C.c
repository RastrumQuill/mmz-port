// sub_080E950C at 0x080E950C (thumb)

undefined4 sub_080E950C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_08128884(param_1,*(undefined4 *)(&DAT_08865fd0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    iVar1 = *(int *)(param_1 + 0x28);
    if (*(byte *)(iVar1 + 0xc) < 2) {
      if (*(char *)(param_1 + 0xb8) != *(char *)(iVar1 + 0xb8)) {
        *(char *)(param_1 + 0xb8) = *(char *)(iVar1 + 0xb8);
        sub_0801CF00(param_1,CONCAT11(*(undefined *)(iVar1 + 0x1e),*(undefined *)(iVar1 + 0x70)));
        sub_0801CFF0(param_1);
      }
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
      *(undefined *)(param_1 + 0x4e) = *(undefined *)(iVar1 + 0x4e);
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_080E9594(param_1);
    }
  }
  return in_lr;
}

