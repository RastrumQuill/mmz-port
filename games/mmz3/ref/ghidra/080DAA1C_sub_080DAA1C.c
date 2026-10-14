// sub_080DAA1C at 0x080DAA1C (thumb)

undefined4 sub_080DAA1C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_0801749C(param_1);
    sub_080176EC(param_1);
    sub_08017700(param_1,0xc200);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54);
    if (DAT_0202f4a4 != '\0') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x1800;
    }
    uVar4 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836db48,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080177F4(param_1);
    puVar6 = (undefined *)(param_1 + 0x70);
    uVar4 = 0xc200;
    if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar6) == -0x3e00) ||
       ((DAT_0202f4a5 & 0x7f) != 0)) {
      uVar4 = 0xc206;
      if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar6) != -0x3dfa) &&
         ((DAT_0202f4a5 & 0x7f) == 1)) goto LAB_080dab4a;
      if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar6) != -0x3dff) &&
         ((DAT_0202f4a5 & 0x7f) == 2)) {
        sub_08017700(param_1,0xc201);
      }
    }
    else {
LAB_080dab4a:
      sub_08017700(param_1,uVar4);
    }
    uVar7 = DAT_0202f4a5 >> 7 ^ 1;
    if (uVar7 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar7;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar7 << 4);
    if (DAT_0202f4a4 == '\0') {
      if (*(int *)(param_1 + 100) != *(int *)(param_1 + 0x54)) {
        sub_08017700(param_1,0xc20e);
        *(undefined *)(param_1 + 0xd) = 3;
        return in_lr;
      }
    }
    else if (*(int *)(param_1 + 100) == *(int *)(param_1 + 0x54)) {
      sub_08007390(param_1 + 0x74,&DAT_0836dba8);
      sub_08017700(param_1,0xc200);
      *(undefined *)(param_1 + 0x12) = 8;
      *(undefined *)(param_1 + 0xd) = 9;
      return in_lr;
    }
    if ((*(uint *)(param_1 + 0x8c) & 0x20000000) == 0) {
      return in_lr;
    }
    if (DAT_0202f5c8 == '\0') {
      return in_lr;
    }
    if (DAT_03003908 != param_1 + 0x74) {
      return in_lr;
    }
    if ((DAT_02030106 & 0xc) == 4) {
      DAT_02030106 = DAT_02030106 | 8;
      sub_080EDB10(&DAT_02030ea0,0xd0400);
    }
    else if (((DAT_02030106 & 1) == 0) || ((DAT_02030106 & 2) != 0)) {
      if ((DAT_02030105 & 0x60) == 0x20) {
        DAT_02030105 = DAT_02030105 | 0x40;
        sub_080EDB10(&DAT_02030ea0,0xa0400);
      }
      else if ((DAT_02030105 & 0x30) == 0x10) {
        sub_080EDB10(&DAT_02030ea0,0x90400);
      }
      else if ((DAT_02030105 & 0x18) == 8) {
        sub_080EDB10(&DAT_02030ea0,0x80400);
      }
      else if ((DAT_02030105 & 1) == 0) {
        DAT_02030105 = DAT_02030105 | 1;
        sub_080EDB10(&DAT_02030ea0,0x40400);
      }
      else if ((DAT_02030105 & 6) == 2) {
        DAT_02030105 = DAT_02030105 | 4;
        sub_080EDB10(&DAT_02030ea0,0x50400);
      }
      else {
        sub_080EDB10(&DAT_02030ea0,0x20400);
      }
    }
    else {
      sub_080EDB10(&DAT_02030ea0,0xb0400);
    }
    uVar4 = 0xc206;
LAB_080dad5c:
    sub_08017700(param_1,uVar4);
    cVar2 = *(char *)(param_1 + 0xd);
    goto LAB_080daec0;
  case 2:
    sub_080177F4(param_1);
    if ((DAT_0202f4a4 != '\0') && (*(int *)(param_1 + 100) == *(int *)(param_1 + 0x54))) {
      sub_08017700(param_1,0xc200);
      *(undefined *)(param_1 + 0x12) = 8;
      *(undefined *)(param_1 + 0xd) = 4;
      return in_lr;
    }
    if (DAT_02030ea2 != '\0') {
      return in_lr;
    }
    DAT_0202f5c8 = DAT_02030ea2;
    goto LAB_080dadd6;
  case 3:
    sub_080177F4(param_1);
    iVar3 = *(int *)(param_1 + 0x54) + 0x8b;
    *(int *)(param_1 + 0x54) = iVar3;
    if (iVar3 < *(int *)(param_1 + 100)) {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100);
LAB_080dadd6:
    sub_08017700(param_1,0xc200);
    *(undefined *)(param_1 + 0xd) = 1;
    return in_lr;
  case 4:
  case 9:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    break;
  case 5:
  case 10:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    uVar4 = 0xc20e;
    goto LAB_080dad5c;
  case 6:
  case 0xb:
    sub_080177F4(param_1);
    iVar3 = *(int *)(param_1 + 0x54) + -0x8b;
    *(int *)(param_1 + 0x54) = iVar3;
    iVar5 = *(int *)(param_1 + 100) + -0x1800;
    if (iVar5 < iVar3) {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = iVar5;
    sub_08017700(param_1,0xc200);
    break;
  case 7:
  case 0xc:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    break;
  case 8:
  case 0xd:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0xc206);
    cVar2 = *(char *)(param_1 + 0xd);
    if (cVar2 == '\b') {
      *(undefined *)(param_1 + 0xd) = 2;
      return in_lr;
    }
    goto LAB_080daec0;
  case 0xe:
    sub_080177F4(param_1);
  default:
    goto switchD_080daa30_caseD_f;
  }
  *(undefined *)(param_1 + 0x12) = 8;
  cVar2 = *(char *)(param_1 + 0xd);
LAB_080daec0:
  *(char *)(param_1 + 0xd) = cVar2 + '\x01';
switchD_080daa30_caseD_f:
  return in_lr;
}

