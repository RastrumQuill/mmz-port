// sub_0801BB10 at 0x0801BB10 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0801BB10(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 in_lr;
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  uVar9 = uVar2 & 0xffff;
  if (DAT_0202cab2 != 0) {
    if (DAT_0202dad4 == '\0') {
      sub_08002734(uVar2 & 0xff,&DAT_08b2c000,99,0,0);
    }
    else {
      sub_08002734(uVar2 & 0xff,&DAT_08b2c000,0x59,0,0);
    }
  }
  if ((DAT_0202dae8 != 0) &&
     ((*(uint *)(&DAT_0202dc10 + (uint)(*(byte *)(DAT_0202dae8 + 0x1d) >> 5) * 4) &
      1 << (*(byte *)(DAT_0202dae8 + 0x1d) & 0x1f)) != 0)) {
    DAT_03002ec4 = 0x40;
    DAT_03002ec6 = 0x60;
  }
  if (DAT_0202dad9 == '\x01') {
    DAT_02000a00 = DAT_02000a00 & ~(ushort)(uVar9 << 8);
  }
  else {
    DAT_02000a00 = (ushort)(uVar9 << 8) | DAT_02000a00;
  }
  (&DAT_02000a0c)[(uVar9 >> 4) * 2] =
       ((short)*(undefined4 *)(param_1 + 0x34) - (short)((uint)DAT_0202dadc >> 8)) + 0x50 +
       _DAT_0202dae4 + (short)((uint)*(undefined4 *)(param_1 + 0x2c) >> 8);
  (&DAT_02000a0e)[(uVar9 >> 4) * 2] =
       ((short)*(undefined4 *)(param_1 + 0x38) - (short)((uint)DAT_0202dae0 >> 8)) + DAT_0202dae6 +
       (short)((uint)*(undefined4 *)(param_1 + 0x30) >> 8);
  uVar10 = 0;
  uVar2 = 0;
  uVar1 = (&DAT_02000a0c)[(uVar9 >> 4) * 2];
  uVar9 = (uint)(ushort)(&DAT_02000a0e)[(uVar9 >> 4) * 2];
  iVar3 = sub_08000A70(0x280);
  if (iVar3 != 0) {
    DAT_03001708 = &DAT_04000018;
    DAT_0300170c = 0xa6600001;
    uVar8 = uVar9 * 0x10000;
    iVar4 = (int)uVar8 >> 0x10;
    DAT_03001704 = iVar3;
    if (iVar4 != -0xa0 && 0x9f < -iVar4) {
      do {
        *(uint *)((short)uVar10 * 4 + iVar3) = uVar8 | uVar1;
        uVar5 = (int)(short)uVar10 + 1;
        uVar10 = uVar5 & 0xffff;
        iVar7 = (int)(uVar5 * 0x10000) >> 0x10;
        iVar6 = iVar7 + 0xa0;
        if (iVar6 + iVar4 < 0 == SCARRY4(iVar6,iVar4)) break;
      } while (iVar7 < 0xa0);
    }
    iVar4 = uVar10 << 0x10;
    if (iVar4 >> 0x10 < 0xa0) {
      do {
        iVar6 = (int)(short)uVar2;
        *(uint *)((iVar4 >> 0x10) * 4 + iVar3) =
             (iVar6 * *(short *)((int)&DAT_08128c10 +
                                (((uVar9 + uVar10) * 2 + (uint)*(byte *)(param_1 + 0x12)) *
                                 0x1000000 >> 0x17)) >> 0xc) + (int)(short)uVar1 & 0xffffU | uVar8;
        if (iVar6 < 200) {
          uVar2 = iVar6 + 2U & 0xffff;
        }
        uVar10 = (iVar4 >> 0x10) + 1U & 0xffff;
        iVar4 = uVar10 << 0x10;
      } while (iVar4 >> 0x10 < 0xa0);
    }
  }
  return in_lr;
}

