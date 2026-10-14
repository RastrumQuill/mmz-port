// sub_080C4DB4 at 0x080C4DB4 (thumb)

undefined4 sub_080C4DB4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x13f);
    sub_08005784(param_1 + 0x74,&DAT_08862268);
    uVar2 = 0;
    while (((int)uVar2 < 2 &&
           (iVar1 = sub_080C4898(param_1,param_1 + 0x54,uVar2 & 0xff), iVar1 != 0))) {
      *(char *)(param_1 + 0xb8) = *(char *)(param_1 + 0xb8) + '\x01';
      uVar2 = uVar2 + 1;
    }
    sub_0801CF00(param_1,0x5401);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

