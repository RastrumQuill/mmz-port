// sub_080A1C3C at 0x080A1C3C (thumb)

undefined4 sub_080A1C3C(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
  sub_0809C980(param_1);
  if ((*(ushort *)(undefined4 *)(param_1 + 0x90) & 0x1000) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

