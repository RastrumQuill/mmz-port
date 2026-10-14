// sub_08054074 at 0x08054074 (thumb)

undefined4 sub_08054074(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = sub_08005458(DAT_02022e98);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 0x10;
    *(undefined4 *)(iVar2 + 0x14) = 0x80540d9;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_02022ec0;
    *(undefined *)(iVar2 + 0x1e) = DAT_02022f40;
    *(undefined *)(iVar2 + 0x10) = 0;
    *(undefined *)(iVar2 + 0x11) = 0;
    iVar1 = DAT_0202286c;
    *(int *)(iVar2 + 0x4c) = *(int *)(DAT_0202286c + 0x4c) + -0x4000;
    *(int *)(iVar2 + 0x50) = *(int *)(iVar1 + 0x50) + -0x5000;
  }
  return in_lr;
}

