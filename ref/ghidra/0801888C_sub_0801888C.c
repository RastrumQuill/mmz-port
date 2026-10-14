// sub_0801888C at 0x0801888C (thumb)

undefined4 sub_0801888C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x188) & 2) != 0) {
    uVar1 = *(byte *)(param_1 + 0x198) + 1;
    if (0xff < uVar1) {
      uVar1 = 0xff;
    }
    *(char *)(param_1 + 0x198) = (char)uVar1;
    if ((*(byte *)(param_1 + 0x199) < 4) && (199 < uVar1)) {
      *(undefined *)(param_1 + 0x199) = 4;
      if (*(byte *)(param_1 + 0x194) < 2) {
        sub_080BC818(0x106,0x5a);
      }
      else {
        sub_080BC818(0x107,0x5a);
      }
    }
  }
  return in_lr;
}

