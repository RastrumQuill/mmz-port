// sub_080E93CC at 0x080E93CC (thumb)

undefined8 sub_080E93CC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((DAT_0202ebb4 & 2) == 0) {
    uVar1 = sub_08037A60(*(undefined4 *)(param_1 + 0x10));
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

