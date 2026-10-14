// sub_0803C7A8 at 0x0803C7A8 (thumb)

undefined4 sub_0803C7A8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,2);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x300;
    *(undefined4 *)(param_1 + 0x58) = 0x100;
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  sub_080297C0(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 < 0x19) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    if (bVar1 == 8) {
      sub_08029778(param_1,1);
      sub_080297C0(param_1);
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0xf) = 0x18;
    }
  }
  else {
    *(byte *)(param_1 + 0x12) = bVar1 - 1;
  }
  return in_lr;
}

