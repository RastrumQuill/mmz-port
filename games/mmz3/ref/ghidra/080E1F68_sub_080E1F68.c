// sub_080E1F68 at 0x080E1F68 (thumb)

undefined4 sub_080E1F68(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  uVar1 = (uint)*(byte *)(param_1 + 0x10) + (uint)*(byte *)(param_1 + 0x11);
  if (uVar1 == 1) {
    DAT_0202f600 = DAT_0202f600 + 0x40;
  }
  else if (uVar1 < 2) {
    if (uVar1 == 0) {
      DAT_0202f600 = DAT_0202f600 + 0x20;
    }
  }
  else if (uVar1 == 2) {
    DAT_0202f600 = DAT_0202f600 + 0x100;
  }
  else if (uVar1 == 3) {
    DAT_0202f600 = DAT_0202f600 + 0x100;
    uVar1 = 0;
    do {
      pbVar2 = (byte *)(iVar3 + 0xbc + uVar1);
      if (*pbVar2 < 0x20) {
        *pbVar2 = 0x20;
        *(undefined *)(iVar3 + 0x233) = 2;
        break;
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < 4);
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 8);
  sub_080E1DB8(param_1);
  return in_lr;
}

