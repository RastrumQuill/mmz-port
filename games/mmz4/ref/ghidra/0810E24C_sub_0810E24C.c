// sub_0810E24C at 0x0810E24C (thumb)

undefined4 sub_0810E24C(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  short sVar9;
  undefined2 *puVar10;
  undefined4 in_lr;
  undefined local_30;
  uint local_2c;
  
  iVar2 = DAT_0202f384;
  bVar1 = *(byte *)(param_1 + 5);
  uVar3 = (uint)bVar1;
  if (*(char *)(param_1 + 4) == '\x01') {
    iVar4 = *(short *)((int)&DAT_08128c10 + (((param_2 & 0xffff) << 0x18) >> 0x17)) * 0x1c00;
    iVar6 = iVar4 >> 0x10;
    if (*(char *)(param_1 + 6) == '\0') {
      local_2c = 1;
    }
    else {
      local_2c = 0x1dU - iVar6 & 0xffff;
    }
    sVar9 = (short)local_2c;
    DAT_02000a54 = (sVar9 + (short)((uint)iVar4 >> 0x10)) * 8 + 3U & 0xff | sVar9 * 0x800 - 0x300U;
    puVar8 = (undefined2 *)(DAT_0202f384 + ((int)sVar9 + (uVar3 - 1) * 0x20) * 2 + -2);
    iVar7 = (iVar6 + 2) * 2;
    sub_08000AB4(0x2d1,puVar8,iVar7);
    sub_08000AB4(0x2d2,iVar2 + ((int)sVar9 + (uVar3 + 6) * 0x20) * 2 + -2,iVar7);
    *puVar8 = 0x2cd;
    puVar8[0x20] = 0x2ce;
    puVar8[0x40] = 0x2d3;
    puVar8[0x60] = 0x2d3;
    puVar8[0x80] = 0x2d3;
    puVar8[0xa0] = 0x2d3;
    puVar8[0xc0] = 0x2cf;
    puVar8[0xe0] = 0x2d0;
    puVar8 = puVar8 + iVar6 + 1;
    *puVar8 = 0x6cd;
    puVar8[0x20] = 0x6ce;
    puVar8[0x40] = 0x6d3;
    puVar8[0x60] = 0x6d3;
    puVar8[0x80] = 0x6d3;
    puVar8[0xa0] = 0x6d3;
    puVar8[0xc0] = 0x6cf;
    puVar8[0xe0] = 0x6d0;
  }
  else {
    iVar4 = ((*(short *)((int)&DAT_08128c10 + (((param_2 & 0xffff) << 0x18) >> 0x17)) * 0xb0 >> 8) +
            0x37) * 0x2000;
    iVar6 = iVar4 >> 0x10;
    if (*(char *)(param_1 + 6) == '\0') {
      local_2c = 1;
    }
    else {
      local_2c = 0x1dU - iVar6 & 0xffff;
    }
    sVar9 = (short)local_2c;
    DAT_02000a54 = (sVar9 + (short)((uint)iVar4 >> 0x10)) * 8 + 3U & 0xff | sVar9 * 0x800 - 0x300U;
    puVar8 = (undefined2 *)(DAT_0202f384 + ((int)sVar9 + (uVar3 - 1) * 0x20) * 2 + -2);
    iVar7 = (iVar6 + 2) * 2;
    sub_08000AB4(0x2d1,puVar8,iVar7);
    sub_08000AB4(0x2d2,iVar2 + ((int)sVar9 + (uVar3 + 6) * 0x20) * 2 + -2,iVar7);
    if (*(char *)(param_1 + 6) == '\0') {
      *puVar8 = 0x2d4;
      puVar8[0x20] = 0x2d5;
      puVar8[0x40] = 0x2d8;
      puVar8[0x60] = 0x2d8;
      puVar8[0x80] = 0x2d8;
      puVar8[0xa0] = 0x2d8;
      puVar8[0xc0] = 0x2d6;
      puVar8[0xe0] = 0x2d7;
      sub_08000AB4(0x2de,puVar8 + 1,0xc);
      sub_08000AB4(0x2df,puVar8 + 0xe1,0xc);
      puVar8[7] = 0x2d9;
      puVar8[0x27] = 0x2da;
      puVar8[0x47] = 0x2dd;
      puVar8[0x67] = 0x2dd;
      puVar8[0x87] = 0x2dd;
      puVar8[0xa7] = 0x2dd;
      puVar8[199] = 0x2db;
      puVar8[0xe7] = 0x2dc;
      puVar8 = puVar8 + iVar6 + 1;
      *puVar8 = 0x6cd;
      sVar9 = 0x6ce;
      puVar8[0x20] = 0x6ce;
      puVar8[0x40] = 0x6d3;
      puVar8[0x60] = 0x6d3;
      puVar8[0x80] = 0x6d3;
      puVar8[0xa0] = 0x6d3;
      puVar10 = puVar8 + 0xc0;
      uVar5 = 0x6cf;
    }
    else {
      puVar10 = puVar8 + iVar6 + -6;
      *puVar10 = 0x6d9;
      puVar10[0x20] = 0x6da;
      puVar10[0x40] = 0x6dd;
      puVar10[0x60] = 0x6dd;
      puVar10[0x80] = 0x6dd;
      puVar10[0xa0] = 0x6dd;
      puVar10[0xc0] = 0x6db;
      puVar10[0xe0] = 0x6dc;
      puVar10 = (undefined2 *)((int)puVar10 - (iVar6 * 2 + -0xc));
      *puVar10 = 0x2cd;
      puVar10[0x20] = 0x2ce;
      puVar10[0x40] = 0x2d3;
      puVar10[0x60] = 0x2d3;
      puVar10[0x80] = 0x2d3;
      puVar10[0xa0] = 0x2d3;
      puVar10[0xc0] = 0x2cf;
      puVar10[0xe0] = 0x2d0;
      sub_08000AB4(0x6de,puVar10 + iVar6 + -5,0xc);
      sub_08000AB4(0x6df,puVar10 + iVar6 + 0xdb,0xc);
      puVar8 = puVar10 + iVar6 + 1;
      *puVar8 = 0x6d4;
      sVar9 = 0x6d5;
      puVar10[iVar6 + 0x21] = 0x6d5;
      puVar10[iVar6 + 0x41] = 0x6d8;
      puVar10[iVar6 + 0x61] = 0x6d8;
      puVar10[iVar6 + 0x81] = 0x6d8;
      puVar10[iVar6 + 0xa1] = 0x6d8;
      puVar10 = puVar10 + iVar6 + 0xc1;
      uVar5 = 0x6d6;
    }
    *puVar10 = uVar5;
    puVar8[0xe0] = sVar9 + 2;
    sub_0810E1C0(param_1);
  }
  DAT_0202f358 = (undefined)local_2c;
  local_30 = (undefined)((uint)iVar4 >> 0x10);
  DAT_0202f35a = local_30;
  DAT_0202f359 = bVar1;
  DAT_0202f35b = 6;
  return in_lr;
}

