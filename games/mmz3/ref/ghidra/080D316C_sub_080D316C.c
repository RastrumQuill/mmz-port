// sub_080D316C at 0x080D316C (thumb)

undefined4 sub_080D316C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(uint *)(param_1 + 100) = (uint)DAT_0202fd58;
    *(uint *)(param_1 + 0x68) = (uint)DAT_0202f758;
    DAT_0202fd58 = 0x305;
    DAT_0202f758 = 9;
    sub_08017700(param_1,0xa400);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
LAB_080d324e:
      sub_08017700(param_1,0xa408);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
LAB_080d325c:
    sub_080177F4(param_1);
    break;
  case 2:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x73);
    goto joined_r0x080d3276;
  case 3:
    sub_08017700(param_1,0xa400);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 4:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto LAB_080d324e;
    goto LAB_080d325c;
  case 5:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x73);
joined_r0x080d3276:
    if (cVar1 == '\x03') {
LAB_080d333e:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    break;
  case 6:
    sub_08017700(param_1,0xa400);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 7:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0xa405);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffb00;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x58);
    goto LAB_080d333e;
  case 8:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x170;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if ((0 < iVar3) &&
       (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x5bfa)) {
      sub_08017700(param_1);
    }
    sub_080177F4(param_1);
    if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0x5c) + 0x3400) {
      return in_lr;
    }
    DAT_0202fd58 = (ushort)*(undefined4 *)(param_1 + 100);
    DAT_0202f758 = (ushort)*(undefined4 *)(param_1 + 0x68);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    goto LAB_080d333e;
  default:
    break;
  }
  return in_lr;
}

