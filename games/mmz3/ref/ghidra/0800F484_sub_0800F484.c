// sub_0800F484 at 0x0800F484 (thumb)

undefined4 sub_0800F484(int param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (DAT_0202f4a4 < 3) {
      return in_lr;
    }
    sub_080040A8(0xd0,0);
    DAT_0202f4a5 = 8;
    sub_0800471C(0x121);
    *(undefined2 *)(param_1 + 0x10) = 0;
    break;
  case 1:
    sub_080041E4(0xd0);
    uVar2 = *(short *)(param_1 + 0x10) + 1;
    *(ushort *)(param_1 + 0x10) = uVar2;
    if (0xb < uVar2) {
      *(undefined2 *)(param_1 + 0x10) = 6;
    }
    iVar5 = sub_080FE460(*(undefined2 *)(param_1 + 0x10),3);
    sub_080092B4(0xf0,0x65,&UNK_0833b5d4 + ((uint)(iVar5 << 0x10) >> 0xd));
    iVar5 = sub_080FE460(*(undefined2 *)(param_1 + 0x10),3);
    sub_080092B4(0xeb,0x65,&UNK_0833b5f4 + ((uint)(iVar5 << 0x10) >> 0xd));
    if (DAT_0202f4a5 != 0) {
      return in_lr;
    }
    sub_08004230(0xd0);
    sub_080040A8(0xd5,0);
    cVar1 = '\x06';
    goto LAB_0800f6c8;
  case 2:
    sub_08004230(0xd5);
    if (DAT_0202f4a5 == 0) {
      return in_lr;
    }
    sub_080040A8(0xcf,0);
    *(undefined2 *)(param_1 + 0x10) = 0;
    break;
  case 3:
    sub_080041E4(0xcf);
    sVar3 = sub_080FE4D8(*(undefined2 *)(param_1 + 0x10),9);
    if (sVar3 == 0) {
      sub_0800471C(0x120);
    }
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
    uVar6 = (uint)DAT_0202f4a5;
    uVar4 = sub_080FE460(*(undefined2 *)(param_1 + 0x10),3);
    iVar5 = sub_080FE4D8(uVar4,3);
    sub_080092B4((uVar6 * 3 + 0x10) * 0xf,0x65,&UNK_0833b5bc + ((uint)(iVar5 << 0x10) >> 0xd));
    if (*(ushort *)(param_1 + 0x10) < 0x1a) {
      return in_lr;
    }
    local_1c = *(int *)(param_1 + 0x34) << 8;
    local_18 = *(int *)(param_1 + 0x38) << 8;
    sub_08004230(0xcf);
    DAT_0202f4a4 = DAT_0202f4a5 + 4;
    sub_0801ACF8(0x10,&local_1c);
    *(undefined2 *)(param_1 + 0x10) = 6;
    break;
  case 4:
    sVar3 = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x10) = sVar3;
    if (sVar3 != 0) {
      return in_lr;
    }
    sub_0800471C(0x121);
    sub_080040A8(0xd0,0);
    *(undefined2 *)(param_1 + 0x10) = 0;
    break;
  case 5:
    sub_080041E4(0xd0);
    uVar2 = *(short *)(param_1 + 0x10) + 1;
    *(ushort *)(param_1 + 0x10) = uVar2;
    if (0xb < uVar2) {
      *(undefined2 *)(param_1 + 0x10) = 6;
    }
    uVar6 = (uint)DAT_0202f4a5;
    iVar5 = sub_080FE460(*(undefined2 *)(param_1 + 0x10),3);
    sub_080092B4((uVar6 * 3 + 0x10) * 0xf,0x65,&UNK_0833b5d4 + ((uint)(iVar5 << 0x10) >> 0xd));
    if (DAT_0202f4a5 != 0) {
      return in_lr;
    }
    sub_08004230(0xd0);
    sub_080040A8(0xd5,0);
    DAT_0202f4a4 = 4;
    break;
  case 6:
    sub_080041E4(0xd5);
    cVar1 = '\x02';
    goto LAB_0800f6c8;
  default:
    goto switchD_0800f49a_caseD_7;
  }
  cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0800f6c8:
  *(char *)(param_1 + 0xe) = cVar1;
switchD_0800f49a_caseD_7:
  return in_lr;
}

