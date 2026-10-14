// sub_080AE2E4 at 0x080AE2E4 (thumb)

undefined4 sub_080AE2E4(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa203);
    sub_08005784(param_1 + 0x74,&DAT_0885fa0c);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar1 = sub_08007020(*(undefined4 *)(param_1 + 0x54));
  if (sVar1 != 0) {
    sub_08002B10(0x3f);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080ADEA0(param_1);
  }
  return in_lr;
}

