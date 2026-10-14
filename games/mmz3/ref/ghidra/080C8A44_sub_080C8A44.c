// sub_080C8A44 at 0x080C8A44 (thumb)

undefined4 sub_080C8A44(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  for (bVar1 = 0; bVar1 < *(byte *)(param_1 + 0x7b); bVar1 = bVar1 + 1) {
    sub_080C89A4(param_1,bVar1,*(undefined *)(param_1 + 0x11));
  }
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 1;
  sub_080C8A14(param_1);
  return in_lr;
}

