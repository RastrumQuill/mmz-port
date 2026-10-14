// sub_08032F24 at 0x08032F24 (thumb)

undefined8 sub_08032F24(char param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = param_1 + 0x80;
  if ((byte)(param_1 + 0x40U) < 0x80) {
    bVar1 = 0x80 - bVar1;
  }
  return CONCAT44(in_lr,(uint)(bVar1 < 0x61));
}

