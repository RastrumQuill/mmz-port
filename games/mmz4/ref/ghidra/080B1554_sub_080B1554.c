// sub_080B1554 at 0x080B1554 (thumb)

undefined4 sub_080B1554(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x5a;
    sub_0801CF00(param_1,0xbb00);
    sub_08005784(param_1 + 0x74,&DAT_0885ff34);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = sub_080B16D0(param_1);
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

