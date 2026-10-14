// sub_08025B64 at 0x08025B64 (thumb)

undefined8 sub_08025B64(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(param_1 + 0x214);
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
  if ((uVar1 & 2) != 0) {
    iVar2 = iVar2 + 1;
  }
  if ((uVar1 & 1) != 0) {
    iVar2 = iVar2 + 1;
  }
  return CONCAT44(in_lr,iVar2);
}

