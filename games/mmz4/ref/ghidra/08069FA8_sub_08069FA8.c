// sub_08069FA8 at 0x08069FA8 (thumb)

undefined4 sub_08069FA8(int param_1,undefined4 param_2)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 in_lr;
  undefined auStack_74 [4];
  char acStack_70 [4];
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  
  sub_08128B5C(auStack_74,&DAT_081291f6,4);
  sub_08128B5C(acStack_70,&DAT_081291fa,4);
  local_54 = *(int *)(param_1 + 0xb4);
  local_50 = *(int *)(param_1 + 0xb8);
  local_4c = *(int *)(param_1 + 0xbc);
  local_48 = *(int *)(param_1 + 0xc0);
  local_44 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_34 = (uint)*(byte *)(param_1 + 0xc4);
  local_6c = *(int *)(param_1 + 0x54);
  local_68 = *(int *)(param_1 + 0x58);
  iVar2 = sub_08069E80(param_1,&local_6c,param_2,local_34);
  if (iVar2 != 0) {
    local_34 = local_34 + (local_44 * 2 + -1) * -0x40 & 0xff;
  }
  local_30 = local_34 + 0x40;
  local_64 = local_6c +
             *(short *)((int)&DAT_08128c10 + ((uint)(local_30 * 0x1000000) >> 0x17)) * 0x14;
  iVar2 = local_34 * 2;
  local_60 = local_68 + (short)(&DAT_08128c10)[local_34] * 0x14;
  local_38 = local_34;
  iVar3 = sub_0806A748(param_1,1);
  iVar4 = sub_0806A748(param_1,0);
  iVar7 = local_64 + -0x6800;
  iVar8 = *(int *)(param_1 + 0xd8);
  iVar5 = sub_0806A748(param_1,1);
  iVar6 = sub_0806A748(param_1,0);
  local_2c = local_30;
  local_24 = iVar2;
  local_28 = (int *)(param_1 + 0xd8);
  if ((uint)((((iVar5 - iVar6) + 1) / 2 + -0x1800) * 2) <
      (uint)((iVar8 - iVar7) + -0x1800 + ((iVar3 - iVar4) + 1) / 2)) {
    iVar4 = local_44 * 2 + -1;
    uVar9 = local_38 >> 6 & 3;
    local_64 = sub_0806A748(param_1,auStack_74[uVar9]);
    local_64 = local_64 + acStack_70[uVar9] * -0x1800;
    iVar3 = local_38 + iVar4 * -0x40;
    iVar2 = local_6c - local_64;
    uVar9 = sub_081284F8(0x1900000 - iVar2 * iVar2);
    local_60 = local_68 + (uVar9 & 0xffff) * (int)acStack_70[(uint)(iVar3 * 0x1000000) >> 0x1e];
LAB_0806a204:
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    iVar2 = FUN_081288bc((0x1400 - iVar2) * -0x40);
    local_38 = local_38 + iVar4 * iVar2 & 0xff;
  }
  else {
    iVar2 = sub_0806A748(param_1,3);
    iVar3 = sub_0806A748(param_1,2);
    iVar6 = *(int *)(param_1 + 0xdc) - local_60;
    iVar4 = sub_0806A748(param_1,3);
    iVar5 = sub_0806A748(param_1,2);
    if ((uint)((((iVar4 - iVar5) + 1) / 2 + -0x1800) * 2) <
        (uint)(iVar6 + 0x2800 + ((iVar2 - iVar3) + 1) / 2)) {
      iVar4 = local_44 * 2 + -1;
      uVar9 = local_38 >> 6 & 3;
      local_60 = sub_0806A748(param_1,auStack_74[uVar9]);
      local_60 = local_60 + acStack_70[uVar9] * -0x1800;
      iVar3 = local_38 + iVar4 * -0x40;
      iVar2 = local_68 - local_60;
      uVar9 = sub_081284F8(0x1900000 - iVar2 * iVar2);
      local_64 = local_6c + (uVar9 & 0xffff) * (int)acStack_70[(uint)(iVar3 * 0x1000000) >> 0x1e];
      goto LAB_0806a204;
    }
  }
  uVar9 = local_34;
  iVar2 = *(short *)((int)&DAT_08128c10 + ((uint)(local_2c << 0x18) >> 0x17)) * -0x1400;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  local_5c = local_6c + (iVar2 >> 8);
  iVar2 = *(short *)((int)&DAT_08128c10 + local_24) * -0x1400;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  local_58 = local_68 + (iVar2 >> 8);
  iVar2 = sub_0806A748(param_1,1);
  iVar3 = sub_0806A748(param_1,0);
  iVar6 = local_5c + -0x6800;
  iVar7 = *local_28;
  iVar4 = sub_0806A748(param_1,1);
  iVar5 = sub_0806A748(param_1,0);
  if ((uint)((((iVar4 - iVar5) + 1) / 2 + -0x1800) * 2) <
      (uint)((iVar7 - iVar6) + -0x1800 + ((iVar2 - iVar3) + 1) / 2)) {
    iVar3 = local_44 * 2 + -1;
    uVar10 = (uVar9 + 0x80) * 0x1000000 >> 0x1e;
    local_5c = sub_0806A748(param_1,auStack_74[uVar10]);
    local_5c = local_5c + acStack_70[uVar10] * -0x1800;
    iVar2 = local_6c - local_5c;
    uVar10 = sub_081284F8(0x1900000 - iVar2 * iVar2);
    local_58 = local_68 +
               -(uVar10 & 0xffff) * (int)acStack_70[(iVar3 * 0x40 + uVar9) * 0x1000000 >> 0x1e];
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
  }
  else {
    iVar2 = sub_0806A748(param_1,3);
    iVar3 = sub_0806A748(param_1,2);
    iVar6 = *(int *)(param_1 + 0xdc) - local_58;
    iVar4 = sub_0806A748(param_1,3);
    iVar5 = sub_0806A748(param_1,2);
    if ((uint)(iVar6 + 0x2800 + ((iVar2 - iVar3) + 1) / 2) <=
        (uint)((((iVar4 - iVar5) + 1) / 2 + -0x1800) * 2)) goto LAB_0806a41c;
    iVar3 = local_44 * 2 + -1;
    uVar10 = (uVar9 + 0x80) * 0x1000000 >> 0x1e;
    local_58 = sub_0806A748(param_1,auStack_74[uVar10]);
    local_58 = local_58 + acStack_70[uVar10] * -0x1800;
    iVar2 = local_68 - local_58;
    uVar10 = sub_081284F8(0x1900000 - iVar2 * iVar2);
    local_5c = local_6c +
               -(uVar10 & 0xffff) * (int)acStack_70[(iVar3 * 0x40 + uVar9) * 0x1000000 >> 0x1e];
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
  }
  iVar2 = FUN_081288bc(0x1400 - iVar2,0x50);
  uVar9 = iVar3 * iVar2 + uVar9 & 0xff;
