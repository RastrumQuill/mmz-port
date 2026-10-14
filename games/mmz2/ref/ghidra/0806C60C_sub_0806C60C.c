// sub_0806C60C at 0x0806C60C (thumb)

undefined4 sub_0806C60C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_0833e53c);
    sub_080127E4(param_1,0xb03);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar1 = *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)] * 0x10;
  *(int *)(param_1 + 0x58) = iVar1;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  if (((DAT_0202ed54 + -0x5000 < iVar1) && (iVar1 < *(int *)(DAT_0202e130 + 0x58))) &&
     ((*(int *)(param_1 + 0x54) - *(int *)(DAT_0202e130 + 0x54)) + 0x1800U < 0x3000)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

