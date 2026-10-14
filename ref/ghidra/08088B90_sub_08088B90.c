// sub_08088B90 at 0x08088B90 (thumb)

undefined4 sub_08088B90(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0800DEFC(param_1,iVar3);
  sub_080033F0(param_1 + 0x6c,5);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar2 = 0x180;
  }
  else {
    uVar2 = 0xfffffe80;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = 0xfffffe40;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x1800;
  *(undefined *)(param_1 + 0x12) = 0x2d;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_080888F4(param_1);
  return in_lr;
}

