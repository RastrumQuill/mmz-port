// sub_08065A24 at 0x08065A24 (thumb)

undefined8 sub_08065A24(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  if (((DAT_0202ebbb & 4) != 0) || ((*(byte *)(param_1 + 0xb) & 0x80) != 0)) {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

