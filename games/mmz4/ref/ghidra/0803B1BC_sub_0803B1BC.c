// sub_0803B1BC at 0x0803B1BC (thumb)

undefined4 sub_0803B1BC(int param_1)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  if ((*(ushort *)(iVar3 + 0x15a) & 1) == 0) {
    if (*(byte *)(param_1 + 0x10) < 2) {
      return in_lr;
    }
    switch(*(byte *)(param_1 + 0x10)) {
    case 2:
      uVar1 = *(ushort *)(iVar3 + 200);
      if ((uVar1 & 1) == 0) {
        return in_lr;
      }
      if ((uVar1 & 4) == 0) {
        return in_lr;
      }
      if ((uVar1 & 8) == 0) {
        return in_lr;
      }
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
      goto LAB_0803b278;
    case 3:
      uVar4 = *(ushort *)(iVar3 + 200) & 1;
      break;
    case 4:
      uVar4 = ((*(ushort *)(iVar3 + 200) & 4) << 0x10) >> 0x12;
      break;
    case 5:
      uVar4 = ((*(ushort *)(iVar3 + 200) & 8) << 0x10) >> 0x13;
      break;
    case 6:
      uVar4 = ((*(ushort *)(iVar3 + 200) & 2) << 0x10) >> 0x11;
      break;
    default:
      return in_lr;
    }
    if (uVar4 != 0) {
      return in_lr;
    }
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
LAB_0803b278:
  *(byte *)(param_1 + 10) = bVar2 & 0xfd;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

