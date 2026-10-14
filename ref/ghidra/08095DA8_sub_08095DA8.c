// sub_08095DA8 at 0x08095DA8 (thumb)

undefined4 sub_08095DA8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar2 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar2;
  cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),iVar2 + 0x40);
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x58) < 0x700) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
    }
  }
  else {
    sub_0808827C(3,param_1 + 0x4c);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

