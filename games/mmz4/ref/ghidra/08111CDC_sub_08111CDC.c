// sub_08111CDC at 0x08111CDC (thumb)

undefined4 sub_08111CDC(int param_1)

{
  short sVar1;
  ushort uVar2;
  bool bVar3;
  undefined uVar4;
  int iVar5;
  char cVar6;
  undefined4 in_lr;
  
  bVar3 = true;
  switch(*(undefined *)(param_1 + 6)) {
  case 0:
    DAT_0202f61c = 0;
    DAT_02000a00 = DAT_02000a00 & 0xf0f8 | 0x3900;
    DAT_02000a0a = 0x606;
    DAT_02000a18 = 0;
    sub_08001D30(&DAT_08b6c1b8,(DAT_02000a08 & 0xc) << 0xc);
    sub_08002208(&DAT_08b6c1c4,0);
    sub_08002734(0x38,&DAT_08b2c000,0x23,0,0);
    sub_0800249C(0x33,0);
    sub_0800249C(0x79,0);
    *(undefined2 *)(param_1 + 8) = 0;
    DAT_03002ec2 = 0x20;
    DAT_03002ec1 = 0x20;
    DAT_03002ec0 = 0x20;
    goto LAB_08111efa;
  case 1:
    *(undefined2 *)(param_1 + 10) = 0;
    goto LAB_08111efa;
  case 2:
    sub_0810D214(&DAT_0886deb3,1,0x12);
    sub_0810D214(&DAT_0886df8f,6,4);
    sub_0810D214(&DAT_0886a17c,6,*(short *)(param_1 + 8) * 2 + 8);
    if ((DAT_02000766 & 0xc0) != 0) {
      sub_08002B10(1);
      *(ushort *)(param_1 + 8) = *(short *)(param_1 + 8) + 1U & 1;
    }
    if ((DAT_02000764 & 1) == 0) {
      if ((DAT_02000764 & 2) == 0) break;
    }
    else {
      if (*(short *)(param_1 + 8) == 0) {
        sub_08002B10(2);
        if ((((DAT_02000a88 == 'a') || (DAT_02000a8c < 0x97)) || (DAT_02000a90 < 0x97)) ||
           (((DAT_02000a94 < 0xc9 || (DAT_02000a98 < 0x2ef)) ||
            ((0x95f < DAT_02000a9c || (DAT_02000aa0 < 0x15f)))))) {
          *(undefined2 *)(param_1 + 8) = 0;
        }
        else {
          sub_080069F4(0xf8);
          *(undefined2 *)(param_1 + 8) = 1;
        }
        goto LAB_08111efa;
      }
      sub_08002B10(3);
    }
    goto LAB_08111ffe;
  case 3:
    sub_0810D214(&DAT_0886a17c +
                 (ushort)(&DAT_08869ac0)
                         [((int)((uint)*(ushort *)(param_1 + 10) << 0x10) >> 0x14 & 3U) + 0x350],9,8
                );
    sub_0810D214(&DAT_0886de60,1,0x12);
    sVar1 = *(short *)(param_1 + 10);
    *(short *)(param_1 + 10) = sVar1 + 1;
    if (sVar1 < 0x41) break;
    sub_080068CC();
LAB_08111efa:
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    break;
  case 4:
    cVar6 = (char)DAT_020007ac;
    if (DAT_02000790 == '\x02') {
      cVar6 = '\0';
    }
    sub_0810D214(&DAT_0886a17c +
                 (ushort)(&DAT_08869ac0)
                         [((int)((uint)*(ushort *)(param_1 + 10) << 0x10) >> 0x14 & 3U) + 0x350],9,8
                );
    sub_0810D214(&DAT_0886de60,1,0x12);
    if (cVar6 == '\x01') {
      DAT_02000aa8 = 0;
      uVar4 = 5;
LAB_08111f86:
      *(undefined *)(param_1 + 6) = uVar4;
      *(undefined2 *)(param_1 + 10) = 0x3c;
    }
    else if (cVar6 == -1) {
      uVar4 = 6;
      goto LAB_08111f86;
    }
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
    break;
  case 5:
    if (*(short *)(param_1 + 8) != 0) {
      sub_0810D214(&DAT_0886dfc3,6,0xb);
    }
    sub_0810D214(&DAT_0886de76,9,8);
    uVar2 = 0x3cfa;
    goto LAB_08111fe4;
  case 6:
    uVar2 = 0x3d05;
LAB_08111fe4:
    sub_0810D214(&DAT_0886a17c + uVar2,1,0x12);
    iVar5 = *(ushort *)(param_1 + 10) - 1;
    *(short *)(param_1 + 10) = (short)iVar5;
    if (iVar5 * 0x10000 >> 0x10 == -1) {
LAB_08111ffe:
      *(undefined *)(param_1 + 6) = 7;
    }
    break;
  case 7:
    bVar3 = false;
    sub_08002B10(0x95);
    *(undefined *)(param_1 + 6) = 0;
    *(undefined *)(param_1 + 5) = 1;
    DAT_0202f61c = 1;
  }
  if (bVar3) {
    sub_080025D8(0x33);
    sub_080025D8(0x79);
  }
  else {
    sub_08002624(0x33);
    sub_08002624(0x79);
  }
  return in_lr;
}

