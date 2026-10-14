// sub_080465CC at 0x080465CC (thumb)

undefined4 sub_080465CC(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,4);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_080297C0(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  if (0xb < bVar1) {
    if (bVar1 != 0xc) goto LAB_08046602;
    *(undefined *)(iVar3 + 0x11) = 0;
    bVar1 = *(byte *)(param_1 + 0x12);
  }
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
LAB_08046602:
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 9;
    if (*(short *)(param_1 + 0x8c) < 0x20) {
      uVar2 = 0x10;
    }
    else if (*(short *)(param_1 + 0x8c) < 0x30) {
      uVar2 = 0x18;
    }
    else {
      uVar2 = 0x20;
    }
    *(undefined *)(param_1 + 0x12) = uVar2;
  }
  return in_lr;
}

