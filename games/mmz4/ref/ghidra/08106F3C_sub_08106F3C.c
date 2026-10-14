// sub_08106F3C at 0x08106F3C (thumb)

undefined4 sub_08106F3C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    DAT_0202e05a = 0x280;
    DAT_0202de5a = 7;
    sub_08001D30(&DAT_08c44104,0xf000);
    sub_08002208(&DAT_08c44110,(DAT_0202de5a - 8) * 0x20 + 0x200);
    sub_0801CF00(param_1,0xd00);
    *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0x54) + 0x1200;
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0x1400;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffa00;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') goto LAB_08107018;
  sub_0801CFF0(param_1);
  if (*(int *)(param_1 + 0x60) < 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    iVar1 = *(int *)(param_1 + 0x54) + 0x140;
  }
  else {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0xd01) {
      sub_08002B10(0x35);
      sub_08002B10(0x132);
      sub_0801CF00(param_1,0xd01);
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 4;
    iVar1 = *(int *)(param_1 + 0x54) + 0x14;
  }
  *(int *)(param_1 + 0x54) = iVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
LAB_08107018:
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

