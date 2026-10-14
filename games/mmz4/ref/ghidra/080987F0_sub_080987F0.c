// sub_080987F0 at 0x080987F0 (thumb)

undefined4 sub_080987F0(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x204) == 0) {
    sub_0801CFF0(param_1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54));
    if (sVar1 != 0) {
      sub_080C35B4(param_1 + 0x54,0,3,*(byte *)(param_1 + 10) >> 4 & 1);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_08098884(param_1);
    }
  }
  else {
    sub_080D0894(1,param_1 + 0x54);
    sub_08002B10(0x35);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08098884(param_1);
  }
  return in_lr;
}

