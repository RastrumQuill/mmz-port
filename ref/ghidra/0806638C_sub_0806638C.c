// sub_0806638C at 0x0806638C (thumb)

undefined4 sub_0806638C(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) !=
      *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
    if (*(char *)(param_1 + 0xc1) != '\0') {
      return in_lr;
    }
    iVar2 = *(int *)(param_1 + 0x24);
    *(undefined *)(iVar2 + 0xd) = 2;
    *(undefined *)(iVar2 + 0xe) = 1;
    return in_lr;
  }
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 1;
    if (*(char *)(param_1 + 0xc1) != '\0') goto LAB_08066440;
    iVar2 = *(int *)(param_1 + 0x24);
    uVar1 = 5;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 1;
    if (*(char *)(param_1 + 0xc1) != '\0') goto LAB_08066440;
    iVar2 = *(int *)(param_1 + 0x24);
    uVar1 = 8;
  }
  *(undefined *)(iVar2 + 0xd) = uVar1;
  *(undefined *)(iVar2 + 0xe) = 1;
LAB_08066440:
  *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  return in_lr;
}

