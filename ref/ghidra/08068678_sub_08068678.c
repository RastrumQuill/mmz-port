// sub_08068678 at 0x08068678 (thumb)

undefined4 sub_08068678(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,2);
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
  iVar4 = sub_080C88E8((*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c)) * 0x100 >> 0x10,
                       (*(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50)) * 0x100 >> 0x10);
  uVar5 = (uint)(iVar4 << 0x10) >> 0x18;
  *(char *)(param_1 + 0x13) = (char)((uint)iVar4 >> 8);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (0x6f < uVar5) goto LAB_0806873c;
  }
  else if (0x6e < (uVar5 - 0x11 & 0xff)) goto LAB_0806873c;
  *(undefined *)(param_1 + 0xd) = 3;
  *(undefined *)(param_1 + 0xe) = 1;
LAB_0806873c:
  *(int *)(param_1 + 0x4c) = *(int *)(*(int *)(param_1 + 0x20) + 0x4c) + 0x400;
  *(int *)(param_1 + 0x50) = *(int *)(*(int *)(param_1 + 0x20) + 0x50) + -0x2e00;
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == -1) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 1;
    bVar2 = *(byte *)(param_1 + 10) & 0x10;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar2 = 0x80;
    }
    *(byte *)(param_1 + 0x13) = bVar2;
  }
  return in_lr;
}

