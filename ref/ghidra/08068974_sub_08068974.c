// sub_08068974 at 0x08068974 (thumb)

undefined4 sub_08068974(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  iVar6 = param_1 + 0x6c;
  sub_08003458(iVar6);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(*(int *)(param_1 + 0x20) + 0x4c) + 0x400;
    *(int *)(param_1 + 0x50) = *(int *)(iVar4 + 0x50) + -0x2e00;
    cVar2 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar2 + -1;
    if (cVar2 == '\0') {
      sub_080033F0(iVar6,0);
      sub_08003458(iVar6);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
      *(undefined *)(param_1 + 0x12) = 0;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(int *)(param_1 + 0x4c) = *(int *)(*(int *)(param_1 + 0x20) + 0x4c) + 0x400;
    *(uint *)(param_1 + 0x50) =
         *(int *)(iVar4 + 0x50) + (uint)*(byte *)(param_1 + 0x12) * 0x100 + -0x2e00;
    uVar5 = *(byte *)(param_1 + 0x12) + 1;
    *(char *)(param_1 + 0x12) = (char)uVar5;
    if (0x2e < (uVar5 & 0xff)) {
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      uVar5 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar5 & 0x7fffffff;
      sub_080753B4(iVar4,uVar5 * 2 >> 0x11 & 1,*(undefined *)(param_1 + 0x8c));
    }
  }
  return in_lr;
}

