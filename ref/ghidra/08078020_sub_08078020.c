// sub_08078020 at 0x08078020 (thumb)

undefined4 sub_08078020(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        *(undefined *)(param_1 + 0x12) = 0x3c;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar2 != 3) {
        return in_lr;
      }
      bVar2 = *(char *)(param_1 + 0x12) - 1;
      *(byte *)(param_1 + 0x12) = bVar2;
      if (bVar2 < 0x1e) {
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        bVar2 = *(byte *)(param_1 + 10);
        bVar4 = bVar2 & 0xfb;
        *(byte *)(param_1 + 10) = bVar4;
        if ((*(byte *)(param_1 + 0x12) & 2) == 0) {
          bVar2 = bVar4 | 1;
        }
        else {
          bVar2 = bVar2 & 0xfa;
        }
        *(byte *)(param_1 + 10) = bVar2;
      }
      if (*(char *)(param_1 + 0x12) == '\0') {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0xc);
      }
      goto LAB_08078144;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b1ae8,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    sub_08076600(param_1);
    sub_080033F0(param_1 + 0x6c,0);
    *(char *)(param_1 + 0x1f) = *(char *)(param_1 + 0x12) + -0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar3;
  iVar5 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar5;
  cVar1 = sub_080079CC(iVar3 + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40] * 0xc,
                       iVar5 + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] * 0xc);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
LAB_08078144:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

