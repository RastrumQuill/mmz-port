// sub_08058B04 at 0x08058B04 (thumb)

undefined4 sub_08058B04(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0xffffffc0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x4c);
    iVar1 = *(int *)(DAT_0202286c + 0x4c);
  }
  else {
    iVar2 = *(int *)(DAT_0202286c + 0x4c);
    iVar1 = *(int *)(param_1 + 0x4c);
  }
  if ((-1 < iVar2 - iVar1) && (iVar2 - iVar1 < 0x9001)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

