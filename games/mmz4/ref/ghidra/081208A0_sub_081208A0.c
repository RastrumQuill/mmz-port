// sub_081208A0 at 0x081208A0 (thumb)

undefined4 sub_081208A0(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 2) == '\0') {
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 6) = 0;
    uVar3 = 0;
    do {
      iVar2 = uVar3 * 0xc;
      *(undefined1 *)(param_1 + 0xdd9 + uVar3) = (&DAT_0203c78e)[iVar2];
      *(undefined4 *)(param_1 + 0xde0 + uVar3 * 4) = (&DAT_0203c784)[uVar3 * 3];
      *(undefined4 *)(uVar3 * 4 + param_1 + 0xdf4) = (&DAT_0203c788)[uVar3 * 3];
      *(undefined1 *)(param_1 + 0xe08 + uVar3) = (&DAT_0203c78c)[iVar2];
      *(undefined1 *)(param_1 + 0xe0d + uVar3) = (&DAT_0203c78d)[iVar2];
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 5);
    DAT_03002ec0 = (undefined)*(undefined2 *)(param_1 + 4);
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  }
  else if (*(char *)(param_1 + 2) != '\x01') {
    return in_lr;
  }
  bVar1 = 0;
  do {
    sub_08122268(param_1 + 0xdcc,bVar1,bVar1);
    bVar1 = bVar1 + 1;
  } while (bVar1 < 5);
  sub_0810D214(&DAT_0886deb3,1,0x12);
  sub_081221CC(param_1);
  sub_080025D8(0x33);
  sub_080025D8(0x79);
  if (*(short *)(param_1 + 4) < 0x20) {
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
  }
  iVar2 = sub_08002BB4(2);
  if (((iVar2 == 0) && (iVar2 = sub_08002AD0(*(undefined2 *)(param_1 + 0xdd0)), iVar2 == 0)) &&
     (0x1f < *(short *)(param_1 + 4))) {
    DAT_03002ec2 = 0x20;
    DAT_03002ec1 = 0x20;
    DAT_03002ec0 = 0x20;
    *(undefined2 *)(param_1 + 6) = 0;
    *(undefined *)(param_1 + 1) = 2;
    *(undefined *)(param_1 + 3) = 0;
    *(undefined *)(param_1 + 2) = 0;
    sub_08120A38(param_1);
  }
  else {
    DAT_03002ec0 = (undefined)*(undefined2 *)(param_1 + 4);
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
  }
  return in_lr;
}

