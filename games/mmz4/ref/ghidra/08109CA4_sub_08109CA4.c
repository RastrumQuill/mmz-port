// sub_08109CA4 at 0x08109CA4 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_08109CA4(int param_1)

{
  short sVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  iVar8 = *(int *)(iVar4 + 0x63a8);
  *(uint *)(param_1 + 0x54) = (uint)*(byte *)(param_1 + 0x10) * 0x800 + 0x2d00;
  *(undefined4 *)(param_1 + 0x58) = 0x2000;
  cVar2 = sub_0802B5F0(iVar8);
  if (cVar2 != '\0') {
    sVar1 = *(short *)(iVar8 + 0xa4);
    uVar3 = sub_0802B614(iVar8);
    if ((short)(uVar3 & 0xff) < sVar1) {
      iVar5 = sub_0802B614(iVar8);
      uVar6 = ((uint)*(byte *)(short *)(iVar8 + 0xa4) - iVar5) +
              (uint)*(byte *)(param_1 + 0x10) * -4;
      uVar7 = uVar6 & 0xff;
      if (4 < (int)(uVar6 * 0x1000000) >> 0x18) {
        uVar7 = 4;
      }
      if ((int)(uVar7 * 0x1000000) < 0) {
        uVar7 = 0;
      }
      uVar7 = uVar7 * 0x1000000 + 0x4000000 >> 0x18;
      goto LAB_08109d40;
    }
  }
  uVar6 = (uint)*(byte *)(iVar8 + 0xa4) + (uint)*(byte *)(param_1 + 0x10) * -4;
  uVar7 = uVar6 & 0xff;
  if (4 < (int)(uVar6 * 0x1000000) >> 0x18) {
    uVar7 = 4;
  }
  if ((int)(uVar7 * 0x1000000) < 0) {
    uVar7 = 0;
  }
LAB_08109d40:
  sub_0801CF00(param_1,((int)(uVar7 << 0x18) >> 8) + 0x34080000U >> 0x10);
  sub_0801CFF0(param_1);
  if (*(char *)(iVar4 + 0xdce) == '\0') {
    if (0x100 < _DAT_02000a10) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x20000;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088695c0)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

