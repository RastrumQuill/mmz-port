// sub_08049558 at 0x08049558 (thumb)

undefined4 sub_08049558(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    if (1 < *(byte *)(*(int *)(param_1 + 0xe0) + 0xc)) {
      sub_080127E4(param_1,0xa502);
      sub_08006E08(param_1 + 0x74,&DAT_0833ad0c);
      if (*(int *)(param_1 + 0xc4) + -0x7800 < *(int *)(param_1 + 0x54)) {
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        iVar2 = *(int *)(param_1 + 0x54);
        iVar4 = 0xb00;
      }
      else {
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        iVar2 = *(int *)(param_1 + 0x54);
        iVar4 = -0xb00;
      }
      *(int *)(param_1 + 0x54) = iVar2 + iVar4;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1c00;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54));
  if (sVar1 != 0) {
    uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined *)(param_1 + 0xd) = 0x28;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

