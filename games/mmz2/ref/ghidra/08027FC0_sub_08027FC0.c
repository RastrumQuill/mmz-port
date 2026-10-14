// sub_08027FC0 at 0x08027FC0 (thumb)

undefined4 sub_08027FC0(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 in_lr;
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08333e78 + (uint)*(byte *)(param_1 + 0xe) * 4));
  pbVar4 = (byte *)(param_1 + 0x95);
  bVar1 = *pbVar4;
  uVar3 = sub_080370D8(param_1,1,1,1,1,1);
  if (*pbVar4 < uVar3) {
    bVar2 = 0;
  }
  else {
    bVar2 = *pbVar4 - (char)uVar3;
  }
  *pbVar4 = bVar2;
  iVar5 = (int)*(char *)(param_1 + 0x18d);
  if (-1 < iVar5) {
    if (((iVar5 == 0) || (iVar5 = iVar5 + -1, iVar5 == 0)) && (bVar1 != *(byte *)(param_1 + 0x95)))
    {
      iVar5 = 4;
      if (*(char *)(param_1 + 0x17f) == '\x7f') {
        sub_0801E9FC(param_1,0x82);
      }
      else {
        sub_0801E9FC(param_1,0x7f);
      }
    }
    *(char *)(param_1 + 0x18d) = (char)iVar5;
  }
  return in_lr;
}

