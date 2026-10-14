// sub_080503E4 at 0x080503E4 (thumb)

undefined8 sub_080503E4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0801CB30(DAT_0202ed88,param_1 + 0x54);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + 0x54;
  }
  return CONCAT44(in_lr,iVar1);
}

