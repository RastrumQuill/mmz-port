// sub_080420A8 at 0x080420A8 (thumb)

undefined4 sub_080420A8(int param_1)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    sub_08029710(param_1);
    sub_08029778(param_1,0x1b);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x1800;
    *(undefined2 *)(param_1 + 0xce) = 0x100;
    iVar3 = param_1 + 0x4c;
    sub_08097718(iVar3,2,0);
    sub_08097718(iVar3,2,1);
    sub_08097718(iVar3,2,2);
    sub_08097718(iVar3,2,3);
  }
  sub_080297C0(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
  *(undefined *)(param_1 + 0x1e) = 0xd;
  psVar2 = (short *)(param_1 + 0xce);
  if (*psVar2 < 0x91) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else {
    *(short *)(param_1 + 0x48) = *psVar2;
    *(short *)(param_1 + 0x4a) = *psVar2;
    *psVar2 = *psVar2 + -1;
    if (6 < *(short *)(DAT_0202300c + 10)) {
      uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar1 & 0x7fffffff;
      sub_08097718(param_1 + 0x4c,0,(*(byte *)(param_1 + 0x13) & 7) << 5 | uVar1 * 2 >> 0x11 & 0x1f)
      ;
    }
  }
  return in_lr;
}

