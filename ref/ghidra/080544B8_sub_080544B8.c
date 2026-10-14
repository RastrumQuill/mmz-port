// sub_080544B8 at 0x080544B8 (thumb)

undefined4 sub_080544B8(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  uint local_24 [4];
  
  local_24[0] = 0x83;
  local_24[1] = 0x84;
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    (&DAT_02022ad4)[(int)local_24[*(byte *)(param_1 + 0x10)] >> 3] =
         (byte)(1 << (local_24[*(byte *)(param_1 + 0x10)] & 7)) |
         (&DAT_02022ad4)[(int)local_24[*(byte *)(param_1 + 0x10)] >> 3];
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar4 = *(int *)(param_1 + 0x58) + 0x10;
  *(int *)(param_1 + 0x58) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    local_24[2] = *(int *)(param_1 + 0x4c) + ((uVar3 * 2 >> 0x11 & 0x1f) - 0x10) * 0x100;
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    local_24[3] = *(int *)(param_1 + 0x50) + ((uVar3 * 2 >> 0x11 & 0x1f) - 0x20) * 0x100;
    sub_0808827C(2);
  }
  if ((*(byte *)(param_1 + 0x12) & 0xf) == 0) {
    sub_08001EAC(2);
  }
  cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (cVar2 != '\0') {
    sub_0808827C(1,param_1 + 0x4c);
    sub_08001EAC(2);
    sub_08015698(0,param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

