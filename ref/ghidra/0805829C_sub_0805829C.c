// sub_0805829C at 0x0805829C (thumb)

undefined4 sub_0805829C(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffe00;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar1 = *(int *)(param_1 + 0x58) + 0x10;
  *(int *)(param_1 + 0x58) = iVar1;
  if (-0xc < iVar1) {
    *(undefined4 *)(param_1 + 0x58) = 0xfffffff4;
  }
  iVar1 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar1;
  if (iVar1 < *(int *)(param_1 + 0xbc)) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  iVar1 = (*(int *)(DAT_0202286c + 0x50) >> 8) - (*(int *)(param_1 + 0x50) >> 8);
  if (((iVar1 + 0x60U & 0xffff) < 0xc1) &&
     (iVar3 = (*(int *)(DAT_0202286c + 0x4c) >> 8) - (*(int *)(param_1 + 0x4c) >> 8),
     (iVar3 + 0x60U & 0xffff) < 0xc1)) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 2;
    uVar2 = sub_080C88E8(iVar3 * 0x10000 >> 0x14,iVar1 * 0x10000 >> 0x14);
    *(char *)(param_1 + 0x13) = (char)((uVar2 & 0xffff) + 0x4000 >> 8);
  }
  return in_lr;
}

