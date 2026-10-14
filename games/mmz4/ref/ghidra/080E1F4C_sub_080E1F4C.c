// sub_080E1F4C at 0x080E1F4C (thumb)

undefined4 sub_080E1F4C(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\x04') {
    sub_080D0894(2,param_1 + 0x54);
    sub_080E2134(param_1);
    sub_080E1D28(param_1 + 0x54,0x300,*(byte *)(param_1 + 10) >> 4 & 1);
    uVar2 = 0x302;
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    if (*(char *)(param_1 + 0x11) != '\x03') {
      sub_080D0894(3,param_1 + 0x54);
      goto LAB_080e1fbe;
    }
    sub_080D0894(2,param_1 + 0x54);
    sub_080E2134(param_1);
    uVar2 = 0x301;
    bVar1 = *(byte *)(param_1 + 10);
  }
  sub_080E1D28(param_1 + 0x54,uVar2,bVar1 >> 4 & 1);
LAB_080e1fbe:
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

