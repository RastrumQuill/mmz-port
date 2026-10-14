// sub_08091A74 at 0x08091A74 (thumb)

undefined4 sub_08091A74(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
    cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c));
    if (cVar1 != '\0') {
      sub_0808827C(3,param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}

