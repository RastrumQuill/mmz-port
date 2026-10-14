// sub_080F6E90 at 0x080F6E90 (thumb)

undefined4 sub_080F6E90(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_080F6EF8();
  if (iVar2 != 0) {
    pcVar1 = (char *)(iVar2 + 0xb5);
    *pcVar1 = *pcVar1 + -1;
  }
  sub_080E8F60(param_1);
  return in_lr;
}

