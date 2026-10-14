// sub_08072CE8 at 0x08072CE8 (thumb)

undefined4 sub_08072CE8(int param_1)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  byte local_48 [8];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int *local_24;
  
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    sub_08002B10(300);
    sub_080735E0(param_1,0x17);
    uVar1 = sub_08073A2C(param_1);
    *(undefined *)(param_1 + 0x12) = uVar1;
    *(undefined4 *)(param_1 + 100) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 1:
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,
                 *(int *)(*(char *)(param_1 + 0x71) * 4 +
                         (&DAT_088595cc)
                         [*(ushort *)(&DAT_088596c8 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
                 (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                         *(int *)(&DAT_088596c0 +
                                                 (uint)*(byte *)(param_1 + 0xb9) * 4)) +
                                (int)*(char *)(param_1 + 0x71)) * 0x18);
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x5c) = 0;
    uVar4 = 0;
    do {
      if (uVar4 != *(byte *)(param_1 + 0x12)) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 1 << (uVar4 & 0xff);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 8);
    *(undefined4 *)(param_1 + 100) = 0x70;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 3:
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,
                 *(int *)(*(char *)(param_1 + 0x71) * 4 +
                         (&DAT_088595cc)
                         [*(ushort *)(&DAT_088596c8 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
                 (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                         *(int *)(&DAT_088596c0 +
                                                 (uint)*(byte *)(param_1 + 0xb9) * 4)) +
                                (int)*(char *)(param_1 + 0x71)) * 0x18);
    if ((*(uint *)(param_1 + 100) & 0xf) == 0) {
      uVar4 = 0;
      local_28 = (int *)(param_1 + 0xcc);
      local_24 = (int *)(param_1 + 0xd0);
      iVar3 = *(int *)(param_1 + 0x5c);
      do {
        local_48[uVar4] = (byte)(iVar3 >> (uVar4 & 0xff)) & 1;
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 8);
      uVar4 = sub_08073D4C(local_48,8);
      *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & ~(1 << (uVar4 & 0xff));
      local_30 = *(int *)(param_1 + 0x54);
      local_2c = *(int *)(param_1 + 0x58) + -0x1400;
      iVar3 = 1;
      if (local_40 < local_30) {
        iVar3 = -1;
      }
      uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      local_38 = iVar3 * ((uVar2 * 2 >> 0x11 & 7) + 8) * 0x100 + local_30;
      iVar3 = 1;
      if (local_3c < local_2c) {
        iVar3 = -1;
      }
      uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar2 & 0x7fffffff;
      local_34 = iVar3 * (uVar2 * 2 >> 0x11 & 0xf) * 0x100 + local_2c;
      iVar3 = (uVar4 & 0xff) * 8;
      local_40 = *local_28 + *(int *)(&DAT_08859728 + iVar3) + 0x6800;
      local_3c = *local_24 + *(int *)(&DAT_0885972c + iVar3) + 0x4000;
      sub_080CB560(param_1,&local_38,&local_40);
    }
    break;
  case 4:
    *(undefined4 *)(param_1 + 100) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 5:
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,
                 *(int *)(*(char *)(param_1 + 0x71) * 4 +
                         (&DAT_088595cc)
                         [*(ushort *)(&DAT_088596c8 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
                 (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                         *(int *)(&DAT_088596c0 +
                                                 (uint)*(byte *)(param_1 + 0xb9) * 4)) +
                                (int)*(char *)(param_1 + 0x71)) * 0x18);
    iVar3 = *(int *)(param_1 + 100) + -1;
    *(int *)(param_1 + 100) = iVar3;
    if (iVar3 == 0) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
    }
  default:
    goto switchD_08072d1c_caseD_6;
  }
  iVar3 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar3;
  if (iVar3 == 0) {
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
switchD_08072d1c_caseD_6:
  return in_lr;
}

