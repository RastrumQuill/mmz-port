// sub_080585B4 at 0x080585B4 (thumb)

void sub_080585B4(int param_1)

{
  undefined uVar1;
  
  if ((*(ushort *)(param_1 + 0x90) & 0x1000) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(bool *)(param_1 + 0xc4) = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
  *(undefined *)(param_1 + 0xe) = 1;
  return;
}

