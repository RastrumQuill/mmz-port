// sub_08051BCC at 0x08051BCC (thumb)

undefined4 sub_08051BCC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x180;
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 0x180;
    *(undefined4 *)(param_1 + 0x58) = 0x200;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58) + 0x40;
  sub_080516B8(param_1);
  if (0x400 < *(int *)(param_1 + 0x58)) {
    *(undefined4 *)(param_1 + 0x58) = 0x380;
  }
  cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
  }
  return in_lr;
}

