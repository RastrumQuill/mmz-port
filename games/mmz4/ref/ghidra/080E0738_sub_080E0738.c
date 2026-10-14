// sub_080E0738 at 0x080E0738 (thumb)

undefined4 sub_080E0738(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\x01') {
    sub_0801CF00(param_1,0x7505);
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(undefined4 *)(param_1 + 0x5c) = 0xffffff00;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x100;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = sub_080E0894(param_1);
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  sub_080E087C(param_1);
  return in_lr;
}

