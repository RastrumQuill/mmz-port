// sub_08049A50 at 0x08049A50 (thumb)

undefined4 sub_08049A50(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 200);
  sub_080128D4(param_1);
  *(undefined *)(param_1 + 0xbf) = 1;
  pcVar2 = (char *)(iVar1 + 0xd1);
  if (*pcVar2 != '\0') {
    *(undefined *)(param_1 + 0xd) = 6;
    *(char *)(param_1 + 0xf) = *pcVar2;
  }
  return in_lr;
}

