// sub_080AC180 at 0x080AC180 (thumb)

undefined4 sub_080AC180(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      piVar4 = *(int **)(&DAT_08368ebc + (*(byte *)(param_1 + 0x11) & 3) * 4);
      uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
      *(uint *)(param_1 + 0x60) = piVar4[1] - (uVar3 * 2 >> 0x11 & 0x1f);
      uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar3 & 0x7fffffff;
      *(uint *)(param_1 + 0x5c) = *piVar4 + -0x20 + (uVar3 * 2 >> 0x11 & 0x3f);
      sub_08017700(param_1,0xc01);
      *(undefined *)(param_1 + 0x12) = 0x3c;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x12) == '2') {
      sub_08007390(param_1 + 0x74,&DAT_08368e0c);
    }
    iVar2 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
  }
  else {
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_080B2484(1,param_1 + 0x54);
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

