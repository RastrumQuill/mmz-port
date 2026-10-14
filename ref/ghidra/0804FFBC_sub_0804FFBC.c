// sub_0804FFBC at 0x0804FFBC (thumb)

undefined4 sub_0804FFBC(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      if (*(char *)(param_1 + 0x12) != '\0') {
        *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    puVar4 = (undefined4 *)(param_1 + 0x90);
    if ((*(ushort *)puVar4 & 0x1000) == 0) {
      *(undefined *)(param_1 + 0x12) = 0x13;
      local_1c = *(int *)(param_1 + 0x4c);
      local_18 = *(undefined4 *)(param_1 + 0x50);
      sub_0808A7C0(param_1,&local_1c);
      *(bool *)(param_1 + 0x44) = 0 < *(int *)(param_1 + 0xbc);
      if (*(int *)(param_1 + 0xbc) < 1) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      local_1c = *(int *)(param_1 + 0x4c);
      local_18 = *(undefined4 *)(param_1 + 0x50);
      sub_0808827C(1,&local_1c);
      sub_08001EAC(2);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      sub_08015698(1,param_1 + 0x4c);
      if (DAT_02022b2c < 9999) {
        DAT_02022b2c = DAT_02022b2c + 1;
      }
      sub_08015794(param_1,param_1 + 0x4c);
      *puVar4 = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined *)(param_1 + 0xd) = 2;
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x20;
    local_1c = *(int *)(param_1 + 0x4c);
    local_18 = *(int *)(param_1 + 0x50) + -0x1800;
    uVar5 = (uint)(0 < *(int *)(param_1 + 0xbc));
    sub_0808A778(param_1);
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x4c) + (uVar5 * -0x14 + 10) * 0x100;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x50);
    sub_08048A54(param_1);
    uVar2 = *(ushort *)puVar4 & 0x800;
    if ((*(ushort *)puVar4 & 0x800) != 0) {
      uVar2 = uVar5 * -0x1000 + 0x800;
    }
    *(uint *)(param_1 + 0x5c) = uVar2;
    sub_080033F0(param_1 + 0x6c,6);
    *puVar4 = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  uVar2 = (uint)(0 < *(int *)(param_1 + 0xbc));
  uVar5 = 0x20 - *(byte *)(param_1 + 0x12) & 0xff;
  if (uVar2 != 0) {
    uVar5 = uVar5 * -0x1000000 >> 0x18;
  }
  uVar6 = (uVar5 << 0x19) >> 0x18;
  iVar7 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar7;
  iVar3 = *(int *)(param_1 + 0x5c) * 200;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  *(int *)(param_1 + 0x4c) = iVar7;
  iVar3 = (uVar2 * -2 + 1) * 10;
  iVar7 = iVar7 - iVar3 * (short)(&DAT_080c8e24)[uVar6 + 0x40];
  *(int *)(param_1 + 0x4c) = iVar7;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x58);
  iVar3 = *(int *)(param_1 + 0x58) - iVar3 * (short)(&DAT_080c8e24)[uVar6];
  *(int *)(param_1 + 0x50) = iVar3;
  *(char *)(param_1 + 0x1f) = (char)((uVar5 << 0x19) >> 0x18);
  uVar5 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar5;
  if ((uVar5 & 0xff) == 0) {
    local_1c = iVar7 + (uVar2 * -0x28 + 0x14) * 0x100;
    local_18 = iVar3;
    sub_0808827C(1,&local_1c);
    sub_08001EAC(2);
    sub_08015698(1,param_1 + 0x4c);
    if (DAT_02022b2c < 9999) {
      DAT_02022b2c = DAT_02022b2c + 1;
    }
    sub_08015794(param_1,param_1 + 0x4c);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

