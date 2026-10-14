// sub_080BB9E8 at 0x080BB9E8 (thumb)

undefined4 sub_080BB9E8(int param_1)

{
  undefined4 uVar1;
  
  if ((**(byte **)(param_1 + 0x20) < 2) && ((*(byte **)(param_1 + 0x20))[1] != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

