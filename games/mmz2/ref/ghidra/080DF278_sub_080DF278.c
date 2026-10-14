// sub_080DF278 at 0x080DF278 (thumb)

undefined4 sub_080DF278(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar2 = DAT_0202f654;
  iVar4 = ((*(short *)((int)&DAT_080ef450 + (((param_2 & 0xff) << 0x10) >> 0xf)) * 0xb0 >> 8) + 0x37
          ) * 0x2000;
  iVar5 = iVar4 >> 0x10;
  sVar1 = (short)((uint)iVar4 >> 0x10);
  if (*(char *)(param_1 + 6) == '\0') {
    sVar3 = 1;
  }
  else {
    sVar3 = 0x1d - sVar1;
  }
  iVar4 = (int)sVar3;
  DAT_02000fe4._0_2_ = (sVar3 + sVar1) * 8 + 1U & 0xff | sVar3 * 0x800 - 0x100U;
  iVar9 = (iVar5 + 2) * 2;
  sub_0800090C(0x2c6,DAT_0202f654 + ((*(byte *)(param_1 + 5) - 1) * 0x20 + iVar4) * 2 + -2,iVar9);
  sub_0800090C(0x2c6,iVar2 + ((*(byte *)(param_1 + 5) + 6) * 0x20 + iVar4) * 2 + -2,iVar9);
  if (*(char *)(param_1 + 4) != '\x01') {
    uVar8 = (uint)*(byte *)(param_1 + 5);
    uVar7 = uVar8 << 0x10;
    if (uVar8 < uVar8 + 6) {
      do {
        if (*(char *)(param_1 + 6) == '\0') {
          *(undefined2 *)((iVar4 + ((int)uVar7 >> 0xb)) * 2 + iVar2 + 0xc) = 0x2c7;
        }
        else {
          *(undefined2 *)((iVar4 + ((int)(uVar8 << 0x10) >> 0xb) + iVar5) * 2 + iVar2 + -0xe) =
               0x6c7;
        }
        uVar7 = uVar8 * 0x10000 + 0x10000;
        uVar8 = uVar7 >> 0x10;
      } while ((int)uVar7 >> 0x10 < (int)(*(byte *)(param_1 + 5) + 6));
    }
  }
  uVar7 = (uint)*(byte *)(param_1 + 5);
  iVar9 = uVar7 << 0x10;
  if (uVar7 < uVar7 + 6) {
    do {
      iVar6 = (iVar9 >> 0x10) * 0x20 + iVar4;
      *(undefined2 *)(iVar6 * 2 + iVar2 + -2) = 0x2c6;
      *(undefined2 *)((iVar6 + iVar5) * 2 + iVar2) = 0x6c6;
      iVar9 = ((iVar9 >> 0x10) + 1) * 0x10000;
    } while (iVar9 >> 0x10 < (int)(*(byte *)(param_1 + 5) + 6));
  }
  return in_lr;
}

