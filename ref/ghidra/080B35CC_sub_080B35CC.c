// sub_080B35CC at 0x080B35CC (thumb)

undefined4 sub_080B35CC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
LAB_080b3668:
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    iVar5 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x50) = iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
    if (iVar5 < *(int *)(param_1 + 0x60)) {
LAB_080b36b2:
      sub_08001904(0x1f,0);
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x60) + -0x1600;
    sub_080033F0(param_1 + 0x6c,1);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto LAB_080b36b2;
      sub_080B3140(param_1);
      sub_080033F0(param_1 + 0x6c,0);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      iVar5 = *(int *)(param_1 + 0x4c);
      uVar4 = sub_080C8AD0(*(int *)(iVar3 + 0x4c) - iVar5,0x2d);
      *(undefined4 *)(param_1 + 0x54) = uVar4;
      *(undefined4 *)(param_1 + 0x58) = 0xfffffc00;
      uVar4 = sub_08008360(iVar5,*(undefined4 *)(param_1 + 0x50));
      *(undefined4 *)(param_1 + 0x60) = uVar4;
      if (*(int *)(param_1 + 0x54) < 0) {
        *(undefined *)(param_1 + 0x44) = 1;
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        *(undefined *)(param_1 + 0x44) = 0;
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      goto LAB_080b3668;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      goto LAB_080b3734;
    }
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  sub_08001904(0x1f,0);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
    return in_lr;
  }
  sub_0801C488(iVar3,1);
  sub_080BC818(0x100,0x5a);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080b3734:
  cVar2 = sub_08001904(0x7d,0);
  if (cVar2 != '\x03') {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6d68)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

