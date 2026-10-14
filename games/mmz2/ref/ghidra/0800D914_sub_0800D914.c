// sub_0800D914 at 0x0800D914 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0800D914(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 in_lr;
  uint local_34 [2];
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  uVar3 = *(int *)(param_1 + 0x5c) << 0x10;
  local_2c = 0x1f000;
  local_28 = 0x1b000;
  local_24 = 0x3f000000;
  local_20 = 0xfe008000;
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 0) {
    uVar4 = *(uint *)(param_1 + 100);
    (&DAT_02000f94)[uVar3 >> 0x14] = (ushort)uVar4 | 0x4046;
    sub_080EEF68(&DAT_08373348,(uVar4 & 0x1f00) * 8 + 0x6000000,0x200);
    local_34[0] = (uint)bVar1;
    sub_080EEF68(local_34,&DAT_06000800 + ((ushort)(&DAT_02000f94)[uVar3 >> 0x14] & 0x1f00) * 8,
                 0x1000200);
    DAT_02000fe0 = DAT_02000fe0 | 0x4000;
    DAT_02000fec._1_1_ = 0xf7;
    DAT_02000fec._2_1_ = DAT_02000fec._2_1_ & 0xfb | 10;
    DAT_02000fe8._2_2_ = 0xa0;
    _DAT_0202e020 = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sVar2 = (&DAT_080ef450)[(_DAT_0202e020 >> 1) + 0x40 & 0xff];
  iVar6 = (short)(&DAT_080ef450)[(_DAT_0202e020 >> 3) + 0x40 & 0xff] * 8 + 0x800;
  uVar3 = uVar3 >> 0x14;
  *(short *)(&DAT_02000f9c + uVar3) =
       ((short)*(undefined4 *)(param_1 + 0x34) + -0x180) - (short)((uint)(sVar2 * 8) >> 8);
  *(short *)((int)&DAT_02000f9c + uVar3 * 4 + 2) =
       ((short)*(undefined4 *)(param_1 + 0x38) + -0x1e0) - (short)((uint)iVar6 >> 8);
  local_2c = sVar2 * 8 + local_2c;
  local_28 = iVar6 + local_28;
  sub_080099BC(0xe002,0x2401,&local_2c,&local_24);
  DAT_0202e038 = local_2c;
  _DAT_0202e03c = local_28;
  DAT_0202e024._2_2_ = 0x30U - *(short *)(&DAT_02000f9c + uVar3) & 0xff;
  uVar3 = (uint)DAT_0202e024._2_2_ + (uint)(ushort)DAT_0202e024 >> 1;
  if (uVar3 < 0x78) {
    iVar6 = DAT_0202e028 * 0xf + ((DAT_0202e024._2_2_ - uVar3) + 2) * 0x100;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xf;
    }
  }
  else {
    iVar6 = DAT_0202e028 * 0xf + (((ushort)DAT_0202e024 - uVar3) + -2) * 0x100;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xf;
    }
  }
  DAT_0202e028 = iVar6 >> 4;
  uVar3 = uVar3 + (iVar6 >> 0xc) & 0xffff;
  if (DAT_0202e024._2_2_ < uVar3) {
    uVar3 = (uint)DAT_0202e024._2_2_;
  }
  uVar5 = (ushort)uVar3;
  if (uVar3 < (ushort)DAT_0202e024) {
    uVar5 = (ushort)DAT_0202e024;
  }
  DAT_02000fe4._2_2_ = uVar5 & 0xff;
  return in_lr;
}