LAB_0806a41c:
  local_40 = local_64 +
             *(short *)((int)&DAT_08128c10 + ((local_38 + 0xc0) * 0x1000000 >> 0x17)) * 0xc;
  local_40 = local_40 +
             ((local_5c +
              *(short *)((int)&DAT_08128c10 + ((uVar9 + 0x40) * 0x1000000 >> 0x17)) * 0xc) -
             local_40) / 2;
  local_3c = local_60 +
             *(short *)((int)&DAT_08128c10 + ((local_38 + 0x80) * 0x1000000 >> 0x17)) * 0xc;
  local_3c = local_3c + ((local_58 + (short)(&DAT_08128c10)[uVar9] * 0xc) - local_3c) / 2;
  uVar1 = sub_0810CD50();
  *(undefined *)(param_1 + 0xc4) = (undefined)local_34;
  *(int *)(param_1 + 0x54) = local_6c;
  *(int *)(param_1 + 0x58) = local_68;
  *(int *)(local_54 + 0x54) = local_40;
  *(int *)(local_54 + 0x58) = local_3c;
  *(int *)(local_50 + 0x54) = local_64;
  *(int *)(local_50 + 0x58) = local_60;
  *(int *)(local_48 + 0x54) = local_5c;
  *(int *)(local_48 + 0x58) = local_58;
  *(int *)(local_4c + 0x54) = local_5c;
  *(int *)(local_4c + 0x58) = local_58;
  *(undefined *)(local_54 + 0xb4) = uVar1;
  *(undefined *)(local_50 + 0xb4) = (undefined)local_38;
  *(char *)(local_48 + 0xb4) = (char)uVar9;
  *(char *)(local_4c + 0xb4) = (char)uVar9;
  sub_0806A77C(param_1,local_34,local_44,0);
  sub_0806AA78(local_54,uVar1,local_44,0);
  sub_0806A844(local_50,local_38,local_44,0);
  sub_0806A844(local_4c,uVar9,local_44,0);
  sub_0806A844(local_48,uVar9,local_44,0);
  return in_lr;
}

