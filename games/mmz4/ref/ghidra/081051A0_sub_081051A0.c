// sub_081051A0 at 0x081051A0 (thumb)

undefined8 sub_081051A0(int param_1,undefined2 param_2,char param_3)

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
    sub_0801CFF0(param_1);
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      sub_0801D330(param_1);
    }
    else {
      sub_0801D3FC(param_1);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0x12) = 8;
LAB_081052b0:
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    break;
  case 2:
    sub_0801CDBC(param_1);
    if (param_3 != '\0') {
      sub_0801CEEC(param_1);
    }
    sub_0801CF00(param_1,param_2);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 3:
    sub_0801CFF0(param_1);
    sub_0801D3FC(param_1);
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * -4 + 0x120;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * 4 + 0xe0;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') break;
    *(undefined *)(param_1 + 0x12) = 4;
    goto LAB_081052b0;
  case 4:
    sub_0801CFF0(param_1);
    sub_0801D3FC(param_1);
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * 0x40 + 0x20;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * -0x20 + 0x160;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') break;
    *(undefined4 *)(param_1 + 0x60) = 0xfffff400;
    sub_08002B10(0x4b);
    goto LAB_081052b0;
  case 5:
    sub_0801CFF0(param_1);
    sub_0801D3FC(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0x20;
    iVar4 = *(int *)(param_1 + 0x60) + -0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4 * 2;
    uVar2 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
    if (0x3000 < uVar2) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined *)(param_1 + 0xf) = 0;
      uVar3 = 1;
      goto LAB_08105306;
    }
  }
  uVar3 = 0;
LAB_08105306:
  return CONCAT44(in_lr,uVar3);
}

