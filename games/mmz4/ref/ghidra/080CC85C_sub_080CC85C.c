// sub_080CC85C at 0x080CC85C (thumb)

undefined4 sub_080CC85C(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    iVar2 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x54) =
         *(int *)(iVar2 + 0x54) +
         *(int *)(&DAT_088632f8 + ((int)-(*(byte *)(iVar2 + 10) & 0x10) >> 0x1f & 4)) * 0x100;
    *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + -0x400;
    sVar1 = (ushort)*(byte *)(param_1 + 0x12) * 3 + 0x40;
    *(short *)(param_1 + 0x50) = sVar1;
    *(short *)(param_1 + 0x52) = sVar1;
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_0801CF00(param_1,0x9410);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  if ((1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) || (*(char *)(param_1 + 0x12) == '\0')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

