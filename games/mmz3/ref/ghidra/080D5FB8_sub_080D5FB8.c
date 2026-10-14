// sub_080D5FB8 at 0x080D5FB8 (thumb)

undefined4 sub_080D5FB8(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    DAT_0202fa22 = 0x23a;
    DAT_0202f822 = 5;
    sub_0800393C(&DAT_085d79ac,0x10740);
    sub_08003E14(&DAT_085d79b8,(DAT_0202f822 - 4) * 0x20 + 0x200);
    sub_0801749C(param_1);
    sub_08017700(param_1,0x901);
    *(undefined *)(param_1 + 0x25) = 0x1c;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d5fce_caseD_1:
    sub_080177F4(param_1);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + 0x1500;
    *(int *)(param_1 + 0x58) =
         *(int *)(iVar5 + 0x58) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] + -0x3800;
    if ((*(char *)(iVar5 + 0xe) == '\x01') || (*(char *)(iVar5 + 0xe) == '\x04')) {
LAB_080d6270:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
switchD_080d5fce_caseD_b:
    return in_lr;
  case 1:
    goto switchD_080d5fce_caseD_1;
  case 2:
  case 6:
    if (*(char *)(iVar5 + 0xe) == '\x04') {
      sub_0800471C(0x52);
    }
    sub_08017528(param_1);
    sub_08017700(param_1,0x902);
    *(undefined *)(param_1 + 0x24) = 0x28;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined *)(param_1 + 0x12) = 6;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
  case 7:
    sub_080177F4(param_1);
    iVar4 = *(int *)(iVar5 + 0x54);
    *(int *)(param_1 + 0x54) = iVar4 + 0x500;
    iVar3 = *(int *)(iVar5 + 0x58);
    *(int *)(param_1 + 0x58) = iVar3 + -0x4800;
    if (*(char *)(iVar5 + 0xe) == '\x04') {
      if (*(char *)(param_1 + 0x12) == '\0') {
        return in_lr;
      }
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      uVar2 = sub_080FE460(*(undefined *)(param_1 + 0x12),3);
      if ((uVar2 & 1) == 0) {
        return in_lr;
      }
      *(int *)(param_1 + 0x54) = iVar4 + 0x300;
      *(int *)(param_1 + 0x58) = iVar3 + -0x4a00;
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    goto LAB_080d6270;
  case 4:
    sub_0800471C(0x52);
    sub_08017528(param_1);
    sub_08017700(param_1,0x901);
    *(undefined *)(param_1 + 0x24) = 0x58;
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 5:
    sub_080177F4(param_1);
    iVar4 = *(int *)(iVar5 + 0x54);
    *(int *)(param_1 + 0x54) = iVar4 + 0x100;
    iVar3 = *(int *)(iVar5 + 0x58);
    *(int *)(param_1 + 0x58) = iVar3 + -0x5800;
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      uVar2 = sub_080FE460(*(undefined *)(param_1 + 0x12),3);
      if ((uVar2 & 1) != 0) {
        *(int *)(param_1 + 0x54) = iVar4 + -0x100;
        *(int *)(param_1 + 0x58) = iVar3 + -0x5a00;
      }
    }
    if (*(char *)(iVar5 + 0xe) != '\x02') {
      return in_lr;
    }
    goto LAB_080d6270;
  case 8:
    sub_0800471C(0x52);
    sub_08017528(param_1);
    sub_08017700(param_1,0x900);
    *(undefined *)(param_1 + 0x24) = 0x20;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 9:
    sub_080177F4(param_1);
    iVar4 = *(int *)(iVar5 + 0x54);
    *(int *)(param_1 + 0x54) = iVar4 + 0x2900;
    iVar3 = *(int *)(iVar5 + 0x58);
    *(int *)(param_1 + 0x58) = iVar3 + -0x3c00;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    uVar2 = sub_080FE460(*(undefined *)(param_1 + 0x12),3);
    if ((uVar2 & 1) != 0) {
      *(int *)(param_1 + 0x54) = iVar4 + 0x2800;
      *(int *)(param_1 + 0x58) = iVar3 + -0x3d00;
    }
    if (*(char *)(iVar5 + 0xe) != '\x03') {
      return in_lr;
    }
    goto LAB_080d6270;
  case 10:
    sub_0800471C(0x52);
    sub_0801749C(param_1);
    sub_08017700(param_1,0x901);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0xd) = 1;
  default:
    goto switchD_080d5fce_caseD_b;
  }
}

