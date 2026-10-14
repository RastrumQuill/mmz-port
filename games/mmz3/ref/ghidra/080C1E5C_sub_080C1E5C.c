// sub_080C1E5C at 0x080C1E5C (thumb)

undefined4 sub_080C1E5C(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\0') {
      uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
      uVar6 = uVar3 & 0x7fffffff;
      DAT_0202f608 = uVar6;
      uVar2 = sub_080FE4D8(uVar3 * 2 >> 0x11,0xff);
      *(undefined *)(param_1 + 0x13) = uVar2;
      *(undefined *)(param_1 + 0x24) = uVar2;
      *(undefined2 *)(param_1 + 0x50) = 0x80;
      *(undefined2 *)(param_1 + 0x52) = 0x80;
      if (*(short *)(param_1 + 0x80) == 0xc02) {
        uVar3 = uVar6 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar3 & 0x7fffffff;
        if ((uVar3 * 2 >> 0x11 & 1) == 0) {
          uVar5 = 0xc01;
        }
        else {
          uVar5 = 0xc00;
        }
        sub_08017700(param_1,uVar5);
      }
      else {
        sub_08017700(param_1,*(short *)(param_1 + 0x80));
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -0xc >> 8);
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
  }
  return in_lr;
}

