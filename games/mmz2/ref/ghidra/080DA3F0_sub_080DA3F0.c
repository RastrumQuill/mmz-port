// sub_080DA3F0 at 0x080DA3F0 (thumb)

undefined4 sub_080DA3F0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  iVar2 = sub_080DABF4();
  if ((DAT_0202ebb4 & 2) == 0) {
    puVar3 = &DAT_0834b954;
  }
  else {
    puVar3 = &DAT_0834b93c;
  }
  *(uint *)(param_1 + 0x54) =
       *(int *)(puVar3 + 0x10) + (uint)*(byte *)(iVar2 + 6) * (uint)bVar1 * 0x200;
  if (*(char *)(iVar2 + 1) == '\0') {
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
      sub_080127E4(param_1,*(undefined2 *)
                            (&DAT_0834b908 + (uint)*(byte *)(*(int *)(iVar2 + 0x10) + 0x215) * 2));
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 8)
      ;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
  }
  return in_lr;
}

