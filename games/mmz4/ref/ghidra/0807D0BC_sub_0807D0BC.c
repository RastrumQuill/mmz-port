// sub_0807D0BC at 0x0807D0BC (thumb)

undefined4 sub_0807D0BC(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined auStack_40 [4];
  int local_3c;
  int local_38;
  int local_34;
  char *local_30;
  int local_2c;
  int *local_28;
  int *local_24;
  
  local_58 = 0x6400;
  uStack_54 = 0x3c00;
  uStack_50 = 0x1400;
  local_4c = 0xffffec00;
  uStack_48 = 0xffffc400;
  uStack_44 = 0xffff9c00;
  sub_08128B5C(auStack_40,&DAT_08129348,2);
  uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(byte *)(param_1 + 0xf) < 6) {
    local_2c = param_1 + 0x74;
    local_30 = (char *)(param_1 + 0x71);
    local_34 = param_1 + 100;
    switch(*(byte *)(param_1 + 0xf)) {
    case 0:
      sub_08002B10(0x149);
      sub_08001D30(&DAT_08c44dfc,(DAT_0202e1a6 - 0x2c4) * 0x20 + 0x10000);
      sub_08002208(&DAT_08c44e08,(DAT_0202dfa6 - 5) * 0x20 + 0x200);
      sub_0807E7E0(param_1,0xe);
      *(undefined4 *)(param_1 + 0x68) = 0x20;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    case 1:
      if (*(byte *)(param_1 + 0xbc) != 0) {
        sub_0801CFF0(param_1);
      }
      sub_08005784(param_1 + 0x74,
                   *(undefined4 *)
                    (*(char *)(param_1 + 0x71) * 4 +
                    (&DAT_0885a29c)
                    [*(ushort *)(&DAT_0885a2a8 + (uint)*(byte *)(param_1 + 0xbc) * 2)]));
      iVar1 = *(int *)(param_1 + 0x68) + -1;
      *(int *)(param_1 + 0x68) = iVar1;
      break;
    case 2:
      uVar3 = 0;
      local_2c = param_1 + 0x74;
      local_30 = (char *)(param_1 + 0x71);
      local_34 = param_1 + 100;
      local_24 = &local_58;
      do {
        iVar1 = *local_24;
        local_24 = local_24 + 1;
        local_3c = *(int *)(param_1 + 0xb4) + iVar1 * (uVar2 * 2 + -1) + 0x7800;
        local_38 = *(int *)(param_1 + 0xb8) + 0x1000;
        sub_080B6170(param_1,&local_3c,0,uVar3 & 0xff);
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < 6);
      *(undefined4 *)(param_1 + 0x68) = 0xc0;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    case 3:
      if (*(byte *)(param_1 + 0xbc) != 0) {
        sub_0801CFF0(param_1);
      }
      sub_08005784(local_2c,*(undefined4 *)
                             (*local_30 * 4 +
                             (&DAT_0885a29c)
                             [*(ushort *)(&DAT_0885a2a8 + (uint)*(byte *)(param_1 + 0xbc) * 2)]));
      iVar1 = *(int *)(param_1 + 0x68) + -1;
      *(int *)(local_34 + 4) = iVar1;
      break;
    case 4:
      uVar3 = 0;
      local_2c = param_1 + 0x74;
      local_30 = (char *)(param_1 + 0x71);
      local_34 = param_1 + 100;
      local_28 = &local_58;
      do {
        iVar1 = *local_28;
        local_28 = local_28 + 1;
        local_3c = *(int *)(param_1 + 0xb4) + iVar1 * (uVar2 * 2 + -1) + 0x7800;
        local_38 = *(int *)(param_1 + 0xb8) + 0x1000;
        sub_080B6170(param_1,&local_3c,auStack_40[uVar3 & 1],uVar3 & 0xff);
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < 6);
      *(undefined4 *)(param_1 + 0x68) = 0xc0;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    case 5:
      if (*(byte *)(param_1 + 0xbc) != 0) {
        sub_0801CFF0(param_1);
      }
      sub_08005784(local_2c,*(undefined4 *)
                             (*local_30 * 4 +
                             (&DAT_0885a29c)
                             [*(ushort *)(&DAT_0885a2a8 + (uint)*(byte *)(param_1 + 0xbc) * 2)]));
      iVar1 = *(int *)(param_1 + 0x68) + -1;
      *(int *)(local_34 + 4) = iVar1;
      if (iVar1 != 0) {
        return in_lr;
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    if (iVar1 == 0) {
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  return in_lr;
}

