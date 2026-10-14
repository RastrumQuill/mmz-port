// sub_0802DB90 at 0x0802DB90 (thumb)

undefined4 sub_0802DB90(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x2b9);
  iVar1 = sub_080EF150(0x400 - *(int *)(param_1 + 200),uVar2);
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + iVar1;
  iVar1 = uVar2 - 1;
  *(byte *)(param_1 + 0x2b9) = (byte)iVar1;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 2;
  }
  if ((*(char *)(param_1 + 0x71) == '\0') && (*(char *)(param_1 + 0x72) < '\x02')) {
    sub_08033A1C(param_1,3,0,0,0xf,*(undefined *)(param_1 + 0x215),0);
  }
  sub_0802DC18(param_1);
  return in_lr;
}

