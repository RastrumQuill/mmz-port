// sub_0804A514 at 0x0804A514 (thumb)

undefined4 sub_0804A514(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080033F0(param_1 + 0x6c,0);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x10) == '\x04') {
    iVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0x50) = iVar1 + 0x100;
  }
  iVar1 = sub_08048BE8(param_1);
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

