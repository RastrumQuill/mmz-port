// sub_08062CE4 at 0x08062CE4 (thumb)

undefined4 sub_08062CE4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0xe) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar1 = 0xfffffec0;
    }
    else {
      uVar1 = 0x140;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar1;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x58) + 0x20;
  *(int *)(param_1 + 0x58) = iVar2;
  if (-0x180 < iVar2) {
    *(undefined4 *)(param_1 + 0x58) = 0xfffffe80;
  }
  if (*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0xbc)) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc);
  }
  return in_lr;
}

