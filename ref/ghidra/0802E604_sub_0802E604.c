// sub_0802E604 at 0x0802E604 (thumb)

undefined4 sub_0802E604(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  sub_080297C0();
  if (*(char *)(param_1 + 0x12) == '\0') {
    iVar1 = *(int *)(iVar1 + 0x54);
    if (iVar1 == -0xc0) {
      sub_08001EAC(0xae);
    }
    else if (iVar1 == -0x20) {
      sub_08001EAC(0xaf);
    }
  }
  else if (*(char *)(param_1 + 0x12) == '(') {
    iVar1 = *(int *)(iVar1 + 0x54);
    if (iVar1 == -0xc0) {
      sub_08001EAC(0xae);
    }
    else if ((iVar1 == -0x20) || (iVar1 == 0)) {
      sub_08001EAC(0xaf);
    }
    *(undefined *)(param_1 + 0x12) = 0;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

