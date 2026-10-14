// sub_080257B0 at 0x080257B0 (thumb)

undefined4 sub_080257B0(undefined4 param_1,int param_2,short param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = (int)param_3;
  sub_0800704C(param_1,0,param_2,0x28c,iVar3);
  uVar2 = 0;
  if (0 < iVar3) {
    do {
      *(char *)((short)uVar2 * 0x28c + param_2 + 0x1c) = DAT_0202f5cc + (char)uVar2;
      uVar1 = (int)(short)uVar2 + 1;
      uVar2 = uVar1 & 0xffff;
    } while ((int)(uVar1 * 0x10000) >> 0x10 < iVar3);
  }
  DAT_0202f5cc = DAT_0202f5cc + (char)param_3;
  DAT_020305dc = param_1;
  DAT_020002b4 = param_2;
  return in_lr;
}

