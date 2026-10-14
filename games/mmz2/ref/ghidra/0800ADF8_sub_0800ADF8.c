// sub_0800ADF8 at 0x0800ADF8 (thumb)

undefined8 sub_0800ADF8(int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  piVar1 = &DAT_08314e10;
  if (*param_1 >> 0xc != 0x146) {
    do {
      piVar1 = piVar1 + 3;
      uVar2 = uVar2 + 1;
      if (0x19 < (int)uVar2) break;
    } while (*param_1 >> 0xc != *piVar1);
  }
  return CONCAT44(in_lr,DAT_0202e024 & 1 << (uVar2 & 0xff));
}

