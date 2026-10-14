// sub_08019F7C at 0x08019F7C (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_08019F7C(int param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 in_lr;
  
  iVar4 = 0;
  if (0x1df < *(int *)(param_1 + 0x38)) {
    if (*(int *)(param_1 + 0x38) < 0xa01) {
      iVar4 = 3;
      if (*(int *)(param_1 + 0x34) < 0x2d0) {
        iVar4 = 2;
      }
    }
    else {
      iVar4 = 1;
    }
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (((int)(uint)(byte)(&DAT_0202e8b4)[*(ushort *)(&UNK_0883713c + iVar4 * 2) >> 3] >>
         (*(ushort *)(&UNK_0883713c + iVar4 * 2) & 7) & 1U) != 0) {
      *(undefined *)(param_1 + 0xe) = 0x10;
      return in_lr;
    }
    goto LAB_0801a46c;
  case 1:
    break;
  case 2:
    goto switchD_08019fbc_caseD_2;
  case 3:
    goto switchD_08019fbc_caseD_3;
  case 4:
    goto switchD_08019fbc_caseD_4;
  case 5:
    goto switchD_08019fbc_caseD_5;
  case 6:
    goto switchD_08019fbc_caseD_6;
  case 7:
    sub_080025D8(0xc2);
    if ((DAT_02001284 >> 8 == 0xe) && ((DAT_02001284 & 0xff) == 0xb)) {
      uVar3 = sub_08128A24(*(undefined2 *)(param_1 + 0x10),9);
      sub_08001EA4(&DAT_08fa4c34 + (uVar3 & 0xffff) * 0x14,0x4000);
      uVar3 = sub_08128A24(*(undefined2 *)(param_1 + 0x10),9);
      sub_08002208(&DAT_08fa4c40 + (uVar3 & 0xffff) * 0x14,0);
    }
    sVar1 = *(short *)(param_1 + 0x10) + 1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 != 0x24) {
      return in_lr;
    }
    goto LAB_0801a468;
  case 8:
    sub_080025D8(0xc2);
    if ((DAT_02001284 >> 8 == 0xe) && ((DAT_02001284 & 0xff) == 0xb)) {
      uVar3 = sub_08128A24(*(undefined2 *)(param_1 + 0x10),6);
      sub_08001EA4(&DAT_08fa4c34 + (uVar3 & 0xffff) * 0x14,0x4000);
      uVar3 = sub_08128A24(*(undefined2 *)(param_1 + 0x10),6);
      sub_08002208(&DAT_08fa4c40 + (uVar3 & 0xffff) * 0x14,0);
    }
    sVar1 = *(short *)(param_1 + 0x10) + 1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 != 0x18) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe) = 0x11;
    return in_lr;
  default:
    goto switchD_08019fbc_caseD_9;
  case 0x10:
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x11:
    if (DAT_02001284 >> 8 == 0xe) {
      if ((DAT_02001284 & 0xff) == 0xb) {
        sub_08001EA4(&DAT_08fa4d38,0x4000);
        sub_08002208(&DAT_08fa4d44,0);
      }
      if ((DAT_02001284 >> 8 == 0xe) && ((DAT_02001284 & 0xff) == 0xb)) {
        if ((_DAT_0202dad8 & 0x400) == 0) {
          _DAT_0202dad8 = _DAT_0202dad8 | 0x400;
          sub_0800249C(0xc2,0);
        }
        sub_080025D8(0xc2);
        goto LAB_0801a5bc;
      }
    }
    if ((_DAT_0202dad8 & 0x400) != 0) {
      _DAT_0202dad8 = _DAT_0202dad8 ^ 0x400;
      sub_08002624(0xc2);
    }
