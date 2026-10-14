// sub_08062B00 at 0x08062B00 (thumb)

undefined4 sub_08062B00(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0xffffff80;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x54) + -0x20;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54) + 0x20;
  }
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = *(int *)(param_1 + 0x58) + -0x20;
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar1;
  uVar2 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if (0x1000 < uVar2) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

