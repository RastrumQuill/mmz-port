// sub_080F5714 at 0x080F5714 (thumb)

undefined4 sub_080F5714(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  short sVar4;
  undefined2 uVar5;
  ushort uVar6;
  byte *pbVar7;
  int iVar8;
  undefined uVar9;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x64ac);
  pbVar7 = (byte *)(param_1 + 0xdf8);
  if ((3 < (byte)(*pbVar7 - 1)) && (cVar1 = sub_080F3784(param_1), cVar1 != '\0')) {
    return in_lr;
  }
  uVar3 = (uint)*pbVar7;
  uVar9 = 0;
  if ((DAT_02002134 & 0x40) != 0) {
    bVar2 = sub_080FE390(uVar3 + 5,6);
    *pbVar7 = bVar2;
    sub_0800471C(1);
  }
  if ((DAT_02002134 & 0x80) != 0) {
    bVar2 = sub_080FE390(*pbVar7 + 1,6);
    *pbVar7 = bVar2;
    uVar9 = 5;
    sub_0800471C(1);
  }
  switch(*pbVar7) {
  case 0:
    if ((DAT_02002134 & 0x10) == 0) {
      if ((DAT_02002134 & 0x20) != 0) {
        bVar2 = sub_080FE390(*(byte *)(iVar8 + 0xd8) + 2,3);
        *(byte *)(iVar8 + 0xd8) = bVar2;
        sub_0800471C(1);
      }
    }
    else {
      bVar2 = sub_080FE390(*(byte *)(iVar8 + 0xd8) + 1,3);
      *(byte *)(iVar8 + 0xd8) = bVar2;
      sub_0800471C(1);
    }
    if (*(char *)(iVar8 + 0xd8) == '\0') {
      *(undefined2 *)(iVar8 + 0x21c) = 1;
      *(undefined2 *)(iVar8 + 0x21e) = 0x200;
      *(undefined2 *)(iVar8 + 0x220) = 2;
      *(undefined2 *)(iVar8 + 0x222) = 0x100;
      break;
    }
    if (*(char *)(iVar8 + 0xd8) == '\x01') {
      *(undefined2 *)(iVar8 + 0x21c) = 1;
      *(undefined2 *)(iVar8 + 0x21e) = 0x100;
      *(undefined2 *)(iVar8 + 0x220) = 2;
      *(undefined2 *)(iVar8 + 0x222) = 0x200;
      break;
    }
    *(undefined2 *)(iVar8 + 0x21c) = *(undefined2 *)(iVar8 + 0xd0);
    *(undefined2 *)(iVar8 + 0x21e) = *(undefined2 *)(iVar8 + 0xd2);
    *(undefined2 *)(iVar8 + 0x220) = *(undefined2 *)(iVar8 + 0xd4);
    uVar5 = *(undefined2 *)(iVar8 + 0xd6);
    goto LAB_080f5aba;
  case 1:
    uVar6 = (ushort)*(byte *)(iVar8 + 0xd8);
    if (*(byte *)(iVar8 + 0xd8) == 2) {
      uVar5 = *(undefined2 *)(iVar8 + 0xd4);
      if ((DAT_02002134 & 1) == 0) {
        if (((DAT_02002134 & 2) != 0) || (uVar6 = 0x100, (DAT_02002134 & 0x100) != 0)) {
          *(ushort *)(iVar8 + 0xd4) = uVar6;
          goto LAB_080f58ce;
        }
        if ((DAT_02002134 & 0x200) != 0) {
          *(undefined2 *)(iVar8 + 0xd4) = 0x200;
          sub_0800471C(2);
        }
      }
      else {
        *(undefined2 *)(iVar8 + 0xd4) = 1;
LAB_080f58ce:
        sub_0800471C(2);
      }
      if (*(short *)(iVar8 + 0xd0) == *(short *)(iVar8 + 0xd4)) {
        *(undefined2 *)(iVar8 + 0xd0) = uVar5;
      }
      sVar4 = *(short *)(iVar8 + 0xd4);
      if (*(short *)(iVar8 + 0xd2) == sVar4) {
        *(undefined2 *)(iVar8 + 0xd2) = uVar5;
      }
      goto LAB_080f59f2;
    }
LAB_080f5ac4:
    *(undefined *)(param_1 + 0xdf8) = uVar9;
    break;
  case 2:
    uVar6 = (ushort)*(byte *)(iVar8 + 0xd8);
    if (*(byte *)(iVar8 + 0xd8) != 2) goto LAB_080f5ac4;
    uVar5 = *(undefined2 *)(iVar8 + 0xd0);
    if ((DAT_02002134 & 1) == 0) {
      if (((DAT_02002134 & 2) != 0) || (uVar6 = 0x100, (DAT_02002134 & 0x100) != 0)) {
        *(ushort *)(iVar8 + 0xd0) = uVar6;
        goto LAB_080f593e;
      }
      if ((DAT_02002134 & 0x200) != 0) {
        *(undefined2 *)(iVar8 + 0xd0) = 0x200;
        sub_0800471C(2);
      }
    }
    else {
      *(undefined2 *)(iVar8 + 0xd0) = 1;
LAB_080f593e:
      sub_0800471C(2);
    }
    if (*(short *)(iVar8 + 0xd2) == *(short *)(iVar8 + 0xd0)) {
      *(undefined2 *)(iVar8 + 0xd2) = uVar5;
    }
    sVar4 = *(short *)(iVar8 + 0xd0);
    if (*(short *)(iVar8 + 0xd4) == sVar4) {
      *(undefined2 *)(iVar8 + 0xd4) = uVar5;
    }
    if (*(short *)(iVar8 + 0xd6) == sVar4) {
      *(undefined2 *)(iVar8 + 0xd6) = uVar5;
    }
    *(short *)(iVar8 + 0x21c) = sVar4;
    goto LAB_080f5aa6;
  case 3:
    uVar6 = (ushort)*(byte *)(iVar8 + 0xd8);
    if (*(byte *)(iVar8 + 0xd8) != 2) goto LAB_080f5ac4;
    uVar5 = *(undefined2 *)(iVar8 + 0xd2);
    if ((DAT_02002134 & 1) == 0) {
      if (((DAT_02002134 & 2) != 0) || (uVar6 = 0x100, (DAT_02002134 & 0x100) != 0)) {
        *(ushort *)(iVar8 + 0xd2) = uVar6;
        goto LAB_080f59c2;
      }
      if ((DAT_02002134 & 0x200) != 0) {
        *(undefined2 *)(iVar8 + 0xd2) = 0x200;
        sub_0800471C(2);
      }
    }
    else {
      *(undefined2 *)(iVar8 + 0xd2) = 1;
LAB_080f59c2:
      sub_0800471C(2);
    }
    if (*(short *)(iVar8 + 0xd0) == *(short *)(iVar8 + 0xd2)) {
      *(undefined2 *)(iVar8 + 0xd0) = uVar5;
    }
    sVar4 = *(short *)(iVar8 + 0xd2);
    if (*(short *)(iVar8 + 0xd4) == sVar4) {
      *(undefined2 *)(iVar8 + 0xd4) = uVar5;
    }
LAB_080f59f2:
    if (*(short *)(iVar8 + 0xd6) == sVar4) {
      *(undefined2 *)(iVar8 + 0xd6) = uVar5;
    }
    *(undefined2 *)(iVar8 + 0x21c) = *(undefined2 *)(iVar8 + 0xd0);
    *(undefined2 *)(iVar8 + 0x21e) = *(undefined2 *)(iVar8 + 0xd2);
    *(undefined2 *)(iVar8 + 0x220) = *(undefined2 *)(iVar8 + 0xd4);
    *(undefined2 *)(iVar8 + 0x222) = *(undefined2 *)(iVar8 + 0xd6);
    break;
  case 4:
    uVar6 = (ushort)*(byte *)(iVar8 + 0xd8);
    if (*(byte *)(iVar8 + 0xd8) != 2) goto LAB_080f5ac4;
    uVar5 = *(undefined2 *)(iVar8 + 0xd6);
    if ((DAT_02002134 & 1) == 0) {
      if (((DAT_02002134 & 2) != 0) || (uVar6 = 0x100, (DAT_02002134 & 0x100) != 0)) {
        *(ushort *)(iVar8 + 0xd6) = uVar6;
        goto LAB_080f5a62;
      }
      if ((DAT_02002134 & 0x200) != 0) {
        *(undefined2 *)(iVar8 + 0xd6) = 0x200;
        sub_0800471C(2);
      }
    }
    else {
      *(undefined2 *)(iVar8 + 0xd6) = 1;
LAB_080f5a62:
      sub_0800471C(2);
    }
    if (*(short *)(iVar8 + 0xd0) == *(short *)(iVar8 + 0xd6)) {
      *(undefined2 *)(iVar8 + 0xd0) = uVar5;
    }
    if (*(short *)(iVar8 + 0xd2) == *(short *)(iVar8 + 0xd6)) {
      *(undefined2 *)(iVar8 + 0xd2) = uVar5;
    }
    if (*(short *)(iVar8 + 0xd4) == *(short *)(iVar8 + 0xd6)) {
      *(undefined2 *)(iVar8 + 0xd4) = uVar5;
    }
    *(undefined2 *)(iVar8 + 0x21c) = *(undefined2 *)(iVar8 + 0xd0);
LAB_080f5aa6:
    *(undefined2 *)(iVar8 + 0x21e) = *(undefined2 *)(iVar8 + 0xd2);
    *(undefined2 *)(iVar8 + 0x220) = *(undefined2 *)(iVar8 + 0xd4);
    uVar5 = *(undefined2 *)(iVar8 + 0xd6);
LAB_080f5aba:
    *(undefined2 *)(iVar8 + 0x222) = uVar5;
    break;
  case 5:
    if ((DAT_02002134 & 0x10) == 0) {
      if ((DAT_02002134 & 0x20) != 0) {
        bVar2 = sub_080FE390(*(byte *)(iVar8 + 0xd9) + 2,3);
        *(byte *)(iVar8 + 0xd9) = bVar2;
        sub_0800471C(1);
      }
    }
    else {
      bVar2 = sub_080FE390(*(byte *)(iVar8 + 0xd9) + 1,3);
      *(byte *)(iVar8 + 0xd9) = bVar2;
      sub_0800471C(1);
    }
  }
  sub_080F5CE0(param_1,param_1 + 0xed8);
  if (uVar3 != *(byte *)(param_1 + 0xdf8)) {
    if (*(byte *)(param_1 + 0xdf8) == 5) {
      sub_08004230(*(undefined *)(param_1 + 0xdf9));
      sub_080040A8(0x42,0);
      sub_080041E4(0x42);
      sub_08004230(0x42);
      sub_080040A8(0x41,0);
      uVar9 = 0x41;
    }
    else {
      if (uVar3 != 5) goto LAB_080f5b88;
      sub_08004230(*(undefined *)(param_1 + 0xdf9));
      sub_080040A8(0x43,0);
      sub_080041E4(0x43);
      sub_08004230(0x43);
      sub_080040A8(0x40,0);
      uVar9 = 0x40;
    }
    *(undefined *)(param_1 + 0xdf9) = uVar9;
  }
LAB_080f5b88:
  sub_080041E4(0x44);
  sub_080041E4(*(undefined *)(param_1 + 0xdf9));
  sub_08003B28(param_1 + 0xed8,(DAT_020023c6 & 0x1f00) << 3,0x1000);
  return in_lr;
}

