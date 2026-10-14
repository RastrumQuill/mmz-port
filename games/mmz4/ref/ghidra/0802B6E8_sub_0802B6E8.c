// sub_0802B6E8 at 0x0802B6E8 (thumb)

undefined8 sub_0802B6E8(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(param_1 + 0x250);
  iVar2 = -((int)-(uVar1 & 0x40) >> 0x1f);
  if ((uVar1 & 0x80) != 0) {
    iVar2 = iVar2 + 1;
  }
  if ((uVar1 & 0x20) != 0) {
    iVar2 = iVar2 + 1;
  }
  if ((uVar1 & 0x10) != 0) {
    iVar2 = iVar2 + 1;
  }
  if ((*(ushort *)(param_1 + 0x260) & uVar1) != 0) {
    iVar2 = iVar2 + 1;
  }
  if ((*(ushort *)(param_1 + 0x25c) & uVar1) != 0) {
    iVar2 = iVar2 + 1;
  }
  if ((*(ushort *)(param_1 + 0x25e) & uVar1) != 0) {
    iVar2 = iVar2 + 1;
  }
  if ((*(char *)(param_1 + 0xdf) == '\x01') && ((*(ushort *)(param_1 + 0x262) & uVar1) != 0)) {
    iVar2 = iVar2 + 1;
  }
  return CONCAT44(in_lr,iVar2);
}

