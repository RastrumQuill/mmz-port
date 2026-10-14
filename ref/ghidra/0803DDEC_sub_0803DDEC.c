// sub_0803DDEC at 0x0803DDEC (thumb)

void sub_0803DDEC(int param_1)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + 0x90) & 0x100) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined *)(param_1 + 0xd) = 0x10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return;
}

