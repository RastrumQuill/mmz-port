// sub_0805BD88 at 0x0805BD88 (thumb)

undefined4 sub_0805BD88(int param_1)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  sub_080177F4();
  iVar2 = sub_0800A4B4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((*(int *)(param_1 + 0xb4) != iVar2) ||
     (iVar2 = sub_0800A3C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     *(int *)(param_1 + 0xb8) != iVar2)) {
    *(undefined *)(param_1 + 0xd) = 0xd;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  pbVar5 = (byte *)(param_1 + 0xbd);
  if ((*pbVar5 & 1) == 0) {
    uVar3 = ((uint)*pbVar5 << 0x18) >> 0x19;
  }
  else if (*(byte *)(DAT_02030160 + 1) < 5) {
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    uVar3 = sub_080FE4D8(uVar3 * 2 >> 0x11,7);
    uVar3 = uVar3 & 0xff;
  }
  else {
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    uVar3 = uVar3 * 2 >> 0x11 & 7;
  }
  switch(uVar3) {
  case 0:
    *(undefined *)(param_1 + 0xd) = 0xd;
    *(undefined *)(param_1 + 0xf) = 1;
    goto switchD_0805be42_caseD_8;
  case 1:
    uVar1 = 8;
    break;
  case 2:
    uVar1 = 10;
    break;
  case 3:
    if (*(char *)(param_1 + 0xbe) == '\0') {
      uVar1 = 4;
    }
    else {
      uVar1 = 0x16;
    }
    break;
  case 4:
    *(undefined *)(param_1 + 0xd) = 0xd;
    *(undefined *)(param_1 + 0xf) = 0;
    goto switchD_0805be42_caseD_8;
  case 5:
    uVar1 = 0x16;
    break;
  case 6:
    uVar1 = 0x19;
    break;
  case 7:
    uVar1 = 0x13;
    break;
  default:
    goto switchD_0805be42_caseD_8;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
switchD_0805be42_caseD_8:
  bVar4 = *pbVar5 + 1;
  *pbVar5 = bVar4;
  if (*(byte *)(DAT_02030160 + 1) < 5) {
    if (0xd < bVar4) {
      *pbVar5 = 0;
    }
  }
  else if (0xf < bVar4) {
    *pbVar5 = 0;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

