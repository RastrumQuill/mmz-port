// sub_0807F824 at 0x0807F824 (thumb)

undefined8 sub_0807F824(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  if (((DAT_0202e8b8 & 0x80) != 0) || ((*(byte *)(param_1 + 0xb) & 0x80) != 0)) {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

