// sub_08044940 at 0x08044940 (thumb)

undefined4 sub_08044940(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 in_lr;
  undefined4 local_20;
  undefined4 local_1c;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        uVar4 = sub_0804246C(param_1);
        *(undefined *)(param_1 + 0x13) = (&DAT_082ae870)[uVar4 & 0xff];
        *(undefined *)(param_1 + 0xe4) = 0;
        *(undefined *)(param_1 + 0xe5) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_08042BA0(param_1,0);
      sub_08042BA0(param_1,1);
      iVar5 = sub_08042BA0(param_1,2);
      iVar6 = sub_08042BA0(param_1,3);
      cVar2 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar2;
      if (cVar2 == '\0') {
        uVar4 = sub_0804246C(param_1);
        *(undefined *)(param_1 + 0x13) = (&DAT_082ae870)[uVar4 & 0xff];
        pcVar7 = (char *)(param_1 + 0xe4);
        if (*pcVar7 == '\0') {
          if (iVar5 < iVar6) {
            iVar6 = *(int *)(param_1 + 200);
            local_20 = *(undefined4 *)(iVar6 + 0x4c);
            local_1c = *(undefined4 *)(iVar6 + 0x50);
            *(undefined *)(param_1 + 0xe5) = 3;
            iVar5 = sub_0804246C(param_1);
            sub_08076710(&local_20,*(undefined4 *)(&DAT_082ae864 + ((uint)(iVar5 << 0x18) >> 0x16)),
                         *(char *)(iVar6 + 0x12) + -0x80);
            sub_08001EAC(0xd);
          }
          else {
            iVar6 = *(int *)(param_1 + 0xcc);
            local_20 = *(undefined4 *)(iVar6 + 0x4c);
            local_1c = *(undefined4 *)(iVar6 + 0x50);
            *(undefined *)(param_1 + 0xe5) = 2;
            iVar5 = sub_0804246C(param_1);
            sub_08076710(&local_20,*(undefined4 *)(&DAT_082ae864 + ((uint)(iVar5 << 0x18) >> 0x16)),
                         *(char *)(iVar6 + 0x12) + -0x80);
            sub_08001EAC(0xd);
          }
          *pcVar7 = *pcVar7 + '\x01';
        }
        else {
          iVar6 = *(int *)(param_1 + 0xb8 + (*(byte *)(param_1 + 0xe5) + 2) * 4);
          local_20 = *(undefined4 *)(iVar6 + 0x4c);
          local_1c = *(undefined4 *)(iVar6 + 0x50);
          iVar5 = sub_0804246C(param_1);
          sub_08076710(&local_20,*(undefined4 *)(&DAT_082ae864 + ((uint)(iVar5 << 0x18) >> 0x16)),
                       *(char *)(iVar6 + 0x12) + -0x80);
          sub_08001EAC(0xd);
          *(undefined *)(param_1 + 0xd) = 0x15;
          *(undefined *)(param_1 + 0xe) = 0;
        }
      }
      sub_080297C0(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    uVar3 = sub_08001EAC(0x86);
    *(undefined2 *)(param_1 + 0xbc) = uVar3;
    sub_080858C8(*(undefined4 *)(param_1 + 0xd0));
    sub_080858C8(*(undefined4 *)(param_1 + 0xd4));
    sub_080858C8(*(undefined4 *)(param_1 + 0xd8));
    sub_080858C8(*(undefined4 *)(param_1 + 0xdc));
    uVar4 = sub_0804246C(param_1);
    *(undefined *)(param_1 + 0x13) = (&DAT_082ae870)[uVar4 & 0xff];
    *(undefined *)(param_1 + 0xe4) = 0;
    *(undefined *)(param_1 + 0xe5) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar5 = sub_08042BA0(param_1,0);
  iVar6 = sub_08042BA0(param_1,1);
  sub_08042BA0(param_1,2);
  sub_08042BA0(param_1,3);
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\0') {
    uVar4 = sub_0804246C(param_1);
    *(undefined *)(param_1 + 0x13) = (&DAT_082ae870)[uVar4 & 0xff];
    pcVar7 = (char *)(param_1 + 0xe4);
    if (*pcVar7 == '\0') {
      if (iVar5 < iVar6) {
        iVar6 = *(int *)(param_1 + 0xc0);
        local_20 = *(undefined4 *)(iVar6 + 0x4c);
        local_1c = *(undefined4 *)(iVar6 + 0x50);
        *(undefined *)(param_1 + 0xe5) = 1;
        iVar5 = sub_0804246C(param_1);
        sub_08076710(&local_20,*(undefined4 *)(&DAT_082ae864 + ((uint)(iVar5 << 0x18) >> 0x16)),
                     *(char *)(iVar6 + 0x12) + -0x80);
        sub_08001EAC(0xd);
      }
      else {
        iVar6 = *(int *)(param_1 + 0xc4);
        local_20 = *(undefined4 *)(iVar6 + 0x4c);
        local_1c = *(undefined4 *)(iVar6 + 0x50);
        *(undefined *)(param_1 + 0xe5) = 0;
        iVar5 = sub_0804246C(param_1);
        sub_08076710(&local_20,*(undefined4 *)(&DAT_082ae864 + ((uint)(iVar5 << 0x18) >> 0x16)),
                     *(char *)(iVar6 + 0x12) + -0x80);
        sub_08001EAC(0xd);
      }
      *pcVar7 = *pcVar7 + '\x01';
    }
    else {
      iVar6 = *(int *)(param_1 + 0xb8 + (*(byte *)(param_1 + 0xe5) + 2) * 4);
      local_20 = *(undefined4 *)(iVar6 + 0x4c);
      local_1c = *(undefined4 *)(iVar6 + 0x50);
      iVar5 = sub_0804246C(param_1);
      sub_08076710(&local_20,*(undefined4 *)(&DAT_082ae864 + ((uint)(iVar5 << 0x18) >> 0x16)),
                   *(char *)(iVar6 + 0x12) + -0x80);
      sub_08001EAC(0xd);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  sub_080297C0(param_1);
  return in_lr;
}

