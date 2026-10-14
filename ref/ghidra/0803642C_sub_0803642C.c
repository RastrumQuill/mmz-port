// sub_0803642C at 0x0803642C (thumb)

undefined4 sub_0803642C(int param_1)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,4);
    *(undefined *)(*(int *)(param_1 + 0x24) + 0xe) = 1;
    *(undefined *)(*(int *)(param_1 + 0x24) + 0x11) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08001EAC(0x48);
    sub_0801412C(4,param_1 + 0x4c);
  }
  sub_080297C0(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 0xf) == 0) {
    sub_080943B8(param_1 + 0x4c,1,200,(uint)*(byte *)(param_1 + 0x12) * -4 + -0x40);
    sub_080943B8(param_1 + 0x4c,1,0xffffff38,(uint)*(byte *)(param_1 + 0x12) * -4 + -0x40);
  }
  if (*(char *)(param_1 + 0x12) != '0') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0xc9) == '\0') {
    if (*(byte *)(param_1 + 0xca) < 2) {
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar3 & 0x7fffffff;
      if ((uVar3 * 2 >> 0x11 & 7) != 0) {
        uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
        DAT_02022890 = uVar3 & 0x7fffffff;
        if ((uVar3 * 2 >> 0x11 & 1) != 0) {
          *(undefined *)(param_1 + 0xd) = 7;
          *(undefined *)(param_1 + 0xe) = 1;
          return in_lr;
        }
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 1;
        uVar2 = 0xd;
        goto LAB_08036558;
      }
      uVar2 = 2;
    }
    else if (((int)*(short *)(param_1 + 0x8c) < (int)*(char *)(param_1 + 0xd4) / 2) &&
            (4 < *(byte *)(DAT_02022b20 + 1))) {
      uVar2 = 10;
    }
    else {
      uVar2 = 7;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 1;
    uVar2 = 5;
LAB_08036558:
    *(undefined *)(param_1 + 0xf) = uVar2;
  }
  return in_lr;
}

