// sub_08045940 at 0x08045940 (thumb)

undefined4 sub_08045940(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    sub_08029654(param_1);
    sub_08029778(param_1,0xb);
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x12) = 0;
    uVar2 = sub_080A7E48(param_1,0,2);
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 1) == 0) {
    sub_08029778(param_1,0xb);
  }
  else {
    sub_08029778(param_1,3);
  }
  sub_080297C0(param_1);
  if (0x1d < *(byte *)(param_1 + 0x12)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

