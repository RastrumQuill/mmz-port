// sub_08045898 at 0x08045898 (thumb)

undefined4 sub_08045898(int param_1)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined2 *)(param_1 + 0xce) = 0x10;
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x13) = 0;
  }
  sub_080297C0(param_1);
  psVar3 = (short *)(param_1 + 0xce);
  *(short *)(param_1 + 0x48) = *psVar3;
  *(short *)(param_1 + 0x4a) = *psVar3;
  *psVar3 = *psVar3 + 1;
  uVar2 = *(byte *)(param_1 + 0x13) + 1;
  *(char *)(param_1 + 0x13) = (char)uVar2;
  if (6 < *(short *)(DAT_0202300c + 10)) {
    uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar1 & 0x7fffffff;
    sub_08097718(param_1 + 0x4c,1,(uVar2 & 7) << 5 | uVar1 * 2 >> 0x11 & 0x1f);
  }
  if (0xff < *psVar3) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

