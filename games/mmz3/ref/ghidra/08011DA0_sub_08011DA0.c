// sub_08011DA0 at 0x08011DA0 (thumb)

undefined4 sub_08011DA0(int param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = *(uint *)(param_1 + 0x5c) & 0xffff;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    (&DAT_020023c4)[uVar3 >> 4] = (&DAT_020023c4)[uVar3 >> 4] & 0xfffc | 2;
    DAT_02002400 = 0x3748;
    DAT_02002402 = 0x1000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if (DAT_0202f4a4 != '\x03') {
      if ((char)DAT_0202f4ac == '\0') {
        return in_lr;
      }
      *(undefined2 *)(param_1 + 0x10) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08011dba_caseD_2:
      uVar2 = *(short *)(param_1 + 0x10) + 1;
      *(ushort *)(param_1 + 0x10) = uVar2;
      DAT_02002402 = uVar2 >> 2 & 0x1f | (0x10 - (uVar2 >> 2)) * 0x100;
      if (uVar2 < 0x40) {
        return in_lr;
      }
      DAT_0202f4ac._0_1_ = '\0';
      break;
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0xf0;
    DAT_02002400 = 0;
    (&DAT_020023c4)[uVar3 >> 4] = (&DAT_020023c4)[uVar3 >> 4] & 0xfffc | 3;
    cVar1 = '\x05';
    goto LAB_08011ede;
  case 2:
    goto switchD_08011dba_caseD_2;
  case 3:
    if ((char)DAT_0202f4ac == '\0') {
      return in_lr;
    }
    DAT_02002400 = 0;
    (&DAT_020023c4)[uVar3 >> 4] = (&DAT_020023c4)[uVar3 >> 4] & 0xfffc | 3;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0xf0;
    break;
  default:
    goto switchD_08011dba_caseD_5;
  }
  cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08011ede:
  *(char *)(param_1 + 0xe) = cVar1;
switchD_08011dba_caseD_5:
  return in_lr;
}

