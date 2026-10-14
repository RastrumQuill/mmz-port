// sub_08076AE4 at 0x08076AE4 (thumb)

undefined4 sub_08076AE4(int param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined4 in_lr;
  
  if ((DAT_02022ae0 & 0x10) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
LAB_08076bd0:
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  puVar5 = (uint *)(param_1 + 0x90);
  iVar4 = param_1 + 0x6c;
  if ((*(char *)(param_1 + 0xd) == '\0') && ((*(ushort *)puVar5 & 0x100) != 0)) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar3 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar3 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0x40;
    sub_080033F0(iVar4,0xb);
    *(undefined *)(param_1 + 0xd) = 1;
  }
  sub_08003458(iVar4);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = iVar3;
    iVar4 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x50) = iVar4;
    cVar2 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar2 + -1;
    if (((cVar2 != '\x01') && (cVar2 = sub_080079CC(iVar3,iVar4), cVar2 == '\0')) &&
       ((*(ushort *)puVar5 & 4) == 0)) {
      return in_lr;
    }
    sub_0808827C(3,param_1 + 0x4c);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar5 = 0;
    goto LAB_08076bd0;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
  if (*(int *)(param_1 + 0x50) < iVar3) {
    if (0x6ff < *(int *)(param_1 + 0x58)) goto LAB_08076c1e;
    iVar3 = *(int *)(param_1 + 0x58) + 0x40;
  }
  else {
    *(int *)(param_1 + 0x50) = iVar3;
    iVar3 = 0x40;
  }
  *(int *)(param_1 + 0x58) = iVar3;
LAB_08076c1e:
  uVar1 = *(ushort *)puVar5;
  if ((uVar1 & 0x100) == 0) {
    sub_080033F0(iVar4,0xc);
    *puVar5 = uVar1 & 0x100;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
  *(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(param_1 + 0x50);
  return in_lr;
}

