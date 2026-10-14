// sub_08032968 at 0x08032968 (thumb)

undefined8 sub_08032968(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
  if ((bVar1 & 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    bVar1 = bVar1 >> 3;
    sub_08022BD8(param_1,bVar1 & 1);
    iVar2 = -1;
    if ((bVar1 & 1) != 0) {
      iVar2 = 1;
    }
    iVar2 = *(int *)(param_1 + 0xc4) * iVar2;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
  }
  *(int *)(param_1 + 0x5c) = iVar2;
  return CONCAT44(in_lr,iVar2);
}

