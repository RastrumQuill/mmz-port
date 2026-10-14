// sub_08065AC8 at 0x08065AC8 (thumb)

undefined8 sub_08065AC8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08012398(DAT_0202f070,param_1 + 0x54);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + 0x54;
  }
  return CONCAT44(in_lr,iVar1);
}

