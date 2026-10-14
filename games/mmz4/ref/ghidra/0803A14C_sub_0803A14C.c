// sub_0803A14C at 0x0803A14C (thumb)

undefined8 sub_0803A14C(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc0) == '\x04') {
    bVar1 = *(byte *)(param_1 + 0x153);
    bVar2 = 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x153);
    bVar2 = 0x20;
  }
  if (((bVar2 & bVar1) == 0) && ((*(ushort *)(param_1 + 0x252) & 0x8000) == 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return CONCAT44(in_lr,uVar3);
}

