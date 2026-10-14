// sub_080CE9DC at 0x080CE9DC (thumb)

void sub_080CE9DC(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0202f5c0;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202f5c0 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x58);
  return;
}

