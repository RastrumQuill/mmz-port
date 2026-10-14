// sub_080DAED4 at 0x080DAED4 (thumb)

undefined4 sub_080DAED4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    if ((DAT_02030106 & 0x14) == 4) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_0801749C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836db78,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    sub_08017700(param_1,0xc200);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if ((*(uint *)(param_1 + 0x8c) & 0x20000000) == 0) {
      return in_lr;
    }
    if (DAT_0202f5c8 == '\0') {
      return in_lr;
    }
    if (DAT_03003908 != param_1 + 0x74) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    if ((DAT_02030105 & 2) == 0) {
      DAT_02030105 = DAT_02030105 | 2;
      sub_080EA1B8(0x1307);
      sub_08021E3C(&DAT_020301b0,&DAT_08358af8,param_1);
      *(undefined *)(param_1 + 0xd) = 3;
      return in_lr;
    }
    sub_080EDB10(&DAT_02030ea0,0x30400);
    break;
  case 2:
    sub_080177F4(param_1);
    if (DAT_02030ea2 != '\0') {
      return in_lr;
    }
    DAT_0202f5c8 = DAT_02030ea2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(undefined *)(param_1 + 0xd) = 1;
    return in_lr;
  case 3:
    sub_080177F4(param_1);
    if (DAT_02030c1a != 0) {
      return in_lr;
    }
    *(byte *)(DAT_0202f5c0 + 0xca) = *(byte *)(DAT_0202f5c0 + 0xca) | 4;
    *(byte *)(DAT_0202f5c0 + 0xca) = *(byte *)(DAT_0202f5c0 + 0xca) | 8;
    DAT_02037316 = DAT_02037316 | 0xc;
    sub_08017700(param_1,0xc201);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 4:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0xc202);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    break;
  case 5:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0xc201);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 6:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0xc200);
    break;
  case 7:
    sub_080177F4(param_1);
    if ((DAT_020301b2 & 1) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      *(undefined *)(param_1 + 0xd) = 1;
    }
  default:
    goto switchD_080daee8_caseD_8;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080daee8_caseD_8:
  return in_lr;
}