LAB_0801a5bc:
    uVar2 = *(short *)(param_1 + 0x10) + 1;
    *(ushort *)(param_1 + 0x10) = uVar2;
    if (0xb < uVar2) {
      *(undefined2 *)(param_1 + 0x10) = 0;
    }
    if (DAT_02001284 >> 8 != 0xe) {
      return in_lr;
    }
    if ((DAT_02001284 & 0xff) != 0xb) {
      return in_lr;
    }
    uVar3 = sub_08128A24(*(undefined2 *)(param_1 + 0x10),3);
    sub_08001EA4(&DAT_08fa4c34 + (uVar3 & 0xffff) * 0x14,0x4000);
    uVar3 = sub_08128A24(*(undefined2 *)(param_1 + 0x10),3);
    sub_08002208(&DAT_08fa4c40 + (uVar3 & 0xffff) * 0x14,0);
    return in_lr;
  }
  if (((int)(uint)(byte)(&DAT_0202e8b4)[*(ushort *)(&UNK_0883713c + iVar4 * 2) >> 3] >>
       (*(ushort *)(&UNK_0883713c + iVar4 * 2) & 7) & 1U) == 0) {
    return in_lr;
  }
  sub_0800249C(0xc1,0);
  sub_08001EA4(&DAT_08fa4c34,0x4000);
  sub_08002208(&DAT_08fa4c40,0);
  *(undefined2 *)(param_1 + 0x10) = 0x18;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08019fbc_caseD_2:
  sub_080025D8(0xc1);
  sVar1 = *(short *)(param_1 + 0x10) + -1;
  *(short *)(param_1 + 0x10) = sVar1;
  if (sVar1 != 0) {
    return in_lr;
  }
  sub_08001EA4(&DAT_08fa4c84,0x4000);
  sub_08002208(&DAT_08fa4c90,0);
  sub_08001EA4(&DAT_08fa4c34,0x4000);
  sub_08002208(&DAT_08fa4c40,0);
  sub_08001EA4(&DAT_08fa4c48,0x4000);
  sub_08002208(&DAT_08fa4c54,0);
  *(undefined2 *)(param_1 + 0x10) = 0x3c;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08019fbc_caseD_3:
  sub_080025D8(0xc1);
  sVar1 = *(short *)(param_1 + 0x10);
  if (sVar1 == 0x3b) {
    sub_08001EA4(&DAT_08fa4c98,0x4000);
    puVar5 = &DAT_08df3008;
LAB_0801a1dc:
    sub_08002208(puVar5 + 0x1b1c9c,0);
  }
  else {
    if (sVar1 == 0x37) {
      sub_08001EA4(&DAT_08fa4cac,0x4000);
      puVar5 = &DAT_08df301c;
      goto LAB_0801a1dc;
    }
    if (sVar1 == 0x33) {
      sub_08001EA4(&DAT_08fa4cc0,0x4000);
      puVar5 = &DAT_08df3030;
      goto LAB_0801a1dc;
    }
    if (sVar1 == 0x21) {
      sub_08001EA4(&DAT_08fa4cd4,0x4000);
      puVar5 = &DAT_08df3044;
      goto LAB_0801a1dc;
    }
    if (sVar1 == 0x1d) {
      sub_08001EA4(&DAT_08fa4ce8,0x4000);
      puVar5 = &DAT_08df3058;
      goto LAB_0801a1dc;
    }
    if (sVar1 == 0x19) {
      sub_08001EA4(&DAT_08fa4cfc,0x4000);
      sub_08002208(&DAT_08fa4d08,0);
    }
  }
  sVar1 = *(short *)(param_1 + 0x10) + -1;
  *(short *)(param_1 + 0x10) = sVar1;
  if (sVar1 == 0) {
    sub_08001EA4(&DAT_08fa4d10,0x4000);
    sub_08002208(&DAT_08fa4d1c,0);
    sub_08001EA4(&DAT_08fa4c5c,0x4000);
    sub_08002208(&DAT_08fa4c68,0);
    *(undefined2 *)(param_1 + 0x10) = 0x12;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08019fbc_caseD_4:
    sub_080025D8(0xc1);
    if (*(short *)(param_1 + 0x10) == 0xe) {
      sub_08001EA4(&DAT_08fa4d24,0x4000);
      sub_08002208(&DAT_08fa4d30,0);
    }
    else if (*(short *)(param_1 + 0x10) == 10) {
      sub_08001EA4(&DAT_08fa4d38,0x4000);
      sub_08002208(&DAT_08fa4d44,0);
    }
    sVar1 = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 == 0) {
      sub_08001EA4(&DAT_08fa4c70,0x4000);
      sub_08002208(&DAT_08fa4c7c,0);
      *(undefined2 *)(param_1 + 0x10) = 0xf;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08019fbc_caseD_5:
      sub_080025D8(0xc1);
      sVar1 = *(short *)(param_1 + 0x10) + -1;
      *(short *)(param_1 + 0x10) = sVar1;
      if (sVar1 == 0) {
        sub_08002624(0xc1);
        sub_0800249C(0xc2,0);
        _DAT_0202dad8 = _DAT_0202dad8 | 0x400;
        sub_08001EA4(&DAT_08fa4c34,0x4000);
        sub_08002208(&DAT_08fa4c40,0);
        *(undefined2 *)(param_1 + 0x10) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08019fbc_caseD_6:
        sub_080025D8(0xc2);
        if ((DAT_02001284 >> 8 == 0xe) && ((DAT_02001284 & 0xff) == 0xb)) {
          uVar3 = sub_08128A24(*(undefined2 *)(param_1 + 0x10),0xc);
          sub_08001EA4(&DAT_08fa4c34 + (uVar3 & 0xffff) * 0x14,0x4000);
          uVar3 = sub_08128A24(*(undefined2 *)(param_1 + 0x10),0xc);
          sub_08002208(&DAT_08fa4c40 + (uVar3 & 0xffff) * 0x14,0);
        }
        sVar1 = *(short *)(param_1 + 0x10) + 1;
        *(short *)(param_1 + 0x10) = sVar1;
        if (sVar1 == 0x30) {
LAB_0801a468:
          *(undefined2 *)(param_1 + 0x10) = 0;
LAB_0801a46c:
          *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        }
      }
    }
  }
switchD_08019fbc_caseD_9:
  return in_lr;
}

