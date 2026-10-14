// sub_080DB6A4 at 0x080DB6A4 (thumb)

undefined4 sub_080DB6A4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 5) {
        return in_lr;
      }
      if (DAT_0202f5d8 != '\0') {
        return in_lr;
      }
      bVar1 = (byte)DAT_020301b4 & 1;
      if ((DAT_020301b4 & 1) != 0) {
        return in_lr;
      }
      *(byte *)(param_1 + 0xd) = bVar1;
      *(byte *)(param_1 + 0xf) = bVar1;
      *(byte *)(param_1 + 0xe) = bVar1;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xc600);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x3c);
    sub_080048A0(param_1 + 0x34,0x80db8c5);
    *(int *)(param_1 + 0x3c) = param_1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 8;
    sub_08007390(param_1 + 0x74,&DAT_0836dc20);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar4 = *(int *)(param_1 + 0x54);
    if (iVar4 < DAT_020302c0 + -0xa800) {
      return in_lr;
    }
    if (DAT_020302c0 + 0xa7ff < iVar4) {
      return in_lr;
    }
    if (*(int *)(param_1 + 0x58) < DAT_020302c4 + -0x8000) {
      return in_lr;
    }
    if (DAT_020302c4 + 0xcfff < *(int *)(param_1 + 0x58)) {
      return in_lr;
    }
    if ((DAT_02030104 & 0x10) != 0) {
      if ((DAT_02002650 & 0x7f) == 10) {
        DAT_020302e4 = iVar4 + -0x8000;
      }
      else {
        DAT_020302e8 = iVar4 + 0x8000;
      }
    }
    *(undefined *)(param_1 + 0x1f) = 0xff;
    *(undefined *)(param_1 + 0x11) = 1;
  }
  else if ((((*(int *)(param_1 + 0x54) < DAT_020302c0 + -0xa800) ||
            (DAT_020302c0 + 0xa7ff < *(int *)(param_1 + 0x54))) ||
           (*(int *)(param_1 + 0x58) < DAT_020302c4 + -0x8000)) ||
          (DAT_020302c4 + 0xcfff < *(int *)(param_1 + 0x58))) {
    if ((DAT_02030104 & 0x10) != 0) {
      if ((DAT_02002650 & 0x7f) == 10) {
        puVar3 = &DAT_020302e4;
        uVar2 = 0;
      }
      else {
        puVar3 = &DAT_020302e8;
        uVar2 = 0x3c0000;
      }
      *puVar3 = uVar2;
    }
    *(undefined *)(param_1 + 0x11) = 0;
    return in_lr;
  }
  if ((DAT_0202f5d8 != '\0') || ((DAT_020301b4 & 1) != 0)) {
    if ((*(uint *)(param_1 + 0x8c) & 0x40000000) == 0) {
      *(undefined *)(param_1 + 0xe) = 5;
    }
    else {
      DAT_030032e0 = DAT_030032e0 | 0x80;
      if ((DAT_02030104 & 0x10) == 0) {
        sub_080EDB10(&DAT_02030ea0,0x700);
      }
      else {
        sub_080EDB10(&DAT_02030ea0,0x1000700);
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    }
  }
  return in_lr;
}

