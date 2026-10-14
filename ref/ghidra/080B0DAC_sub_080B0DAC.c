// sub_080B0DAC at 0x080B0DAC (thumb)

undefined4 sub_080B0DAC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,5);
    *(undefined *)(param_1 + 0xe) = 0;
    *(char *)(param_1 + 0x44) = *(char *)(param_1 + 0xc4);
    if (*(char *)(param_1 + 0xc4) == '\0') {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x54) = 0x100;
      uVar3 = 0xfffffff8;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 0xffffff00;
      uVar3 = 8;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  sub_0809C980(param_1);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

