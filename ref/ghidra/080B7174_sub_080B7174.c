// sub_080B7174 at 0x080B7174 (thumb)

void sub_080B7174(int param_1)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_1 + 0xbf) - 1;
  *(byte *)(param_1 + 0xbf) = (byte)iVar1;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
  }
  return;
}

