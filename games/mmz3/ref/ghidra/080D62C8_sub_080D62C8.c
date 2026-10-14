// sub_080D62C8 at 0x080D62C8 (thumb)

undefined4 sub_080D62C8(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    DAT_0202fa22 = 0x23a;
    DAT_0202f822 = 5;
    sub_0801749C(param_1);
    sub_08017700(param_1,0x900);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d62de_caseD_1:
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + -0x1300;
    *(int *)(param_1 + 0x58) =
         *(int *)(iVar4 + 0x58) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] + -0x3a00;
    if ((*(char *)(iVar4 + 0xe) == '\x01') || (*(char *)(iVar4 + 0xe) == '\x04')) {
      cVar1 = *(char *)(param_1 + 0xd) + '\x01';
LAB_080d65a8:
      *(char *)(param_1 + 0xd) = cVar1;
    }
switchD_080d62de_caseD_b:
    return in_lr;
  case 1:
    goto switchD_080d62de_caseD_1;
  case 2:
  case 6:
    sub_08017528(param_1);
    sub_08017700(param_1,0x900);
    *(undefined *)(param_1 + 0x24) = 0x30;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined *)(param_1 + 0x12) = 6;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
  case 7:
    sub_080177F4(param_1);
    iVar5 = *(int *)(iVar4 + 0x54);
    *(int *)(param_1 + 0x54) = iVar5 + -0x2300;
    iVar2 = *(int *)(iVar4 + 0x58);
    *(int *)(param_1 + 0x58) = iVar2 + -0x4a00;
    if (*(char *)(iVar4 + 0xe) == '\x04') {
      if (*(char *)(param_1 + 0x12) == '\0') {
        return in_lr;
      }
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      uVar3 = sub_080FE460(*(undefined *)(param_1 + 0x12),3);
      if ((uVar3 & 1) == 0) {
        return in_lr;
      }
      *(int *)(param_1 + 0x54) = iVar5 + -0x2100;
      *(int *)(param_1 + 0x58) = iVar2 + -0x4c00;
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    goto LAB_080d65a8;
  case 4:
    sub_08017528(param_1);
    sub_08017700(param_1,0x901);
    *(undefined *)(param_1 + 0x24) = 0x58;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    *(undefined *)(param_1 + 0x25) = 0x1d;
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 5:
    sub_080177F4(param_1);
    iVar5 = *(int *)(iVar4 + 0x54);
    *(int *)(param_1 + 0x54) = iVar5 + -0x700;
    iVar2 = *(int *)(iVar4 + 0x58);
    *(int *)(param_1 + 0x58) = iVar2 + -0x5a00;
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      uVar3 = sub_080FE460(*(undefined *)(param_1 + 0x12),3);
      if ((uVar3 & 1) != 0) {
        *(int *)(param_1 + 0x54) = iVar5 + -0x500;
        *(int *)(param_1 + 0x58) = iVar2 + -0x5c00;
      }
    }
    if (*(char *)(iVar4 + 0xe) != '\x02') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    goto LAB_080d65a8;
  case 8:
    sub_08017528(param_1);
    sub_08017700(param_1,0x900);
    *(undefined *)(param_1 + 0x24) = 0x20;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 9:
    sub_080177F4(param_1);
    iVar5 = *(int *)(iVar4 + 0x54);
    *(int *)(param_1 + 0x54) = iVar5 + -0x1b00;
    iVar2 = *(int *)(iVar4 + 0x58);
    *(int *)(param_1 + 0x58) = iVar2 + -0x4400;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    uVar3 = sub_080FE460(*(undefined *)(param_1 + 0x12),3);
    if ((uVar3 & 1) != 0) {
      *(int *)(param_1 + 0x54) = iVar5 + -0x1a00;
      *(int *)(param_1 + 0x58) = iVar2 + -0x4500;
    }
    if (*(char *)(iVar4 + 0xe) != '\x03') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    goto LAB_080d65a8;
  case 10:
    sub_0801749C(param_1);
    sub_08017700(param_1,0x900);
    sub_080177F4(param_1);
    cVar1 = '\0';
    goto LAB_080d65a8;
  default:
    goto switchD_080d62de_caseD_b;
  }
}

