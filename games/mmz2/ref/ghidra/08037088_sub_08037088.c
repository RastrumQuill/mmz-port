// sub_08037088 at 0x08037088 (thumb)

undefined8 sub_08037088(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x196);
  iVar2 = 0;
  if ((bVar1 & 0xf) != 0) {
    iVar2 = param_2;
  }
  if ((bVar1 & 0x10) != 0) {
    iVar2 = iVar2 + param_3;
  }
  if ((bVar1 & 0x20) != 0) {
    iVar2 = iVar2 + param_4;
  }
  if ((bVar1 & 0x40) != 0) {
    iVar2 = iVar2 + param_5;
  }
  if ((bVar1 & 0x80) != 0) {
    iVar2 = iVar2 + param_6;
  }
  return CONCAT44(in_lr,iVar2);
}

