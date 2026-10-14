// sub_080EA064 at 0x080EA064 (thumb)

undefined4 sub_080EA064(int param_1)

{
  char cVar1;
  undefined uVar2;
  short sVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    DAT_0202e8c4 = DAT_0202e8c4 & 0xbf;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(byte *)(param_1 + 0xb8) = 0x14;
    sub_08001EA4(&DAT_08c44190,(DAT_0202e068 - 0x1e0) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c4419c,(DAT_0202de68 - 10) * 0x20 + 0x200);
    sub_0801CF00(param_1,(uint)*(byte *)(param_1 + 0xb8) << 8 | 2);
    sub_0801CFF0(param_1);
    sub_080E8FA4(0x80ea359);
    *(int *)(param_1 + 0xbc) = *(int *)(*(int *)(param_1 + 0xb4) + 0x54) + -0x3800;
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x58);
    DAT_030032e1 = DAT_030032e1 | 2;
    uVar2 = 0x40;
    break;
  case 1:
    DAT_030032e1 = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 2:
    piVar5 = (int *)(param_1 + 0xb4);
    *(undefined *)(*piVar5 + 0x4c) = 0;
    *(byte *)(*piVar5 + 0x4a) = *(byte *)(*piVar5 + 0x4a) & 0xef;
    *(byte *)(*piVar5 + 10) = *(byte *)(*piVar5 + 10) & 0xef;
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x12) == '\x1c') {
      sub_08002B10(0x4c);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    uVar2 = 0x38;
    break;
  case 3:
    sub_0801CFF0(param_1);
    *(int *)(*(int *)(param_1 + 0xb4) + 0x54) = *(int *)(*(int *)(param_1 + 0xb4) + 0x54) + -0x100;
    if (*(char *)(param_1 + 0x12) == '\x1c') {
      DAT_0202ea40 = param_1 + 0xbc;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_08002B10(0x4d);
    sub_0801CF00(param_1,(uint)*(byte *)(param_1 + 0xb8) << 8 | 3);
    sub_0801CFF0(param_1);
    uVar2 = 0x20;
    break;
  case 4:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      piVar5 = (int *)(param_1 + 0xb4);
      sVar3 = sub_08007D28(*(undefined4 *)(*piVar5 + 0x54),*(undefined4 *)(*piVar5 + 0x58));
      if (sVar3 != 0) {
        uVar4 = sub_0800864C(*(undefined4 *)(*piVar5 + 0x54),*(undefined4 *)(*piVar5 + 0x58));
        *(undefined4 *)(*piVar5 + 0x58) = uVar4;
      }
      DAT_0202e924 = DAT_0202e924 & 0xfffe;
      DAT_0202ea40 = *piVar5 + 0x54;
      *(undefined *)(*piVar5 + 0x143) = 0;
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_080ea078_caseD_5;
  }
  *(undefined *)(param_1 + 0x12) = uVar2;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080ea078_caseD_5:
  return in_lr;
}

