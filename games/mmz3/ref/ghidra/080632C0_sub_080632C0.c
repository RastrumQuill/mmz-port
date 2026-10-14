// sub_080632C0 at 0x080632C0 (thumb)

undefined4 sub_080632C0(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar3 = *(int *)(param_1 + 0x28);
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        *(undefined *)(param_1 + 0x12) = 0;
        *(undefined *)(param_1 + 0x13) = 0;
        *(undefined4 *)(param_1 + 100) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar2 != 3) {
        return in_lr;
      }
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      cVar1 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),5);
      if (cVar1 != '\0') {
        return in_lr;
      }
      uVar4 = (uint)*(ushort *)(param_1 + 0xb8) << 0x10;
      iVar3 = *(int *)(param_1 + 100) * (int)(short)(&DAT_080fe64c)[uVar4 >> 0x18];
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      local_28 = *(int *)(param_1 + 0x54) + (iVar3 >> 8);
      iVar3 = *(int *)(param_1 + 100) *
              (int)*(short *)((int)&DAT_080fe64c +
                             ((uint)((((int)uVar4 >> 0x18) + 0x40) * 0x1000000) >> 0x17));
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      local_24 = *(int *)(param_1 + 0x58) - (iVar3 >> 8);
      sub_080B2484(1,&local_28);
      if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
        sub_0800471C(0x2a);
      }
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 0x1000;
      bVar2 = *(char *)(param_1 + 0x13) + 1;
      *(byte *)(param_1 + 0x13) = bVar2;
      if (bVar2 < 5) {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xd601);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar2 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if ((bVar2 & 3) == 0) {
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    local_28 = ((uVar4 * 2 >> 0x11 & 0xf) - 8) * 0x100;
    uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    local_24 = (uVar4 * 2 >> 0x11 & 0x3f) * -0x100;
    uVar4 = (uint)(*(ushort *)(param_1 + 0xb8) >> 8);
    iVar8 = (int)*(short *)((int)&DAT_080fe64c + ((uVar4 + 0x40) * 0x1000000 >> 0x17));
    iVar5 = local_28 * iVar8;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar6 = local_24 * -(int)(short)(&DAT_080fe64c)[uVar4];
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar7 = local_28 * (short)(&DAT_080fe64c)[uVar4];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar8 = iVar8 * local_24;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    local_20 = *(int *)(param_1 + 0x54) + (iVar6 >> 8) + (iVar5 >> 8);
    local_1c = *(int *)(param_1 + 0x58) + (iVar8 >> 8) + (iVar7 >> 8);
    sub_080B2484(2,&local_20);
  }
  if ((*(uint *)(iVar3 + 0xbc) & 0x80) != 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

