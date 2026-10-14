// sub_0802A7B0 at 0x0802A7B0 (thumb)

undefined4 sub_0802A7B0(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar2 = sub_08000A70(0x10);
  if (iVar2 != 0) {
    if (*(char *)(param_1 + 0x18) == '\0') {
      if (*(char *)(param_1 + 0x19) == '\0') {
        uVar4 = 0;
        do {
          sVar1 = (short)uVar4;
          *(short *)(sVar1 * 2 + iVar2) = sVar1 + -0xc88;
          uVar3 = (int)sVar1 + 1;
          uVar4 = uVar3 & 0xffff;
        } while ((int)(uVar3 * 0x10000) >> 0x10 < 8);
      }
      else {
        uVar4 = 0;
        do {
          sVar1 = (short)uVar4;
          *(short *)(sVar1 * 2 + iVar2) =
               sVar1 + -0xd00 + *(short *)(&DAT_08885ee6 + (uint)*(byte *)(param_1 + 0x19) * 2);
          uVar3 = (int)sVar1 + 1;
          uVar4 = uVar3 & 0xffff;
        } while ((int)(uVar3 * 0x10000) >> 0x10 < 8);
      }
    }
    else {
      uVar4 = 0;
      do {
        sVar1 = (short)uVar4;
        *(short *)(sVar1 * 2 + iVar2) =
             sVar1 + -0xd00 + *(short *)(&DAT_08885ecc + (uint)*(byte *)(param_1 + 0x18) * 2);
        uVar3 = (int)sVar1 + 1;
        uVar4 = uVar3 & 0xffff;
      } while ((int)(uVar3 * 0x10000) >> 0x10 < 8);
    }
    sub_08001F1C(iVar2,(DAT_02000a06 & 0x1f00) * 8 + 0x3a2,0x10);
  }
  return in_lr;
}

