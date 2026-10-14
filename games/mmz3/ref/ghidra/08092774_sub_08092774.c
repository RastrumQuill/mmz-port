// sub_08092774 at 0x08092774 (thumb)

undefined4 sub_08092774(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if ((1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) && (*(byte *)(param_1 + 0xe) < 10)) {
    *(undefined *)(param_1 + 0xe) = 10;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xb603);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    iVar4 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + *(int *)(iVar4 + 0x58);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + *(int *)(iVar4 + 0x54);
    *(int *)(param_1 + 0x68) = DAT_020302c4 + 0x1dff;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar4 + 0x54);
    sub_0800471C(0x130);
switchD_080927a4_caseD_1:
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         ((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x54)) * 0x20 >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58)) * 0x20 >> 8);
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar1 + '\x01';
    cVar1 = sub_080FE4D8(cVar1,10);
    if (cVar1 == '\0') {
      iVar4 = 0;
      do {
        iVar2 = sub_080FE390(iVar4,5);
        uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
        local_30 = (((uVar3 * 2 >> 0x11 & 7) - 3) + *(int *)(&DAT_08366494 + iVar2 * 8)) * 0x100;
        uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar3 & 0x7fffffff;
        local_2c = (((uVar3 * 2 >> 0x11 & 7) - 3) + *(int *)(&DAT_08366498 + iVar2 * 8)) * 0x100;
        sub_080C4978(param_1,&local_30,0);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 5);
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    }
    if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xe)) {
LAB_0809297a:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_080927a4_caseD_5:
    return in_lr;
  case 1:
    goto switchD_080927a4_caseD_1;
  case 2:
    sub_08017700(param_1,0xb602);
    *(undefined *)(param_1 + 0x12) = 3;
    *(undefined *)(param_1 + 0x13) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         ((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x54)) * 0x20 >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58)) * 0x20 >> 8);
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x13) == '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    local_28 = *(int *)(param_1 + 0x54) + 0x1200;
    local_24 = *(int *)(param_1 + 0x58) + 0x700;
    sub_080AF904(param_1,&local_28,0);
    sub_0800471C(0x131);
    *(undefined *)(param_1 + 0x13) = 8;
    cVar1 = *(char *)(param_1 + 0x12);
    if (cVar1 == '\0') {
      return in_lr;
    }
    *(char *)(param_1 + 0x12) = cVar1 + -1;
    if (cVar1 != '\x01') {
      return in_lr;
    }
    goto LAB_0809297a;
  case 4:
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         (((*(int *)(param_1 + 0xb4) + *(int *)(*(int *)(param_1 + 0x28) + 0x54)) -
          *(int *)(param_1 + 0x54)) * 0x30 >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         (((*(int *)(param_1 + 0xb8) + *(int *)(*(int *)(param_1 + 0x28) + 0x58)) -
          *(int *)(param_1 + 0x58)) * 0x30 >> 8);
    sub_080177F4(param_1);
    if (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\x04') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  default:
    goto switchD_080927a4_caseD_5;
  case 10:
    sub_08017700(param_1,0xb602);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         (((*(int *)(param_1 + 0xb4) + *(int *)(*(int *)(param_1 + 0x28) + 0x54)) -
          *(int *)(param_1 + 0x54)) * 0x10 >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         (((*(int *)(param_1 + 0xb8) + *(int *)(*(int *)(param_1 + 0x28) + 0x58)) -
          *(int *)(param_1 + 0x58)) * 0x10 >> 8);
    sub_080177F4(param_1);
    goto switchD_080927a4_caseD_5;
  }
}

