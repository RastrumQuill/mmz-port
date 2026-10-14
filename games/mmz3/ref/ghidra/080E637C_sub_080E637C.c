// sub_080E637C at 0x080E637C (thumb)

undefined4 sub_080E637C(int param_1)

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
  iVar8 = *(int *)(iVar4 + 0x64ac);
  *(uint *)(param_1 + 0x54) = (uint)*(byte *)(param_1 + 0x10) * 0x800 + 0x2e00;
  *(undefined4 *)(param_1 + 0x58) = 0x2300;
  cVar2 = sub_080259BC(iVar8);
  if (cVar2 != '\0') {
    sVar1 = *(short *)(iVar8 + 0xa4);
    uVar3 = sub_08025A74(iVar8);
    if ((short)(uVar3 & 0xff) < sVar1) {
      iVar5 = sub_08025A74(iVar8);
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
      goto LAB_080e6418;
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
LAB_080e6418:
  sub_08017700(param_1,((int)(uVar7 << 0x18) >> 8) + 0xe0c0000U >> 0x10);
  sub_080177F4(param_1);
  if (*(char *)(iVar4 + 0xdd0) == '\0') {
    if (0x100 < (ushort)DAT_020023d0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x20000;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

