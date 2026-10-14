// sub_080B937C at 0x080B937C (thumb)

undefined4 sub_080B937C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127D0(param_1);
    sub_080127E4(param_1,0xac06);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
  *(uint *)(param_1 + 0x58) = *(int *)(iVar1 + 0x58) + (*(byte *)(param_1 + 0x11) & 1) * -0x100;
  if ((*(uint *)(iVar1 + 0xb4) & 1) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  sub_08012A14(param_1);
  return in_lr;
}

