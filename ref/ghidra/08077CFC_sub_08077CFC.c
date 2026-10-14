// sub_08077CFC at 0x08077CFC (thumb)

undefined4 sub_08077CFC(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  cVar1 = *(char *)(param_1 + 0x12);
  if (cVar1 == '\0') {
    iVar2 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = iVar2;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar3 = (uint)*(byte *)(param_1 + 0xf) * 4;
    if (*(int *)(&DAT_082b1ab0 + iVar3 + (uint)*(byte *)(param_1 + 0x11) * 0xc) <
        iVar2 - *(int *)(param_1 + 0xb8)) {
      if (*(byte *)(param_1 + 0xf) == 2) {
        *(undefined *)(param_1 + 0xc0) = 1;
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
        return in_lr;
      }
      iVar3 = iVar3 + (uint)*(byte *)(param_1 + 0x11) * 8;
      *(int *)(param_1 + 0x4c) = *(int *)(&DAT_082b1a90 + iVar3) + *(int *)(param_1 + 0xb8);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc) + *(int *)(&DAT_082b1aa0 + iVar3);
      *(undefined *)(param_1 + 0x12) = (&DAT_082b1ac8)[*(byte *)(param_1 + 0xf)];
      *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) + 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
    if ((1 < *(byte *)(*(int *)(param_1 + 0x20) + 0xc)) ||
       (*(int *)(*(int *)(param_1 + 0x20) + 0xc0) != 0)) {
      *(undefined *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8)
      ;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) >> 1;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
  }
  else {
    *(char *)(param_1 + 0x12) = cVar1 + -1;
    if (cVar1 == '\x01') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
      sub_080055FC(param_1 + 0x74,&DAT_082b1a70,param_1 + 0x4c,0);
      *(int *)(param_1 + 0xb4) = param_1;
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
  }
  return in_lr;
}

