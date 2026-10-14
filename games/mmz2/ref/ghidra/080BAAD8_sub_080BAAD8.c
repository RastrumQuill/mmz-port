// sub_080BAAD8 at 0x080BAAD8 (thumb)

undefined4 sub_080BAAD8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_080128D4();
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x11) != '\0') {
      sub_080B0ACC(param_1 + 0x54,&UNK_08347164 + (uint)*(byte *)(param_1 + 0x10) * 0x1c,0,0);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080BAB8C(param_1);
  }
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xb4) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x5c);
    iVar2 = sub_080EF150(iVar4,3);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2 * 2;
    iVar3 = *(int *)(param_1 + 0x60);
    iVar2 = sub_080EF150(iVar3,3);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2 * 2;
    *(int *)(param_1 + 0x5c) = iVar4 + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x60) = iVar3 + *(int *)(param_1 + 0x68);
  }
  return in_lr;
}

