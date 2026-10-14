// sub_0801BC08 at 0x0801BC08 (thumb)

undefined8
sub_0801BC08(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x12d);
  uVar2 = 0;
  if ((bVar1 & 0xf) != 0) {
    uVar2 = param_2 & 0xff;
  }
  if ((bVar1 & 0x10) != 0) {
    uVar2 = uVar2 + (param_3 & 0xff);
  }
  if ((bVar1 & 0x20) != 0) {
    uVar2 = uVar2 + (param_4 & 0xff);
  }
  if ((bVar1 & 0x40) != 0) {
    uVar2 = uVar2 + (param_5 & 0xff);
  }
  if ((bVar1 & 0x80) != 0) {
    uVar2 = uVar2 + (param_6 & 0xff);
  }
  return CONCAT44(in_lr,uVar2);
}

