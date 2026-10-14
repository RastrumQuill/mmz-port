// sub_080071B8 at 0x080071B8 (thumb)

undefined8 sub_080071B8(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_2 + 4);
  bVar1 = *(byte *)(param_2 + 0x3b) | *(byte *)(iVar3 + 9);
  if (((((DAT_030032e0 & 0x80) == 0) && (*(char *)(iVar3 + 8) != -1)) && ((bVar1 & 2) == 0)) &&
     (*(int *)(&DAT_08312afc +
              (uint)*(byte *)(param_1 + 0x38) * 4 + (uint)*(byte *)(iVar3 + 8) * 0x10) != 9)) {
    iVar4 = *(int *)(&DAT_08312afc +
                    (uint)*(byte *)(param_1 + 0x38) * 4 + (uint)*(byte *)(iVar3 + 8) * 0x10) *
            (uint)*(byte *)(param_1 + 0x37);
    iVar2 = iVar4 >> 2;
    if ((*(char *)(iVar3 + 2) == '\x01') && ((DAT_0202ebbb & 0x40) != 0)) {
      iVar2 = iVar4 >> 3;
    }
    if ((bVar1 & 0x10) != 0) {
      iVar2 = iVar2 << 1;
    }
    if ((bVar1 & 4) != 0) {
      iVar2 = sub_080EF150(iVar2 << 1,3);
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

