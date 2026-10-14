// sub_0806A954 at 0x0806A954 (thumb)

undefined4 sub_0806A954(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0806a968_caseD_1:
    if ((*(uint *)(*(int *)(param_1 + 0x28) + 0xd4) & 1) != 0) {
LAB_0806ab2c:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_0806a968_caseD_6:
    return in_lr;
  case 1:
    goto switchD_0806a968_caseD_1;
  case 2:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    iVar6 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x58) = *(int *)(iVar6 + 0x58) + -0x1800;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + *(int *)(iVar6 + 0x54);
    sub_08017700(param_1,0x900);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    iVar6 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x400);
    *(int *)(param_1 + 0x68) = iVar6;
    *(int *)(param_1 + 0x58) = iVar6 + -0x1800;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x5c) = 0x2000;
    if (*(char *)(param_1 + 0xf) == '\x01') {
      *(undefined *)(param_1 + 0x12) = 0x80;
      *(undefined *)(param_1 + 0x13) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      cVar2 = *(char *)(param_1 + 0xe) + '\x02';
    }
    else {
      *(undefined *)(param_1 + 0x12) = 0x3c;
      uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar5 & 0x7fffffff;
      uVar3 = sub_080FE4D8(uVar5 * 2 >> 0x11,0x14);
      *(undefined *)(param_1 + 0x13) = uVar3;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(undefined *)(param_1 + 0x13) = 0;
      cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    }
    *(char *)(param_1 + 0xe) = cVar2;
  case 3:
    sub_080177F4(param_1);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    cVar2 = *(char *)(param_1 + 0x12);
    cVar4 = sub_080FE4D8(*(undefined *)(param_1 + 0x13),cVar2);
    if (cVar4 == '\0') {
      *(char *)(param_1 + 0x12) = cVar2 + -10;
      uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar5 & 0x7fffffff;
      iVar6 = sub_080FE4D8(uVar5 * 2 >> 0x11,6);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar6 + -3) * 0x100;
    }
    if (*(char *)(param_1 + 0x12) != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(undefined *)(param_1 + 0x13) = 0;
    goto LAB_0806ab2c;
  case 4:
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 & 1) == 0) {
      iVar7 = *(int *)(param_1 + 0x28);
      iVar6 = *(int *)(param_1 + 0xb4) + *(int *)(iVar7 + 0x54) +
              (((uint)bVar1 << 0x18) >> 0x1b) * -0x100;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x28);
      iVar6 = *(int *)(param_1 + 0xb4) + *(int *)(iVar7 + 0x54) + (uint)(bVar1 >> 3) * 0x100;
    }
    *(int *)(param_1 + 0x54) = iVar6;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         (((*(int *)(param_1 + 0xb8) + *(int *)(iVar7 + 0x58)) - *(int *)(param_1 + 0x58)) * 8 >> 8)
    ;
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
      return in_lr;
    }
    goto LAB_0806ab2c;
  case 5:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  default:
    goto switchD_0806a968_caseD_6;
  }
}

