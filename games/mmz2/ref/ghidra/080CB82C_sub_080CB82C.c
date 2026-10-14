// sub_080CB82C at 0x080CB82C (thumb)

undefined4 sub_080CB82C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0834916c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    iVar1 = *(int *)(param_1 + 0x28);
    if (*(byte *)(iVar1 + 0xc) < 2) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
      *(undefined *)(param_1 + 0x4e) = *(undefined *)(iVar1 + 0x4e);
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_080CB888(param_1);
    }
  }
  return in_lr;
}

