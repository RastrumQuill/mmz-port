// sub_0800B62C at 0x0800B62C (thumb)

undefined4 sub_0800B62C(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_lr;
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar4 = *(uint *)(param_1 + 100);
    (&DAT_02000f94)[(uVar2 << 0x10) >> 0x14] = (ushort)uVar4 | 0x8044;
    sub_08002824(&DAT_0837b3c8,(uVar4 & 0x1f00) << 3,0x800);
    sub_08002824(&DAT_0837abc0,
                 ((ushort)(&DAT_02000f94)[(uVar2 << 0x10) >> 0x14] & 0x1f00) * 8 + 0x800,0x800);
    DAT_02000fd0 = 0x3b44;
    DAT_02000fd2 = 0xc0c;
    DAT_02000fe0 = DAT_02000fe0 | 0x4000;
    DAT_02000fec._2_1_ = DAT_02000fec._2_1_ | 0xe;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0x10f000;
    *(undefined *)(param_1 + 0x78) = 0;
    if (DAT_0202e01c == '\x02') {
      DAT_0202d004 = 0x7fffffff;
    }
    else {
      DAT_0202d004 = 0x32800;
    }
    DAT_02000f90 = (ushort)(*(int *)(param_1 + 0x5c) << 8) | DAT_02000f90;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (DAT_0202e01c == '\x01') {
    bVar1 = *(byte *)(param_1 + 0x78);
    if (bVar1 < 0x18) {
      if (DAT_0202d004 < 0x32800) {
        DAT_0202d004 = DAT_0202d004 + 0x100;
      }
      else {
        *(byte *)(param_1 + 0x78) = bVar1 + 1;
      }
    }
    else if (0x28000 < DAT_0202d004) {
      DAT_0202d004 = DAT_0202d004 + -0x100;
    }
  }
  else if (DAT_0202e01c == '\0') {
    if (DAT_0202d004 < 0x32800) {
      DAT_0202d004 = DAT_0202d004 + 0x100;
    }
    *(undefined *)(param_1 + 0x78) = 0;
  }
  else {
    if (DAT_0202d004 < 0x3c800) {
      DAT_0202d004 = DAT_0202d004 + 0x300;
    }
    else {
      DAT_0202d004 = 0x7fffffff;
    }
    *(undefined *)(param_1 + 0x78) = 0;
  }
  iVar7 = DAT_0202d004;
  pbVar6 = (byte *)(param_1 + 0x78);
  *(int *)(param_1 + 0x74) = DAT_0202d004 + -0x600;
  iVar7 = (*(int *)(param_1 + 0x38) - (iVar7 >> 8)) + 8;
  if (iVar7 < -0xb4) {
    iVar7 = -0xb4;
  }
  if (0 < iVar7) {
    iVar7 = 0;
  }
  if ((byte)(*pbVar6 - 1) < 0x17) {
    DAT_02000fec._1_1_ = 0xff;
    DAT_02000fec._2_1_ = DAT_02000fec._2_1_ & 0xfb | 10;
    bVar1 = *pbVar6 >> 1;
    DAT_02000fe4._2_2_ = bVar1 + 0x11 | (0x10 - (ushort)bVar1) * 0x100;
    DAT_02000fe8._2_2_ = 0x34a0;
  }
  else {
    DAT_02000fec._1_1_ = 0xfb;
    DAT_02000fec._2_1_ = DAT_02000fec._2_1_ | 0xe;
    DAT_02000fe4._2_2_ = 0xf0;
  }
  if ((iVar7 < -0x33) && (DAT_0202e01c == '\x01')) {
    if (*pbVar6 != 0) {
      if (*(int *)(param_1 + 0x68) == 0) {
        uVar3 = sub_080B85A0(&DAT_08315cbc,1,0);
        *(undefined4 *)(param_1 + 0x68) = uVar3;
        sub_08002638(&DAT_08433480,(DAT_0202e650 - 0x200) * 0x20 + 0x10000);
        sub_08002AEC(&DAT_0843348c,(DAT_0202e450 - 4) * 0x20 + 0x200);
      }
      if (*(int *)(param_1 + 0x6c) == 0) {
        uVar3 = sub_080B85A0(param_1 + 0x70,0,0);
        *(undefined4 *)(param_1 + 0x6c) = uVar3;
        sub_080032EC(0x78);
      }
    }
    if (0x17 < *pbVar6) {
      DAT_02000fe8._2_2_ = 0x33;
    }
    if (*pbVar6 != 0) goto LAB_0800b984;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x68);
    if (iVar5 != 0) {
      *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfc;
      *(undefined4 *)(iVar5 + 0xc) = 3;
      *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(iVar5 + 9)] + 0xc);
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    iVar5 = *(int *)(param_1 + 0x6c);
    if (iVar5 != 0) {
      *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfc;
      *(undefined4 *)(iVar5 + 0xc) = 3;
      *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(iVar5 + 9)] + 0xc);
      *(undefined4 *)(param_1 + 0x6c) = 0;
      sub_08003338(0x78);
    }
  }
  DAT_02000fe8._2_2_ = -(short)iVar7 & 0xff;
LAB_0800b984:
  uVar2 = (uVar2 & 0xffff) >> 4;
  *(undefined2 *)(&DAT_02000f9c + uVar2) = 0;
  *(short *)((int)&DAT_02000f9c + uVar2 * 4 + 2) = (short)iVar7;
  return in_lr;
}

