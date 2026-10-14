// sub_080326F8 at 0x080326F8 (thumb)

undefined4 sub_080326F8(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,9);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    if (*(short *)(param_1 + 0xcc) == 0) {
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar3 & 0x7fffffff;
      uVar3 = uVar3 * 2 >> 0x11 & 0x1f;
      *(undefined *)(param_1 + 0xd) = 0x12;
      if (uVar3 < 8) {
        *(undefined *)(param_1 + 0x12) = 0;
      }
      else {
        if (uVar3 < 0x14) {
          uVar2 = 1;
        }
        else {
          uVar2 = 2;
        }
        *(undefined *)(param_1 + 0x12) = uVar2;
      }
      *(undefined *)(param_1 + 0xf) = *(undefined *)(param_1 + 0x12);
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0x13;
    }
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

