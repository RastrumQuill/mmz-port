// sub_08060F6C at 0x08060F6C (thumb)

undefined4 sub_08060F6C(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_0202e01c = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (DAT_0202d004 < *(int *)(param_1 + 0x58) + -0x1000) {
    uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar1 & 0x7fffffff;
    iVar2 = sub_080EF330(uVar1 * 2 >> 0x11,0xc0);
    *(int *)(param_1 + 0xc0) = iVar2 + 0x40;
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

