// sub_08033010 at 0x08033010 (thumb)

undefined4 sub_08033010(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x16);
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082ad4cc);
    uVar1 = sub_08033B30(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    if (*(short *)(param_1 + 0xcc) != 0) {
      *(short *)(param_1 + 0xcc) = 0;
      *(undefined *)(*(int *)(param_1 + 0x20) + 0x11) = 1;
    }
    sub_08001EAC(0x3a);
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x1f;
    *(undefined *)(param_1 + 0xe) = 1;
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    *(byte *)(param_1 + 0x13) = (byte)(uVar2 * 2 >> 0x11) & 3;
  }
  return in_lr;
}

