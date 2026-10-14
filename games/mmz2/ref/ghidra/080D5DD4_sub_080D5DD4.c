// sub_080D5DD4 at 0x080D5DD4 (thumb)

undefined8 sub_080D5DD4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((DAT_02000d14 & 0xf0) == 0) {
    uVar2 = param_3 << 0x18;
  }
  else if ((DAT_02000d14 & 0xc0) == 0) {
    iVar1 = sub_080D5F64(param_1);
    uVar2 = iVar1 << 0x18;
  }
  else {
    iVar1 = sub_080D5E10(param_1);
    uVar2 = iVar1 << 0x18;
  }
  return CONCAT44(in_lr,uVar2 >> 0x18);
}

