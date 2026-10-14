// sub_0806BF94 at 0x0806BF94 (thumb)

undefined4 sub_0806BF94(int param_1)

{
  char *pcVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (1 < *(byte *)(*(int *)(param_1 + 0x24) + 0xc)) {
    if (*(int *)(param_1 + 0x4c) < *(int *)(iVar3 + 0x4c)) {
      pcVar1 = (char *)(iVar3 + 0xdc);
    }
    else {
      pcVar1 = (char *)(iVar3 + 0xdd);
    }
    if (*pcVar1 == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      puVar2 = (ushort *)(*(int *)(param_1 + 0x20) + 0xd8);
      *puVar2 = ((ushort)(1 << *(sbyte *)(param_1 + 0x11)) ^ 0xff) & *puVar2;
      *(undefined *)(param_1 + 0xd) = 0;
    }
    else {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  return in_lr;
}

