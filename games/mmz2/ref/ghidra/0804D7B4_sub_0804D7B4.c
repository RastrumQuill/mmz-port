// sub_0804D7B4 at 0x0804D7B4 (thumb)

undefined4 sub_0804D7B4(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((DAT_0202ec38 & 0x10) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0804D89C(param_1);
    return in_lr;
  }
  pcVar2 = (char *)(param_1 + 0xd3);
  if ((*pcVar2 == '\0') && (*(short *)(param_1 + 0xa4) < 0x20)) {
    sub_080032EC(0xdf);
    *pcVar2 = *pcVar2 + '\x01';
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_0804d84c:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_0804d85e;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    iVar1 = sub_0801E11C(0x18,param_1,&DAT_0833b85c);
    *(int *)(param_1 + 0x2c) = iVar1;
    if (iVar1 == 0) goto LAB_0804d85e;
    sub_080032EC(0xe0);
    goto LAB_0804d84c;
  }
  iVar1 = sub_0801E4D8();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_0804d85e:
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0833b6b4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  DAT_0202e044 = *(undefined4 *)(param_1 + 0x58);
  DAT_0202e040 = *(undefined4 *)(param_1 + 0x54);
  return in_lr;
}

