// sub_08016EC0 at 0x08016EC0 (thumb)

undefined8 sub_08016EC0(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x12d) & 0x40) == 0) {
    bVar1 = sub_0801BB74(param_1,0xb,2);
    uVar2 = (uint)bVar1;
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      *(byte *)(param_1 + 0x11a) = bVar1;
    }
  }
  else {
    *(undefined *)(param_1 + 0x11a) = 0x40;
    uVar2 = 0x40;
  }
  return CONCAT44(in_lr,uVar2);
}

