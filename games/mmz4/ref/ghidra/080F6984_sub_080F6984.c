// sub_080F6984 at 0x080F6984 (thumb)

undefined4 sub_080F6984(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((iVar1 != 0) && (1 < *(byte *)(iVar1 + 0xc))) {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if ((*(char *)(param_1 + 0xb5) == '\0') && (iVar1 == 0)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_08866d50 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

