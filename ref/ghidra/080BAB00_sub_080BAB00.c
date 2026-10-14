// sub_080BAB00 at 0x080BAB00 (thumb)

undefined4 sub_080BAB00(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  cVar1 = sub_080BAEF4();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(param_1 + 9)] + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080BAD18(param_1);
  }
  else {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b8bbc + (uint)*(byte *)(param_1 + 0xd) * 4));
    if (((*(uint *)(param_1 + 0xc) & 0xffff00) != 0) &&
       (iVar2 = sub_080BAF8C(param_1), -1 < iVar2 * 0x10000)) {
      sub_080BB094(param_1);
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    }
  }
  return in_lr;
}

