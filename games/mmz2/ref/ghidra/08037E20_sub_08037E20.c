// sub_08037E20 at 0x08037E20 (thumb)

undefined8 sub_08037E20(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
  if ((bVar1 & 0xc) == 0) {
    uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  }
  else {
    uVar2 = sub_08022BD8(param_1,bVar1 >> 3 & 1);
    uVar2 = uVar2 & 0xff;
  }
  return CONCAT44(in_lr,uVar2);
}

