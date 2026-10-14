// sub_0801870C at 0x0801870C (thumb)

undefined4 sub_0801870C(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 0x195) < 3) {
    uVar1 = 0xffffffff;
  }
  else if (*(byte *)(param_1 + 0x195) < 4) {
    uVar1 = 0x78;
  }
  else {
    uVar1 = 0x5a;
  }
  return uVar1;
}

