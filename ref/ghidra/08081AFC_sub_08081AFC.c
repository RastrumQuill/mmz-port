// sub_08081AFC at 0x08081AFC (thumb)

undefined4 sub_08081AFC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((1 < *(byte *)(iVar3 + 0xd)) &&
     (bVar1 = *(byte *)(param_1 + 0x13), *(byte *)(param_1 + 0x13) = bVar1 + 1, (bVar1 & 0xf) == 0))
  {
    sub_08096D70(param_1,0);
  }
  *(uint *)(param_1 + 0x4c) =
       *(int *)(iVar3 + 0x4c) +
       (int)(short)(&DAT_080c8e24)
                   [((uint)*(byte *)(param_1 + 0x11) + (uint)*(byte *)(iVar3 + 0x12) & 0xff) + 0x40]
       * (uint)*(byte *)(iVar3 + 0x13);
  *(int *)(param_1 + 0x50) =
       *(int *)(iVar3 + 0x50) +
       (short)(&DAT_080c8e24)
              [(uint)*(byte *)(param_1 + 0x11) + (uint)*(byte *)(iVar3 + 0x12) & 0xff] * 0x14;
  if (1 < *(byte *)(iVar3 + 0xc)) {
    if (*(char *)(iVar3 + 0x11) != '\0') {
      sub_08096D70(param_1,1);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (cVar2 != '\0') {
    sub_0808827C(3,param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

