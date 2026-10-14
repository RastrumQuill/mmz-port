// sub_080E95DC at 0x080E95DC (thumb)

undefined8 sub_080E95DC(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = 1;
  for (; *param_1 < 0xfd; param_1 = param_1 + 1) {
    if (*param_1 == 0xfc) {
      uVar1 = uVar1 * 0x10000 + 0x10000 >> 0x10;
    }
  }
  return CONCAT44(in_lr,(int)(short)uVar1);
}

