// sub_0807DC88 at 0x0807DC88 (thumb)

undefined4 sub_0807DC88(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = param_1 + 0x6c;
  sub_08003458(iVar3);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_080033F0(iVar3,0xf);
      sub_08003458(iVar3);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    if ((*(byte *)(param_1 + 0x12) & 4) == 0) {
      sub_0808827C(3,param_1 + 0x4c);
    }
  }
  if (0x60 < *(byte *)(param_1 + 0x12)) {
    if ((*(byte *)(param_1 + 0x12) & 3) < 2) {
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
      *(undefined *)(param_1 + 0x1e) = 0xd;
    }
    else {
      cVar1 = (&DAT_02022fe0)[*(byte *)(param_1 + 9)];
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
      *(char *)(param_1 + 0x1e) = cVar1;
    }
  }
  iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar3;
  uVar2 = sub_080079CC(iVar3,*(undefined4 *)(param_1 + 0x50));
  if (((uVar2 & 0xf) != 0) &&
     (uVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50)),
     (uVar2 & 0x80) == 0)) {
    sub_0808827C(2,param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  if ((((*(ushort *)(param_1 + 0x90) & 4) != 0) || (0x80 < *(byte *)(param_1 + 0x12))) ||
     ((*(ushort *)(param_1 + 0x90) & 0x240) != 0)) {
    sub_0808827C(2,param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

