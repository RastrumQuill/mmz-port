// sub_08058374 at 0x08058374 (thumb)

undefined4 sub_08058374(int param_1)

{
  undefined uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0x280;
    pcVar3 = (char *)(param_1 + 0xc6);
    *(char *)(param_1 + 0x1f) = *pcVar3;
    *pcVar3 = *pcVar3 + -0x40;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  psVar6 = (short *)(param_1 + 0xc0);
  *psVar6 = *psVar6 + -8;
  iVar4 = (int)*psVar6 * (int)(short)(&DAT_080c8e24)[*(byte *)(param_1 + 0xc6) + 0x40];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar4 >> 8;
  iVar5 = (int)*psVar6 * (int)(short)(&DAT_080c8e24)[*(byte *)(param_1 + 0xc6)];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x58) = iVar5 >> 8;
  iVar7 = *(int *)(param_1 + 0x4c) + (iVar4 >> 8);
  *(int *)(param_1 + 0x4c) = iVar7;
  iVar4 = *(int *)(param_1 + 0x50) + (iVar5 >> 8);
  *(int *)(param_1 + 0x50) = iVar4;
  if (*psVar6 < 0) {
    iVar4 = (*(int *)(DAT_0202286c + 0x50) >> 8) - (iVar4 >> 8);
    if (((iVar4 + 0x60U & 0xffff) < 0xc1) &&
       (iVar5 = (*(int *)(DAT_0202286c + 0x4c) >> 8) - (iVar7 >> 8), (iVar5 + 0x60U & 0xffff) < 0xc1
       )) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0xf) = 2;
      uVar2 = sub_080C88E8(iVar5 * 0x10000 >> 0x14,iVar4 * 0x10000 >> 0x14);
      uVar1 = (undefined)((uVar2 & 0xffff) + 0x4000 >> 8);
    }
    else {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0xf) = 1;
      uVar1 = 0;
    }
    *(undefined *)(param_1 + 0x13) = uVar1;
  }
  return in_lr;
}

