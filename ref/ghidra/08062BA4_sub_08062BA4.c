// sub_08062BA4 at 0x08062BA4 (thumb)

undefined4 sub_08062BA4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,2);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    iVar3 = DAT_0202286c;
    iVar1 = sub_080C8AD0((*(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50)) * 0x100,0x280);
    uVar2 = sub_080C8AD0(*(int *)(iVar3 + 0x4c) - *(int *)(param_1 + 0x4c),iVar1 >> 8);
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(undefined4 *)(param_1 + 0x58) = 0;
    sub_08001EAC(0x80);
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar3 = *(int *)(param_1 + 0x58) + 0x20;
  *(int *)(param_1 + 0x58) = iVar3;
  if (0x280 < iVar3) {
    *(undefined4 *)(param_1 + 0x58) = 0x280;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  if ((*(int *)(DAT_0202286c + 0x50) + -0x2000 < *(int *)(param_1 + 0x50)) ||
     (0x4000 < *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0xbc))) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

