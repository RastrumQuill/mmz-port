// sub_080A1F40 at 0x080A1F40 (thumb)

undefined4 sub_080A1F40(int param_1)

{
  undefined4 in_lr;
  
  sub_0809C980();
  if ((*(ushort *)(undefined4 *)(param_1 + 0x90) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
  }
  return in_lr;
}

