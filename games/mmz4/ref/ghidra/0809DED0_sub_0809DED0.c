// sub_0809DED0 at 0x0809DED0 (thumb)

undefined4 sub_0809DED0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar1 = 0xfffffe80;
  }
  else {
    uVar1 = 0x180;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  return in_lr;
}

