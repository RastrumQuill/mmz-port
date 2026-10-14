// sub_080665AC at 0x080665AC (thumb)

undefined4 sub_080665AC(int param_1)

{
  char cVar1;
  undefined uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x6d04);
    sub_08006E08(param_1 + 0x74,&DAT_0833dba4);
    if (*(int *)(param_1 + 0xb8) < 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x80;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffff80;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    if (*(int *)(param_1 + 0xc0) == 0) {
      iVar4 = sub_0801E11C(0,param_1,&DAT_0833dc04);
      *(int *)(param_1 + 0xc0) = iVar4;
      if (iVar4 != 0) goto LAB_08066646;
    }
    else {
LAB_08066646:
      sub_08006E08(param_1 + 0x74,&DAT_0833dbd4);
    }
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_080666b2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) * 3 >> 2;
  sub_080128D4(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
    iVar4 = sub_0801E4D8(*(undefined4 *)(param_1 + 0xc0));
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0xc0) = 0;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
      *(undefined *)(param_1 + 0xd) = uVar2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
LAB_080666b2:
  sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x40);
  if (sVar3 != 0) {
    uVar5 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar5;
  }
  return in_lr;
}

