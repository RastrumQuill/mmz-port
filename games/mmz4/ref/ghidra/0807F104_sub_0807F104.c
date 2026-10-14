// sub_0807F104 at 0x0807F104 (thumb)

undefined4 sub_0807F104(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x3800) {
      sub_0801CF00(param_1);
    }
    *(undefined *)(param_1 + 0x12) = 4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  bVar1 = DAT_0202e922 & 1;
  if ((DAT_0202e922 & 1) == 0) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xd7) = 4;
    *(byte *)(param_1 + 0xe) = bVar1;
  }
  return in_lr;
}

