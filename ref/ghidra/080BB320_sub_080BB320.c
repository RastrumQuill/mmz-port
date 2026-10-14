// sub_080BB320 at 0x080BB320 (thumb)

undefined4 sub_080BB320(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  cVar1 = sub_080BB650();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(param_1 + 9)] + 8);
    sub_080BB478(param_1);
  }
  else {
    iVar2 = sub_080BB6EC(param_1);
    if (iVar2 * 0x10000 < 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      sub_080BB82C(param_1);
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    }
  }
  return in_lr;
}

