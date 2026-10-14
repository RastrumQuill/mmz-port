// sub_0800773C at 0x0800773C (thumb)

undefined8 sub_0800773C(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_2 + 4);
  bVar1 = *(byte *)(param_2 + 0x3b) | *(byte *)(iVar3 + 9);
  if (((((DAT_030032e0 & 0x80) == 0) && (*(char *)(iVar3 + 8) != -1)) && ((bVar1 & 2) == 0)) &&
     (*(int *)(&DAT_0833550c +
              (uint)*(byte *)(param_1 + 0x38) * 4 + (uint)*(byte *)(iVar3 + 8) * 0x10) != 9)) {
    iVar2 = (int)(*(int *)(&DAT_0833550c +
                          (uint)*(byte *)(param_1 + 0x38) * 4 + (uint)*(byte *)(iVar3 + 8) * 0x10) *
                 (uint)*(byte *)(param_1 + 0x37)) >> 2;
    if (*(char *)(iVar3 + 2) == '\x01') {
      if (((DAT_02030108 & 1) != 0) && (*(byte *)(param_1 + 0x37) == 0xfe)) {
        iVar2 = 8;
      }
      if ((DAT_02002439 & 8) != 0) {
        iVar2 = iVar2 >> 1;
      }
    }
    if ((bVar1 & 0x80) != 0) {
      iVar2 = iVar2 << 1;
    }
    if ((bVar1 & 0x20) != 0) {
      iVar2 = FUN_080fe2f8(iVar2 << 1,3);
    }
    if (iVar2 == 0) {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
  return CONCAT44(in_lr,iVar2);
}

