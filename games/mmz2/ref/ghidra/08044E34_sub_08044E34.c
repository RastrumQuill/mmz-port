// sub_08044E34 at 0x08044E34 (thumb)

undefined8 sub_08044E34(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  bVar1 = sub_08044DC0();
  if (bVar1 < 7) {
    uVar2 = 0xd;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

