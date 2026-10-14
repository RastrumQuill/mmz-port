// sub_08126000 at 0x08126000 (thumb)

undefined4 sub_08126000(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  undefined4 local_2c;
  int local_28;
  int local_24;
  
  if (*(uint *)(param_1 + 0xdf0) < 7) {
    local_2c = *(undefined4 *)(param_1 + 0xdc4);
    local_28 = *(int *)(param_1 + 0xdc8) - (*(uint *)(param_1 + 0xdf0) * 0x800 + 0x6400);
    do {
      uVar2 = *(uint *)(param_1 + 0xe00) >> 8 & 0xff;
      uVar4 = *(uint *)(param_1 + 0xe00) & 0xff;
      uVar5 = *(undefined4 *)(param_1 + 0xdf8);
      iVar1 = sub_08107288(&local_2c,(&DAT_088865f4)[uVar4 + uVar2 * 4],param_1);
      *(int *)(param_1 + 0xdf8) = iVar1;
      *(undefined4 *)(iVar1 + 0x28) = uVar5;
      local_28 = local_28 + -0x2000;
      if (uVar4 < 3) {
        *(int *)(param_1 + 0xe00) = *(int *)(param_1 + 0xe00) + 1;
      }
      else {
        uVar3 = DAT_0203587c * 0x41c64e6d + 0x3039;
        local_24 = 0x41c64e6d;
        DAT_0203587c = uVar3;
        uVar4 = sub_08128A9C(uVar3 >> 0x10,5);
        uVar4 = uVar4 & 0xff;
        if (uVar4 == (byte)(&DAT_08886608)[uVar2]) {
          if (uVar4 == 0) {
            DAT_0203587c = local_24 * uVar3 + 0x3039;
            uVar4 = (DAT_0203587c >> 0x10 & 3) + 1;
          }
          else {
            uVar4 = uVar4 & ~(uint)(byte)(&DAT_08886608)[uVar2];
          }
        }
        *(uint *)(param_1 + 0xe00) = uVar4 << 8;
      }
      uVar2 = *(int *)(param_1 + 0xdf0) + 1;
      *(uint *)(param_1 + 0xdf0) = uVar2;
    } while (uVar2 < 7);
  }
  if (*(uint *)(param_1 + 0xdf4) < 7) {
    local_2c = *(undefined4 *)(param_1 + 0xdc4);
    local_28 = *(int *)(param_1 + 0xdc8) - (*(uint *)(param_1 + 0xdf4) * 0x800 + 0x6400);
    do {
      uVar2 = *(uint *)(param_1 + 0xe04) >> 8 & 0xff;
      uVar4 = *(uint *)(param_1 + 0xe04) & 0xff;
      uVar5 = *(undefined4 *)(param_1 + 0xdfc);
      iVar1 = sub_08107288(&local_2c,(byte)(&DAT_088865f4)[uVar4 + uVar2 * 4] | 0x100,param_1);
      *(int *)(param_1 + 0xdfc) = iVar1;
      *(undefined4 *)(iVar1 + 0x28) = uVar5;
      local_28 = local_28 + -0x2000;
      if (uVar4 < 3) {
        *(int *)(param_1 + 0xe04) = *(int *)(param_1 + 0xe04) + 1;
      }
      else {
        uVar3 = DAT_0203587c * 0x41c64e6d + 0x3039;
        local_24 = 0x41c64e6d;
        DAT_0203587c = uVar3;
        uVar4 = sub_08128A9C(uVar3 >> 0x10,5);
        uVar4 = uVar4 & 0xff;
        if (uVar4 == (byte)(&DAT_08886608)[uVar2]) {
          if (uVar4 == 0) {
            DAT_0203587c = local_24 * uVar3 + 0x3039;
            uVar4 = (DAT_0203587c >> 0x10 & 3) + 1;
          }
          else {
            uVar4 = uVar4 & ~(uint)(byte)(&DAT_08886608)[uVar2];
          }
        }
        *(uint *)(param_1 + 0xe04) = uVar4 << 8;
      }
      uVar2 = *(int *)(param_1 + 0xdf4) + 1;
      *(uint *)(param_1 + 0xdf4) = uVar2;
    } while (uVar2 < 7);
  }
  return in_lr;
}

