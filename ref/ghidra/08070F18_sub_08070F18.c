// sub_08070F18 at 0x08070F18 (thumb)

undefined4 sub_08070F18(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082b1238);
    sub_080033F0(param_1 + 0x6c,5);
    *(undefined4 *)(param_1 + 0x54) = 0xfffffe80;
    uVar2 = 0xfffffe80;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar2 = 0x180;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0x5a;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar3 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (-1 < iVar3) goto LAB_08070fc8;
  }
  else if (iVar3 < 0) goto LAB_08070fc8;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (0xa000 < iVar3) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
LAB_08070fc8:
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08070660(param_1,*(undefined4 *)(param_1 + 0x54),0x100);
  return in_lr;
}

