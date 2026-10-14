// sub_080D03E8 at 0x080D03E8 (thumb)

undefined8 sub_080D03E8(int param_1,undefined2 param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      sub_08017B2C(param_1);
    }
    else {
      sub_08017BF8(param_1);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0x12) = 8;
LAB_080d04f8:
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    break;
  case 2:
    sub_080175BC(param_1);
    if (param_3 != '\0') {
      sub_080176EC(param_1);
    }
    sub_08017700(param_1,param_2);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 3:
    sub_080177F4(param_1);
    sub_08017BF8(param_1);
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * -4 + 0x120;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * 4 + 0xe0;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') break;
    *(undefined *)(param_1 + 0x12) = 4;
    goto LAB_080d04f8;
  case 4:
    sub_080177F4(param_1);
    sub_08017BF8(param_1);
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * 0x40 + 0x20;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * -0x20 + 0x160;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') break;
    *(undefined4 *)(param_1 + 0x60) = 0xfffff400;
    sub_0800471C(0x9b);
    goto LAB_080d04f8;
  case 5:
    sub_080177F4(param_1);
    sub_08017BF8(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0x20;
    iVar4 = *(int *)(param_1 + 0x60) + -0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4 * 2;
    uVar2 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (0x3000 < uVar2) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined *)(param_1 + 0xf) = 0;
      uVar3 = 1;
      goto LAB_080d054e;
    }
  }
  uVar3 = 0;
LAB_080d054e:
  return CONCAT44(in_lr,uVar3);
}

