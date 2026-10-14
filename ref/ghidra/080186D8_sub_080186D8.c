// sub_080186D8 at 0x080186D8 (thumb)

undefined4 sub_080186D8(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 0x194) < 2) {
    uVar1 = 0x28;
  }
  else {
    uVar1 = 0x1e;
  }
  return uVar1;
}

