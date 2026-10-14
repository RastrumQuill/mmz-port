// sub_080C75D4 at 0x080C75D4 (thumb)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 sub_080C75D4(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  byte abStack_74 [4];
  undefined auStack_70 [16];
  short asStack_60 [16];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int *local_24;
  undefined4 uStack_4;
  
  sub_08128B5C(abStack_74,&DAT_08129a90,4);
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xb4);
  uVar5 = (uint)bVar1;
  local_30 = *(byte *)(param_1 + 10) >> 4 & 1;
  sub_0801CFF0(param_1);
  local_40 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  local_3c = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar10 = (local_30 * 2 + -1) * 0x400;
  iVar9 = (int)*(short *)((int)&DAT_08128c10 + ((uVar5 + 0x40) * 0x1000000 >> 0x17));
  iVar6 = iVar9 * 0xa00;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar7 = iVar10 * (short)(&DAT_08128c10)[uVar5];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  local_38 = ((iVar6 >> 8) - (iVar7 >> 8)) + local_40;
  iVar6 = (short)(&DAT_08128c10)[uVar5] * 0xa00;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar10 = iVar10 * iVar9;
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  local_34 = (iVar6 >> 8) + (iVar10 >> 8) + local_3c;
  sVar3 = sub_08007C7C(local_38);
  if (sVar3 != 0) {
    sub_08128B5C(auStack_70,&DAT_08129a94,0x10);
    if ((local_34 < *(int *)(iVar4 + 0xd4) + 0x5fff) && (sVar3 = sub_08007C7C(local_38), sVar3 != 0)
       ) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080C795C(param_1);
      return in_lr;
    }
    iVar6 = local_30 * 2;
    uVar5 = abStack_74[iVar6] + uVar5 & 0xff;
    iVar4 = (iVar6 + -1) * 0x400;
    iVar6 = iVar6 + (uint)(bVar1 >> 6) * 4;
    local_40 = sub_080C79A4(&local_40,auStack_70[iVar6]);
    local_3c = sub_080C79A4(&local_40,auStack_70[iVar6 + 1]);
    iVar6 = (int)(short)(&DAT_08128c10)[uVar5];
    iVar10 = iVar4 * iVar6;
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar9 = (int)*(short *)((int)&DAT_08128c10 + ((uVar5 + 0x40) * 0x1000000 >> 0x17));
    iVar7 = iVar9 * -0xa00;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    local_40 = local_40 + ((iVar10 >> 8) - (iVar7 >> 8));
    iVar10 = iVar6 * -0xa00;
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar4 = iVar4 * iVar9;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    local_3c = local_3c - ((iVar10 >> 8) + (iVar4 >> 8));
    iVar9 = iVar9 * *(int *)(param_1 + 0xb8);
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar9 >> 8;
    iVar6 = iVar6 * *(int *)(param_1 + 0xb8);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar6 >> 8;
  }
  local_2c = local_30 * 2;
  local_28 = (local_2c + -1) * 0x400;
  iVar4 = (local_2c + -1) * 0x401;
  iVar6 = iVar4 * (short)(&DAT_08128c10)[uVar5];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  local_38 = local_40 - (iVar6 >> 8);
  local_24 = &local_40;
  iVar4 = iVar4 * *(short *)((int)&DAT_08128c10 + ((uVar5 + 0x40) * 0x1000000 >> 0x17));
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  local_34 = local_3c + (iVar4 >> 8);
  sVar3 = sub_08007C7C(local_38);
  uStack_4 = in_lr;
  if (sVar3 == 0) {
    sub_08128B5C(asStack_60,&DAT_08129aa4,0x20);
    sub_08128B5C(auStack_70,&DAT_08129ac4,4);
    iVar4 = local_28;
    uVar8 = uVar5 >> 6;
    uVar5 = uVar5 - abStack_74[local_2c] & 0xff;
    if (asStack_60[uVar8 * 4 + local_30 * 2] == 0xff) {
      local_40 = sub_080C79A4(&local_38,auStack_70[uVar8]);
      local_24[1] = local_34;
      iVar6 = uVar5 * 2;
      iVar4 = iVar4 * (short)(&DAT_08128c10)[uVar5];
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      local_40 = local_40 + (iVar4 >> 8);
    }
    else {
      local_40 = local_38;
      local_3c = sub_080C79A4(&local_38,auStack_70[uVar8]);
      local_24[1] = local_3c;
      iVar4 = iVar4 * *(short *)((int)&DAT_08128c10 + ((uVar5 + 0x40) * 0x1000000 >> 0x17));
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      local_3c = local_3c - (iVar4 >> 8);
      iVar6 = uVar5 << 1;
    }
    iVar4 = (int)*(short *)((int)&DAT_08128c10 + ((uVar5 + 0x40) * 0x1000000 >> 0x17)) *
            *(int *)(param_1 + 0xb8);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar4 >> 8;
    iVar4 = (int)*(short *)((int)&DAT_08128c10 + iVar6) * *(int *)(param_1 + 0xb8);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar4 >> 8;
  }
  *(int *)(param_1 + 0x54) = local_40;
  *(int *)(param_1 + 0x58) = local_3c;
  cVar2 = (char)uVar5;
  *(char *)(param_1 + 0xb4) = cVar2;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    cVar2 = -0x80 - cVar2;
  }
  *(char *)(param_1 + 0x24) = cVar2 + -0x80;
  return uStack_4;
}

