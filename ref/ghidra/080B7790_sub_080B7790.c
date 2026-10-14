// sub_080B7790 at 0x080B7790 (thumb)

undefined4 sub_080B7790(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 9) == '\b') && (*(short *)(param_1 + 0xc) == 1)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

