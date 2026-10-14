// sub_080E9350 at 0x080E9350 (thumb)

undefined8 sub_080E9350(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((DAT_0202ebb4 & 2) == 0) {
    bVar1 = sub_08037C5C(*(undefined4 *)(param_1 + 0x10));
    uVar2 = (uint)(1 < bVar1);
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

