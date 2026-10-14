// sub_08016A10 at 0x08016A10 (thumb)

undefined4 sub_08016A10(int param_1)

{
  bool bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x68) = 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(int *)(param_1 + 0x34) - 0x571U < 0xef) {
    bVar1 = *(int *)(param_1 + 0x38) < 0x230;
    if (bVar1 != (bool)*(char *)(param_1 + 0x68)) {
      if (bVar1) {
        sub_080093E8(5,2,0x15);
        sub_080093E8(5,3,0x16);
        sub_080093E8(5,4,0x52);
        sub_080093E8(8,2,0x17);
        sub_080093E8(8,3,0x18);
        sub_080093E8(8,4,0x53);
      }
      else {
        sub_080093E8(5,2,0x11);
        sub_080093E8(5,3,0x21);
        sub_080093E8(5,4,0x31);
        sub_080093E8(8,2,0x14);
        sub_080093E8(8,3,0x24);
        sub_080093E8(8,4,0x34);
      }
      *(char *)(param_1 + 0x68) = bVar1;
    }
  }
  return in_lr;
}

