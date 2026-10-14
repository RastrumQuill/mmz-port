// sub_0806DD2C at 0x0806DD2C (thumb)

undefined4 sub_0806DD2C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x16a);
    sub_08005784(param_1 + 0x74,&DAT_088590b8);
    sub_0801CF00(param_1,0xad02);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  bVar1 = DAT_0202e922 & 1;
  if ((DAT_0202e922 & 1) == 0) {
    *(undefined *)(param_1 + 0xe) = 3;
    *(byte *)(param_1 + 0xf) = bVar1;
  }
  return in_lr;
}

