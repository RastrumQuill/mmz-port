// sub_0809BC30 at 0x0809BC30 (thumb)

undefined4 sub_0809BC30(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  byte abStack_10 [4];
  
  sub_08128B5C(abStack_10,&DAT_0812959c,4);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0xbd) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)(*(char *)(param_1 + 0x71) * 4 + (&DAT_0885de08)[abStack_10[bVar1]]));
  if (*(char *)(param_1 + 0xbc) != '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

