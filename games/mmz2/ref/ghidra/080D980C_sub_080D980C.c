// sub_080D980C at 0x080D980C (thumb)

undefined4 sub_080D980C(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(char *)(param_1 + 0xc9) + -1;
  *(char *)(param_1 + 0xc9) = (char)iVar2;
  if (iVar2 < 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    sub_080032EC(0x27);
    sub_080D9894(param_1);
  }
  else {
    if (iVar2 == 0) {
      sVar1 = 0x200;
      sub_080BF05C(param_1);
      *(char *)(param_1 + 0xca) = (char)iVar2;
      *(undefined4 *)(param_1 + 0xcc) = 0;
    }
    else {
      sVar1 = (short)(((short)(&DAT_080ef450)[iVar2 * 4 + 0x40U & 0xff] + 0x100) / 2) + 0x100;
    }
    *(short *)(param_1 + 0x50) = sVar1;
    *(short *)(param_1 + 0x52) = sVar1;
    sub_08012A14(param_1);
  }
  return in_lr;
}

