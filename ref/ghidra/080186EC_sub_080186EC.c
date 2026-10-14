// sub_080186EC at 0x080186EC (thumb)

undefined4 sub_080186EC(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 0x194) == 0) {
    uVar1 = 0xffffffff;
  }
  else if (*(byte *)(param_1 + 0x194) < 2) {
    uVar1 = 0x78;
  }
  else {
    uVar1 = 0x5a;
  }
  return uVar1;
}

