// sub_080D0554 at 0x080D0554 (thumb)

undefined8 sub_080D0554(int param_1,undefined2 param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    sub_080175BC(param_1);
    if (param_3 != '\0') {
      sub_080176EC(param_1);
    }
    sub_08017700(param_1,param_2);
    *(undefined2 *)(param_1 + 0x50) = 0x20;
    *(undefined2 *)(param_1 + 0x52) = 0x200;
    sub_08017BF8(param_1);
    uVar4 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x68) = uVar4;
    *(int *)(param_1 + 0x58) = DAT_020302c4 + -0x6000;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 1:
    sub_080177F4(param_1);
    iVar3 = *(int *)(param_1 + 0x58) + 0x1c00;
    *(int *)(param_1 + 0x58) = iVar3;
    if (*(int *)(param_1 + 0x68) < iVar3) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68);
      sub_0800471C(0x9b);
      *(undefined *)(param_1 + 0x12) = 1;
LAB_080d066e:
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    break;
  case 2:
    sub_080177F4(param_1);
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * 0x40 + 0x20;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * -0x20 + 0x160;
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (bVar1 < 5) break;
    *(undefined *)(param_1 + 0x12) = 1;
    goto LAB_080d066e;
  case 3:
    sub_080177F4(param_1);
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * -4 + 0x120;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * 4 + 0xe0;
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (8 < bVar1) goto LAB_080d066e;
    break;
  case 4:
    sub_0801749C(param_1);
    if (param_3 != '\0') {
      sub_080176EC(param_1);
    }
    sub_08017700(param_1,param_2);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      sub_08017BF8(param_1);
    }
    else {
      sub_08017B2C(param_1);
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0xf) = 0;
      uVar4 = 1;
      goto LAB_080d06cc;
    }
  }
  uVar4 = 0;
LAB_080d06cc:
  return CONCAT44(in_lr,uVar4);
}

