// sub_080BACEC at 0x080BACEC (thumb)

undefined4 sub_080BACEC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080BB0E0();
  if (iVar1 < 1) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    *(short *)(param_1 + 0x48) = (short)iVar1;
  }
  return in_lr;
}

