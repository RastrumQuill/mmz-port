// sub_080832F0 at 0x080832F0 (thumb)

void sub_080832F0(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
  uVar1 = 0xfffffe00;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar1 = 0x200;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
  uVar1 = 0xfffffc00;
  if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
    uVar1 = 0x400;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  return;
}

