// sub_080E73EC at 0x080E73EC (thumb)

undefined4 sub_080E73EC(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xe17) == '\x02') {
    if (*(char *)(*(int *)(param_1 + 0x28) + 0xe0a) == '\0') {
      uVar1 = 0x9100;
    }
    else {
      uVar1 = 0xc100;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    *(undefined4 *)(param_1 + 0x58) = 0x7000;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x10000;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

