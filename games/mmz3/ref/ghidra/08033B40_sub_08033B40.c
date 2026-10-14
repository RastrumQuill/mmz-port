// sub_08033B40 at 0x08033B40 (thumb)

undefined8 sub_08033B40(int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (((param_2 == '\0') || (*(char *)(param_1 + 0xd9) == '\0')) ||
     (*(char *)(param_1 + 0xd9) != '\x01')) {
    iVar1 = 0x220;
  }
  else {
    iVar1 = 0x222;
  }
  uVar3 = 0;
  uVar2 = 0;
  do {
    if (((*(ushort *)(param_1 + 0x194 + uVar2 * 2) & *(ushort *)(param_1 + iVar1)) != 0) &&
       ((*(ushort *)(param_1 + 0x194 + (uVar2 + 1) * 2) & *(ushort *)(param_1 + iVar1)) == 0)) {
      uVar3 = uVar3 + 1 & 0xff;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x20);
  return CONCAT44(in_lr,uVar3);
}

