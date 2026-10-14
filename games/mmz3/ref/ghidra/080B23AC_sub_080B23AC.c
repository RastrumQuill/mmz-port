// sub_080B23AC at 0x080B23AC (thumb)

undefined4 sub_080B23AC(undefined4 param_1,int param_2,short param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = (int)param_3;
  sub_0800704C(param_1,5,param_2,0x84,iVar3);
  uVar2 = 0;
  if (0 < iVar3) {
    do {
      *(char *)((short)uVar2 * 0x84 + param_2 + 0x1c) = DAT_0202f5cc + (char)uVar2;
      uVar1 = (int)(short)uVar2 + 1;
      uVar2 = uVar1 & 0xffff;
    } while ((int)(uVar1 * 0x10000) >> 0x10 < iVar3);
  }
  DAT_0202f5cc = DAT_0202f5cc + (char)param_3;
  DAT_0203062c = param_1;
  return in_lr;
}

