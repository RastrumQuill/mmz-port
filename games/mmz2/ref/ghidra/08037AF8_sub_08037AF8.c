// sub_08037AF8 at 0x08037AF8 (thumb)

undefined8 sub_08037AF8(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_080312EC(param_1 + 0x1fc);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(byte *)(param_1 + 0x206 + iVar1);
  }
  return CONCAT44(in_lr,uVar2);
}

