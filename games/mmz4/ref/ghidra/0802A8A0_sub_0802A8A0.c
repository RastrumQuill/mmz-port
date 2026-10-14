// sub_0802A8A0 at 0x0802A8A0 (thumb)

undefined4 sub_0802A8A0(int param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x18) != '\0') && (iVar1 = sub_08000A70(0x10), iVar1 != 0)) {
    uVar2 = 0;
    do {
      sVar3 = (short)uVar2;
      *(short *)(sVar3 * 2 + iVar1) =
           sVar3 + -0xd00 + *(short *)(&DAT_08885ee6 + (uint)*(byte *)(param_1 + 0x19) * 2);
      uVar4 = (int)sVar3 + 1;
      uVar2 = uVar4 & 0xffff;
    } while ((int)(uVar4 * 0x10000) >> 0x10 < 8);
    sub_08001F1C(iVar1,(DAT_02000a06 & 0x1f00) * 8 + 0x3e6,0x10);
  }
  return in_lr;
}

