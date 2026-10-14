// sub_0804A57C at 0x0804A57C (thumb)

undefined4 sub_0804A57C(int param_1)

{
  ushort uVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(bool *)(param_1 + 0xc4) = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
  sub_080033F0(param_1 + 0x6c,3);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  uVar1 = *(ushort *)(undefined4 *)(param_1 + 0x90);
  if ((uVar1 & 0x1000) != 0) {
    if ((uVar1 & 0x800) != 0) {
      uVar2 = 3;
      goto LAB_0804a608;
    }
    iVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (*(int *)(param_1 + 0x50) == iVar3) {
      uVar2 = 2;
      goto LAB_0804a608;
    }
  }
  uVar2 = 1;
LAB_0804a608:
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  return in_lr;
}

