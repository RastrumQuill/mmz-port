// sub_0805DC68 at 0x0805DC68 (thumb)

void sub_0805DC68(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xfffffe00;
  uVar1 = 0xfffffe00;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar1 = 0x200;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = 0xfffffc00;
  uVar1 = 0xfffffc00;
  if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
    uVar1 = 0x400;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  return;
}

