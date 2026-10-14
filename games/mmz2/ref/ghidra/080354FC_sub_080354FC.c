// sub_080354FC at 0x080354FC (thumb)

undefined8 sub_080354FC(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x223) < 3) {
    uVar1 = 0xffffffff;
  }
  else if ((DAT_0202ebbb & 8) == 0) {
    if (*(byte *)(param_1 + 0x223) < 4) {
      uVar1 = 0x78;
    }
    else {
      uVar1 = 0x5a;
    }
  }
  else {
    uVar1 = 0x3c;
  }
  return CONCAT44(in_lr,uVar1);
}

