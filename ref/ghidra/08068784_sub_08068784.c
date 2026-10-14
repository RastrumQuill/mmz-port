// sub_08068784 at 0x08068784 (thumb)

undefined4 sub_08068784(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,3);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = bVar1;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  iVar5 = sub_080C88E8((*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c)) * 0x100 >> 0x10,
                       (*(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50)) * 0x100 >> 0x10);
  uVar6 = (uint)(iVar5 << 0x10) >> 0x18;
  *(char *)(param_1 + 0x13) = (char)((uint)iVar5 >> 8);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar6 = uVar6 - 0x10 & 0xff;
  }
  if (0x70 < uVar6) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(*(int *)(param_1 + 0x20) + 0x4c) + 0x400;
  *(int *)(param_1 + 0x50) = *(int *)(*(int *)(param_1 + 0x20) + 0x50) + -0x2e00;
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == -1) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar4 = 0xef;
    }
    else {
      uVar4 = 0x90;
    }
    *(undefined *)(param_1 + 0x13) = uVar4;
  }
  return in_lr;
}

