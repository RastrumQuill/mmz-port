// sub_0800D7A4 at 0x0800D7A4 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0800D7A4(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  uint local_34 [2];
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  uVar3 = *(int *)(param_1 + 0x5c) << 0x10;
  local_2c = 0x15000;
  local_28 = 0x1b000;
  local_24 = 0x3f000000;
  local_20 = 0xfe008000;
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 0) {
    uVar4 = *(uint *)(param_1 + 100);
    (&DAT_02000f94)[uVar3 >> 0x14] = (ushort)uVar4 | 0x4046;
    sub_080EEF68(&DAT_08372b40,(uVar4 & 0x1f00) * 8 + 0x6000000,0x200);
    local_34[0] = (uint)bVar1;
    sub_080EEF68(local_34,&DAT_06000800 + ((ushort)(&DAT_02000f94)[uVar3 >> 0x14] & 0x1f00) * 8,
                 0x1000200);
    _DAT_0202e020 = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sVar2 = (&DAT_080ef450)[_DAT_0202e020 & 0xff];
  iVar5 = (short)(&DAT_080ef450)[_DAT_0202e020 >> 2 & 0xff] * 8 + 0x800;
  uVar3 = uVar3 >> 0x14;
  *(short *)(&DAT_02000f9c + uVar3) =
       ((short)*(undefined4 *)(param_1 + 0x34) + -0x110) - (short)((uint)(sVar2 * 8) >> 8);
  *(short *)((int)&DAT_02000f9c + uVar3 * 4 + 2) =
       ((short)*(undefined4 *)(param_1 + 0x38) + -0x1e0) - (short)((uint)iVar5 >> 8);
  local_2c = sVar2 * 8 + local_2c;
  local_28 = iVar5 + local_28;
  sub_080099BC(0xe001,0x2401,&local_2c,&local_24);
  DAT_0202e030 = local_2c;
  DAT_0202e034 = local_28;
  DAT_0202e024._0_2_ = 0x80U - *(short *)(&DAT_02000f9c + uVar3) & 0xff;
  return in_lr;
}

