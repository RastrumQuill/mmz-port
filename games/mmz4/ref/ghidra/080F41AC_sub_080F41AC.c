// sub_080F41AC at 0x080F41AC (thumb)

undefined4 sub_080F41AC(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 8;
    local_30 = *(undefined4 *)(param_1 + 0x58);
    local_34 = *(int *)(param_1 + 0x54) + -0x1400;
    sub_080D0894(2,&local_34);
    sub_08002B10(0x35);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      local_28 = *(undefined4 *)(param_1 + 0x58);
      local_2c = *(int *)(param_1 + 0x54) + -0x400;
      piVar4 = &local_2c;
LAB_080f428e:
      piVar4[1] = piVar4[1] + -0xc00;
      sub_080D0894(2,piVar4);
      iVar3 = 0x1800;
      iVar2 = piVar4[1];
LAB_080f42a4:
      piVar4[1] = iVar2 + iVar3;
      sub_080D0894(2,piVar4);
      sub_08002B10(0x35);
      *(undefined *)(param_1 + 0x12) = 8;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    break;
  case 2:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    local_24 = *(int *)(param_1 + 0x54) + -0x1200;
    piVar4 = &local_24;
    local_20 = *(int *)(param_1 + 0x58) + -0x1000;
    sub_080D0894(2,piVar4);
    iVar3 = 0x2000;
    iVar2 = local_20;
    goto LAB_080f42a4;
  case 3:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    local_18 = *(undefined4 *)(param_1 + 0x58);
    local_1c = *(int *)(param_1 + 0x54) + -0x400;
    piVar4 = &local_1c;
    goto LAB_080f428e;
  case 4:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      local_10 = *(undefined4 *)(param_1 + 0x58);
      local_14 = *(int *)(param_1 + 0x54) + -0xc00;
      sub_080D0894(1,&local_14);
      sub_08002B10(0x35);
      DAT_0202dad4 = DAT_0202dad4 + '\x01';
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    }
  }
  return in_lr;
}

