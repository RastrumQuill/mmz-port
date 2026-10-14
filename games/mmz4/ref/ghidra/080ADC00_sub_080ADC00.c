// sub_080ADC00 at 0x080ADC00 (thumb)

undefined4 sub_080ADC00(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    local_18 = *(int *)(param_1 + 0x54) + -0xb00;
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    uVar2 = uVar2 * 2 >> 0x11 & 1;
    *(char *)(param_1 + 0xe) = (char)uVar2;
    if (uVar2 == 0) {
      local_14 = *(int *)(param_1 + 0x58);
      iVar3 = 0x300;
    }
    else {
      local_14 = *(int *)(param_1 + 0x58);
      iVar3 = -0x300;
    }
    local_14 = local_14 + iVar3;
    sub_080D0894(1,&local_18);
    *(undefined *)(param_1 + 0x12) = 4;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    local_10 = *(int *)(param_1 + 0x54) + 0xa00;
    if (*(char *)(param_1 + 0xe) == '\0') {
      local_c = *(int *)(param_1 + 0x58);
      iVar3 = -0x300;
    }
    else {
      local_c = *(int *)(param_1 + 0x58);
      iVar3 = 0x300;
    }
    local_c = local_c + iVar3;
    sub_080D0894(1);
    sub_08002B10(0x35);
    sub_0802AB70(0,0xff,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

