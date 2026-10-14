// sub_080119C8 at 0x080119C8 (thumb)

undefined4 sub_080119C8(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  undefined4 in_lr;
  uint local_20 [2];
  
  uVar7 = *(int *)(param_1 + 0x5c) << 0x10;
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 0) {
    if ((DAT_0202cac0 & 0xf) == 3) {
      uVar7 = uVar7 >> 0x14;
      uVar5 = *(uint *)(param_1 + 100);
      (&DAT_02000a04)[uVar7] = (ushort)uVar5 | 0x4045;
      *(undefined4 *)(&DAT_02000a0c + uVar7 * 2) = 0;
      sub_081284E4(&DAT_08b4e420,(uVar5 & 0x1f00) * 8 + 0x6000000,0x200);
      sub_081284E4(&DAT_08b4e928,&DAT_06000800 + ((ushort)(&DAT_02000a04)[uVar7] & 0x1f00) * 8,0x200
                  );
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(ushort *)(param_1 + 0x68) = (ushort)bVar1;
      *(undefined *)(param_1 + 0x6a) = 1;
      DAT_02000a40 = 0x3b44;
      DAT_02000a50 = DAT_02000a50 | 0x4000;
      DAT_02000a5d = 0xfb;
      DAT_02000a56 = 0xff;
      DAT_02000a5a = 0xff;
      *(undefined4 *)(param_1 + 0x48) = 0xc0;
      if (*(int *)(param_1 + 0x34) < 0x1860) {
        *(undefined4 *)(param_1 + 0x50) = 0xb8;
        uVar4 = 0x400;
      }
      else {
        *(undefined4 *)(param_1 + 0x50) = 0xa8;
        uVar4 = 0x300;
      }
      *(undefined4 *)(param_1 + 0x70) = uVar4;
      *(undefined2 *)(param_1 + 0x76) = 0;
    }
    else {
      local_20[0] = (uint)bVar1;
      sub_081284E4(local_20,((ushort)(&DAT_02000a04)[uVar7 >> 0x14] & 0x1f00) * 8 + 0x6000000,
                   0x1000400);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((DAT_0202cac0 & 0xf) != 3) {
    return in_lr;
  }
  puVar8 = (ushort *)(param_1 + 0x68);
  if ((*(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x34)) * 0x10 + 0x2000 < (int)(uint)*puVar8) {
    *puVar8 = 0;
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x34);
  }
  *puVar8 = *puVar8 + 0x10;
  iVar6 = *(int *)(param_1 + 0x34);
  if (iVar6 < 0x1860) {
    iVar9 = (iVar6 + -0x960) * 0x10;
    iVar6 = 0x1000;
    if (0x1000 < iVar9) {
      iVar9 = iVar6;
    }
    uVar7 = *(ushort *)(param_1 + 0x10) + 1 & 0xff;
    *(short *)(param_1 + 0x10) = (short)uVar7;
    iVar9 = iVar9 + *(short *)((int)&DAT_08128c10 + ((uVar7 + 0x40) * 0x1000000 >> 0x17)) * 4;
    if (iVar9 < 0x1001) {
      if (iVar9 < 0) {
        if (*(short *)(param_1 + 0x78) != 0) {
          sub_08002B5C(0x7a);
          *(short *)(param_1 + 0x78) = 0;
        }
        iVar6 = 0;
      }
      else {
        iVar6 = iVar9;
        if (*(short *)(param_1 + 0x78) == 0) {
          sub_08002B10(0x7a);
          *(short *)(param_1 + 0x78) = 0x7a;
        }
      }
    }
    uVar2 = (ushort)((uint)iVar6 >> 8);
    DAT_02000a42 = uVar2 & 0x1f | (0x10 - uVar2) * 0x100;
    if (0x800 < iVar6) {
      sVar3 = -0x80;
      goto LAB_08011cac;
    }
  }
  else {
    iVar9 = (iVar6 + -0x1b30) * 0x10;
    iVar6 = 0x1000;
    if (0x1000 < iVar9) {
      iVar9 = iVar6;
    }
    uVar7 = *(ushort *)(param_1 + 0x10) + 1 & 0xff;
    *(short *)(param_1 + 0x10) = (short)uVar7;
    iVar9 = iVar9 + *(short *)((int)&DAT_08128c10 + ((uVar7 + 0x40) * 0x1000000 >> 0x17)) * 4;
    if (iVar9 < 0x1001) {
      if (iVar9 < 0) {
        if (*(short *)(param_1 + 0x78) != 0) {
          sub_08002B5C(0x7a);
          *(short *)(param_1 + 0x78) = 0;
        }
        iVar6 = 0;
      }
      else {
        iVar6 = iVar9;
        if (*(short *)(param_1 + 0x78) == 0) {
          sub_08002B10(0x7a);
          *(short *)(param_1 + 0x78) = 0x7a;
        }
      }
    }
    uVar2 = (ushort)((uint)iVar6 >> 8);
    DAT_02000a42 = uVar2 & 0x1f | (0x10 - uVar2) * 0x100;
    if (0x800 < iVar6) {
      sVar3 = -0x80;
      goto LAB_08011cac;
    }
  }
  sVar3 = (short)(-iVar6 >> 4);
LAB_08011cac:
  *(short *)(param_1 + 0x76) = sVar3;
  if ((DAT_0202e918 & 8) == 0) {
    *(int *)(DAT_0202dbf0 + 0x1bc) =
         *(int *)(DAT_0202dbf0 + 0x1bc) + (int)*(short *)(param_1 + 0x76);
  }
  return in_lr;
}

