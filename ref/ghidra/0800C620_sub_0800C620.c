// sub_0800C620 at 0x0800C620 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0800C620(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 in_lr;
  uint local_40 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  undefined4 *local_24;
  
  puVar4 = local_40;
  local_40[0] = 0x85;
  local_40[1] = 0x86;
  local_40[2] = 0x87;
  local_40[3] = 0x88;
  uStack_30 = 0x89;
  uStack_2c = 0x8a;
  local_28 = DAT_0202286c;
  uVar2 = 0;
  puVar1 = &DAT_02022668;
  iVar5 = 0;
  puVar3 = &DAT_08298804;
  do {
    if ((((int)(uint)*(byte *)puVar1 >> (uVar2 & 0xff) & 1U) != 0) &&
       (((int)(uint)(byte)(&DAT_02022ad4)[(int)*puVar4 >> 3] >> (*puVar4 & 7) & 1U) != 0)) {
      local_24 = puVar1;
      sub_080067C4(*puVar3,puVar3[1],&DAT_08298774 + iVar5);
      *(byte *)local_24 = *(byte *)local_24 & ~(byte)(1 << (uVar2 & 0xff));
      puVar1 = local_24;
    }
    iVar5 = iVar5 + 0x18;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 2;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 6);
  if (((DAT_02005200 < 0x13b001) || (DAT_02005204 < 0x44001)) || (0x5dfff < DAT_02005204)) {
    if (_DAT_0202268c != -1) {
      sub_08001EE8((int)_DAT_0202268c);
      _DAT_0202268c = -1;
    }
  }
  else if (_DAT_0202268c == -1) {
    _DAT_0202268c = sub_08001EAC(0x52);
  }
  if (DAT_02022b60 != 0xb) {
    DAT_0202266c = ((short)(&DAT_080c8e24)[DAT_0202265c + 0x1000 >> 8 & 0xff] + 0x100) * 9 >> 6;
    iVar5 = (DAT_0202266c + 0x460) * 0x100;
    DAT_02021648 = iVar5 + 0x3c000;
    DAT_02022670 = ((short)(&DAT_080c8e24)[DAT_0202265c >> 8 & 0xff] + 0x100) * 9 >> 6;
    DAT_0202164c = (DAT_02022670 + 0x460) * 0x100 + 0x3c000;
    DAT_0202265c = DAT_0202265c + 0x80;
    if (DAT_02022668._2_2_ == -1) {
      if (iVar5 + 0x3e800 < *(int *)(local_28 + 0x50)) {
        DAT_02022668._2_2_ = sub_08001EAC(0xd7);
      }
    }
    else if (*(int *)(local_28 + 0x50) < iVar5 + 0x3e400) {
      sub_08001EE8((int)DAT_02022668._2_2_);
      DAT_02022668._2_2_ = -1;
    }
  }
  return in_lr;
}

