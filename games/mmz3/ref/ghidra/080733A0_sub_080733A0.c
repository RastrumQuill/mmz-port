// sub_080733A0 at 0x080733A0 (thumb)

void sub_080733A0(int param_1)

{
  int iVar1;
  
  if (DAT_0202e48c < DAT_020302c4 + 0x4fff) {
    if (DAT_0202e48c <= *(int *)(param_1 + 0x58) + -0x2600) {
      return;
    }
    iVar1 = DAT_0202e48c + 0x2600;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x58) + 0x200;
  }
  *(int *)(param_1 + 0x58) = iVar1;
  return;
}

