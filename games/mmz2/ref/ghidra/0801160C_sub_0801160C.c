// sub_0801160C at 0x0801160C (thumb)

undefined4 sub_0801160C(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  uint local_3c [2];
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  uVar2 = *(int *)(param_1 + 0x5c) << 0x10;
  local_34 = 0x79000;
  local_30 = 0x1b000;
  local_2c = 0x3f000000;
  local_28 = 0xfe008000;
  local_24 = (int)(short)(&DAT_080ef450)[(DAT_0202e038 >> 1) + 0x40 & 0xff] << 3;
  iVar3 = (short)(&DAT_080ef450)[(DAT_0202e038 >> 3) + 0x40 & 0xff] * 8 + 0x800;
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 0) {
    uVar4 = *(uint *)(param_1 + 100);
    (&DAT_02000f94)[uVar2 >> 0x14] = (ushort)uVar4 | 0x4046;
    sub_080EEF68(&DAT_083793a8,(uVar4 & 0x1f00) * 8 + 0x6000000,0x200);
    local_3c[0] = (uint)bVar1;
    sub_080EEF68(local_3c,&DAT_06000800 + ((ushort)(&DAT_02000f94)[uVar2 >> 0x14] & 0x1f00) * 8,
                 0x1000200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  uVar2 = uVar2 >> 0x14;
  *(short *)(&DAT_02000f9c + uVar2) =
       ((short)*(undefined4 *)(param_1 + 0x34) + -0x150) - (short)((uint)local_24 >> 8);
  *(short *)((int)&DAT_02000f9c + uVar2 * 4 + 2) =
       ((short)*(undefined4 *)(param_1 + 0x38) + -0x1e0) - (short)((uint)iVar3 >> 8);
  local_34 = local_24 + local_34;
  local_30 = local_30 + iVar3;
  sub_080099BC(0xe002,0x2401,&local_34,&local_2c);
  return in_lr;
}

