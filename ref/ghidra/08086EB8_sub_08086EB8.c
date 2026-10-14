// sub_08086EB8 at 0x08086EB8 (thumb)

undefined4 sub_08086EB8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  undefined2 auStack_24 [10];
  
  iVar3 = *(int *)(param_1 + 0x20);
  sub_080C8D70(auStack_24,&DAT_080c93ec,0x12);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto LAB_08086f76;
    sub_080033F0(param_1 + 0x6c,0);
  }
  else {
    if (1 < bVar1) {
      if ((bVar1 == 2) &&
         (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == -1)) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
        sub_08086894(param_1);
      }
      goto LAB_08086f76;
    }
    if (bVar1 != 0) goto LAB_08086f76;
    *(undefined2 *)(param_1 + 0x4a) = auStack_24[*(byte *)(param_1 + 0x12)];
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (bVar1 < 9) goto LAB_08086f76;
    sub_08076590(param_1);
    sub_080033F0(param_1 + 0x6c,0);
    sub_0800561C(param_1 + 0x74,&DAT_082b3008);
  }
  *(undefined *)(param_1 + 0x12) = 0x40;
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_08086f76:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (1 < *(byte *)(iVar3 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
    sub_08086894(param_1);
  }
  return in_lr;
}

