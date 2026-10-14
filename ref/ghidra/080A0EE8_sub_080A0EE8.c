// sub_080A0EE8 at 0x080A0EE8 (thumb)

undefined4 sub_080A0EE8(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0809C980();
  iVar2 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar2;
  if (*(int *)(param_1 + 0x58) < 1) {
    uVar1 = (uint)DAT_02022af2;
    if (*(int *)(&DAT_082b58f8 + uVar1 * 4) <= iVar2) {
      return in_lr;
    }
    if (((*(ushort *)(param_1 + 0x90) & 4) != 0) && ((DAT_02022b62 & 0x40) != 0)) {
      if (DAT_02022b60 == 0xd) {
        if (-1 < (int)(uVar1 - 2)) {
          uVar1 = uVar1 - 1;
          goto LAB_080a0f84;
        }
      }
      else if (-1 < (int)(uVar1 - 1)) {
        DAT_02022af2 = (char)(uVar1 - 1);
        return in_lr;
      }
    }
  }
  else {
    if (iVar2 <= *(int *)(&DAT_082b58f8 + (uint)DAT_02022af2 * 4)) {
      return in_lr;
    }
    if ((((*(ushort *)(param_1 + 0x90) & 4) != 0) && ((DAT_02022b62 & 0x80) != 0)) &&
       (uVar1 = DAT_02022af2 + 1, uVar1 < 6)) {
LAB_080a0f84:
      DAT_02022af2 = (char)uVar1;
      return in_lr;
    }
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(&DAT_082b58f8 + (uint)DAT_02022af2 * 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

